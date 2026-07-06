#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B09F0
// Address: 0x2b09f0 - 0x2b0cc0
void sub_002B09F0_0x2b09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B09F0_0x2b09f0");
#endif

    switch (ctx->pc) {
        case 0x2b09f0u: goto label_2b09f0;
        case 0x2b09f4u: goto label_2b09f4;
        case 0x2b09f8u: goto label_2b09f8;
        case 0x2b09fcu: goto label_2b09fc;
        case 0x2b0a00u: goto label_2b0a00;
        case 0x2b0a04u: goto label_2b0a04;
        case 0x2b0a08u: goto label_2b0a08;
        case 0x2b0a0cu: goto label_2b0a0c;
        case 0x2b0a10u: goto label_2b0a10;
        case 0x2b0a14u: goto label_2b0a14;
        case 0x2b0a18u: goto label_2b0a18;
        case 0x2b0a1cu: goto label_2b0a1c;
        case 0x2b0a20u: goto label_2b0a20;
        case 0x2b0a24u: goto label_2b0a24;
        case 0x2b0a28u: goto label_2b0a28;
        case 0x2b0a2cu: goto label_2b0a2c;
        case 0x2b0a30u: goto label_2b0a30;
        case 0x2b0a34u: goto label_2b0a34;
        case 0x2b0a38u: goto label_2b0a38;
        case 0x2b0a3cu: goto label_2b0a3c;
        case 0x2b0a40u: goto label_2b0a40;
        case 0x2b0a44u: goto label_2b0a44;
        case 0x2b0a48u: goto label_2b0a48;
        case 0x2b0a4cu: goto label_2b0a4c;
        case 0x2b0a50u: goto label_2b0a50;
        case 0x2b0a54u: goto label_2b0a54;
        case 0x2b0a58u: goto label_2b0a58;
        case 0x2b0a5cu: goto label_2b0a5c;
        case 0x2b0a60u: goto label_2b0a60;
        case 0x2b0a64u: goto label_2b0a64;
        case 0x2b0a68u: goto label_2b0a68;
        case 0x2b0a6cu: goto label_2b0a6c;
        case 0x2b0a70u: goto label_2b0a70;
        case 0x2b0a74u: goto label_2b0a74;
        case 0x2b0a78u: goto label_2b0a78;
        case 0x2b0a7cu: goto label_2b0a7c;
        case 0x2b0a80u: goto label_2b0a80;
        case 0x2b0a84u: goto label_2b0a84;
        case 0x2b0a88u: goto label_2b0a88;
        case 0x2b0a8cu: goto label_2b0a8c;
        case 0x2b0a90u: goto label_2b0a90;
        case 0x2b0a94u: goto label_2b0a94;
        case 0x2b0a98u: goto label_2b0a98;
        case 0x2b0a9cu: goto label_2b0a9c;
        case 0x2b0aa0u: goto label_2b0aa0;
        case 0x2b0aa4u: goto label_2b0aa4;
        case 0x2b0aa8u: goto label_2b0aa8;
        case 0x2b0aacu: goto label_2b0aac;
        case 0x2b0ab0u: goto label_2b0ab0;
        case 0x2b0ab4u: goto label_2b0ab4;
        case 0x2b0ab8u: goto label_2b0ab8;
        case 0x2b0abcu: goto label_2b0abc;
        case 0x2b0ac0u: goto label_2b0ac0;
        case 0x2b0ac4u: goto label_2b0ac4;
        case 0x2b0ac8u: goto label_2b0ac8;
        case 0x2b0accu: goto label_2b0acc;
        case 0x2b0ad0u: goto label_2b0ad0;
        case 0x2b0ad4u: goto label_2b0ad4;
        case 0x2b0ad8u: goto label_2b0ad8;
        case 0x2b0adcu: goto label_2b0adc;
        case 0x2b0ae0u: goto label_2b0ae0;
        case 0x2b0ae4u: goto label_2b0ae4;
        case 0x2b0ae8u: goto label_2b0ae8;
        case 0x2b0aecu: goto label_2b0aec;
        case 0x2b0af0u: goto label_2b0af0;
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0af8u: goto label_2b0af8;
        case 0x2b0afcu: goto label_2b0afc;
        case 0x2b0b00u: goto label_2b0b00;
        case 0x2b0b04u: goto label_2b0b04;
        case 0x2b0b08u: goto label_2b0b08;
        case 0x2b0b0cu: goto label_2b0b0c;
        case 0x2b0b10u: goto label_2b0b10;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b18u: goto label_2b0b18;
        case 0x2b0b1cu: goto label_2b0b1c;
        case 0x2b0b20u: goto label_2b0b20;
        case 0x2b0b24u: goto label_2b0b24;
        case 0x2b0b28u: goto label_2b0b28;
        case 0x2b0b2cu: goto label_2b0b2c;
        case 0x2b0b30u: goto label_2b0b30;
        case 0x2b0b34u: goto label_2b0b34;
        case 0x2b0b38u: goto label_2b0b38;
        case 0x2b0b3cu: goto label_2b0b3c;
        case 0x2b0b40u: goto label_2b0b40;
        case 0x2b0b44u: goto label_2b0b44;
        case 0x2b0b48u: goto label_2b0b48;
        case 0x2b0b4cu: goto label_2b0b4c;
        case 0x2b0b50u: goto label_2b0b50;
        case 0x2b0b54u: goto label_2b0b54;
        case 0x2b0b58u: goto label_2b0b58;
        case 0x2b0b5cu: goto label_2b0b5c;
        case 0x2b0b60u: goto label_2b0b60;
        case 0x2b0b64u: goto label_2b0b64;
        case 0x2b0b68u: goto label_2b0b68;
        case 0x2b0b6cu: goto label_2b0b6c;
        case 0x2b0b70u: goto label_2b0b70;
        case 0x2b0b74u: goto label_2b0b74;
        case 0x2b0b78u: goto label_2b0b78;
        case 0x2b0b7cu: goto label_2b0b7c;
        case 0x2b0b80u: goto label_2b0b80;
        case 0x2b0b84u: goto label_2b0b84;
        case 0x2b0b88u: goto label_2b0b88;
        case 0x2b0b8cu: goto label_2b0b8c;
        case 0x2b0b90u: goto label_2b0b90;
        case 0x2b0b94u: goto label_2b0b94;
        case 0x2b0b98u: goto label_2b0b98;
        case 0x2b0b9cu: goto label_2b0b9c;
        case 0x2b0ba0u: goto label_2b0ba0;
        case 0x2b0ba4u: goto label_2b0ba4;
        case 0x2b0ba8u: goto label_2b0ba8;
        case 0x2b0bacu: goto label_2b0bac;
        case 0x2b0bb0u: goto label_2b0bb0;
        case 0x2b0bb4u: goto label_2b0bb4;
        case 0x2b0bb8u: goto label_2b0bb8;
        case 0x2b0bbcu: goto label_2b0bbc;
        case 0x2b0bc0u: goto label_2b0bc0;
        case 0x2b0bc4u: goto label_2b0bc4;
        case 0x2b0bc8u: goto label_2b0bc8;
        case 0x2b0bccu: goto label_2b0bcc;
        case 0x2b0bd0u: goto label_2b0bd0;
        case 0x2b0bd4u: goto label_2b0bd4;
        case 0x2b0bd8u: goto label_2b0bd8;
        case 0x2b0bdcu: goto label_2b0bdc;
        case 0x2b0be0u: goto label_2b0be0;
        case 0x2b0be4u: goto label_2b0be4;
        case 0x2b0be8u: goto label_2b0be8;
        case 0x2b0becu: goto label_2b0bec;
        case 0x2b0bf0u: goto label_2b0bf0;
        case 0x2b0bf4u: goto label_2b0bf4;
        case 0x2b0bf8u: goto label_2b0bf8;
        case 0x2b0bfcu: goto label_2b0bfc;
        case 0x2b0c00u: goto label_2b0c00;
        case 0x2b0c04u: goto label_2b0c04;
        case 0x2b0c08u: goto label_2b0c08;
        case 0x2b0c0cu: goto label_2b0c0c;
        case 0x2b0c10u: goto label_2b0c10;
        case 0x2b0c14u: goto label_2b0c14;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c1cu: goto label_2b0c1c;
        case 0x2b0c20u: goto label_2b0c20;
        case 0x2b0c24u: goto label_2b0c24;
        case 0x2b0c28u: goto label_2b0c28;
        case 0x2b0c2cu: goto label_2b0c2c;
        case 0x2b0c30u: goto label_2b0c30;
        case 0x2b0c34u: goto label_2b0c34;
        case 0x2b0c38u: goto label_2b0c38;
        case 0x2b0c3cu: goto label_2b0c3c;
        case 0x2b0c40u: goto label_2b0c40;
        case 0x2b0c44u: goto label_2b0c44;
        case 0x2b0c48u: goto label_2b0c48;
        case 0x2b0c4cu: goto label_2b0c4c;
        case 0x2b0c50u: goto label_2b0c50;
        case 0x2b0c54u: goto label_2b0c54;
        case 0x2b0c58u: goto label_2b0c58;
        case 0x2b0c5cu: goto label_2b0c5c;
        case 0x2b0c60u: goto label_2b0c60;
        case 0x2b0c64u: goto label_2b0c64;
        case 0x2b0c68u: goto label_2b0c68;
        case 0x2b0c6cu: goto label_2b0c6c;
        case 0x2b0c70u: goto label_2b0c70;
        case 0x2b0c74u: goto label_2b0c74;
        case 0x2b0c78u: goto label_2b0c78;
        case 0x2b0c7cu: goto label_2b0c7c;
        case 0x2b0c80u: goto label_2b0c80;
        case 0x2b0c84u: goto label_2b0c84;
        case 0x2b0c88u: goto label_2b0c88;
        case 0x2b0c8cu: goto label_2b0c8c;
        case 0x2b0c90u: goto label_2b0c90;
        case 0x2b0c94u: goto label_2b0c94;
        case 0x2b0c98u: goto label_2b0c98;
        case 0x2b0c9cu: goto label_2b0c9c;
        case 0x2b0ca0u: goto label_2b0ca0;
        case 0x2b0ca4u: goto label_2b0ca4;
        case 0x2b0ca8u: goto label_2b0ca8;
        case 0x2b0cacu: goto label_2b0cac;
        case 0x2b0cb0u: goto label_2b0cb0;
        case 0x2b0cb4u: goto label_2b0cb4;
        case 0x2b0cb8u: goto label_2b0cb8;
        case 0x2b0cbcu: goto label_2b0cbc;
        default: break;
    }

    ctx->pc = 0x2b09f0u;

label_2b09f0:
    // 0x2b09f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b09f4:
    // 0x2b09f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b09f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b09f8:
    // 0x2b09f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b09fc:
    // 0x2b09fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b09fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a00:
    // 0x2b0a00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b0a04:
    // 0x2b0a04: 0xc0aeef6  jal         func_2BBBD8
label_2b0a08:
    if (ctx->pc == 0x2B0A08u) {
        ctx->pc = 0x2B0A08u;
            // 0x2b0a08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2B0A0Cu;
        goto label_2b0a0c;
    }
    ctx->pc = 0x2B0A04u;
    SET_GPR_U32(ctx, 31, 0x2B0A0Cu);
    ctx->pc = 0x2B0A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A04u;
            // 0x2b0a08: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBBD8u;
    if (runtime->hasFunction(0x2BBBD8u)) {
        auto targetFn = runtime->lookupFunction(0x2BBBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A0Cu; }
        if (ctx->pc != 0x2B0A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBBD8_0x2bbbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A0Cu; }
        if (ctx->pc != 0x2B0A0Cu) { return; }
    }
    ctx->pc = 0x2B0A0Cu;
label_2b0a0c:
    // 0x2b0a0c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_2b0a10:
    if (ctx->pc == 0x2B0A10u) {
        ctx->pc = 0x2B0A10u;
            // 0x2b0a10: 0x8c520008  lw          $s2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x2B0A14u;
        goto label_2b0a14;
    }
    ctx->pc = 0x2B0A0Cu;
    {
        const bool branch_taken_0x2b0a0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A0Cu;
            // 0x2b0a10: 0x8c520008  lw          $s2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a0c) {
            ctx->pc = 0x2B0A34u;
            goto label_2b0a34;
        }
    }
    ctx->pc = 0x2B0A14u;
label_2b0a14:
    // 0x2b0a14: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0a18:
    // 0x2b0a18: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0a1c:
    // 0x2b0a1c: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x2b0a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_2b0a20:
    // 0x2b0a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a24:
    // 0x2b0a24: 0xc0a5648  jal         func_295920
label_2b0a28:
    if (ctx->pc == 0x2B0A28u) {
        ctx->pc = 0x2B0A28u;
            // 0x2b0a28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A2Cu;
        goto label_2b0a2c;
    }
    ctx->pc = 0x2B0A24u;
    SET_GPR_U32(ctx, 31, 0x2B0A2Cu);
    ctx->pc = 0x2B0A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A24u;
            // 0x2b0a28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A2Cu; }
        if (ctx->pc != 0x2B0A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A2Cu; }
        if (ctx->pc != 0x2B0A2Cu) { return; }
    }
    ctx->pc = 0x2B0A2Cu;
label_2b0a2c:
    // 0x2b0a2c: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2b0a30:
    if (ctx->pc == 0x2B0A30u) {
        ctx->pc = 0x2B0A30u;
            // 0x2b0a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A34u;
        goto label_2b0a34;
    }
    ctx->pc = 0x2B0A2Cu;
    {
        const bool branch_taken_0x2b0a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A2Cu;
            // 0x2b0a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a2c) {
            ctx->pc = 0x2B0CA4u;
            goto label_2b0ca4;
        }
    }
    ctx->pc = 0x2B0A34u;
label_2b0a34:
    // 0x2b0a34: 0xc0a8bf6  jal         func_2A2FD8
label_2b0a38:
    if (ctx->pc == 0x2B0A38u) {
        ctx->pc = 0x2B0A38u;
            // 0x2b0a38: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x2B0A3Cu;
        goto label_2b0a3c;
    }
    ctx->pc = 0x2B0A34u;
    SET_GPR_U32(ctx, 31, 0x2B0A3Cu);
    ctx->pc = 0x2B0A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A34u;
            // 0x2b0a38: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A3Cu; }
        if (ctx->pc != 0x2B0A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A3Cu; }
        if (ctx->pc != 0x2B0A3Cu) { return; }
    }
    ctx->pc = 0x2B0A3Cu;
label_2b0a3c:
    // 0x2b0a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a40:
    // 0x2b0a40: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
label_2b0a44:
    if (ctx->pc == 0x2B0A44u) {
        ctx->pc = 0x2B0A44u;
            // 0x2b0a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A48u;
        goto label_2b0a48;
    }
    ctx->pc = 0x2B0A40u;
    {
        const bool branch_taken_0x2b0a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A40u;
            // 0x2b0a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a40) {
            ctx->pc = 0x2B0C78u;
            goto label_2b0c78;
        }
    }
    ctx->pc = 0x2B0A48u;
label_2b0a48:
    // 0x2b0a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a4c:
    // 0x2b0a4c: 0xc049cb6  jal         func_1272D8
label_2b0a50:
    if (ctx->pc == 0x2B0A50u) {
        ctx->pc = 0x2B0A50u;
            // 0x2b0a50: 0x24060120  addiu       $a2, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x2B0A54u;
        goto label_2b0a54;
    }
    ctx->pc = 0x2B0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A54u);
    ctx->pc = 0x2B0A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A4Cu;
            // 0x2b0a50: 0x24060120  addiu       $a2, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A54u; }
        if (ctx->pc != 0x2B0A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A54u; }
        if (ctx->pc != 0x2B0A54u) { return; }
    }
    ctx->pc = 0x2B0A54u;
label_2b0a54:
    // 0x2b0a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b0a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b0a58:
    // 0x2b0a58: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x2b0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2b0a5c:
    // 0x2b0a5c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2b0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_2b0a60:
    // 0x2b0a60: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2b0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_2b0a64:
    // 0x2b0a64: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2b0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2b0a68:
    // 0x2b0a68: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2b0a6c:
    // 0x2b0a6c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2b0a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2b0a70:
    // 0x2b0a70: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2b0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2b0a74:
    // 0x2b0a74: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2b0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2b0a78:
    // 0x2b0a78: 0x40f809  jalr        $v0
label_2b0a7c:
    if (ctx->pc == 0x2B0A7Cu) {
        ctx->pc = 0x2B0A80u;
        goto label_2b0a80;
    }
    ctx->pc = 0x2B0A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0A80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0A80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A80u; }
            if (ctx->pc != 0x2B0A80u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0A80u;
label_2b0a80:
    // 0x2b0a80: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2b0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2b0a84:
    // 0x2b0a84: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x2b0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_2b0a88:
    // 0x2b0a88: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2b0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2b0a8c:
    // 0x2b0a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a90:
    // 0x2b0a90: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2b0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2b0a94:
    // 0x2b0a94: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2b0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2b0a98:
    // 0x2b0a98: 0xc049cb6  jal         func_1272D8
label_2b0a9c:
    if (ctx->pc == 0x2B0A9Cu) {
        ctx->pc = 0x2B0A9Cu;
            // 0x2b0a9c: 0xfe020038  sd          $v0, 0x38($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
        ctx->pc = 0x2B0AA0u;
        goto label_2b0aa0;
    }
    ctx->pc = 0x2B0A98u;
    SET_GPR_U32(ctx, 31, 0x2B0AA0u);
    ctx->pc = 0x2B0A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A98u;
            // 0x2b0a9c: 0xfe020038  sd          $v0, 0x38($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AA0u; }
        if (ctx->pc != 0x2B0AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AA0u; }
        if (ctx->pc != 0x2B0AA0u) { return; }
    }
    ctx->pc = 0x2B0AA0u;
label_2b0aa0:
    // 0x2b0aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0aa4:
    // 0x2b0aa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b0aa8:
    // 0x2b0aa8: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2b0aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2b0aac:
    // 0x2b0aac: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2b0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2b0ab0:
    // 0x2b0ab0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2b0ab4:
    // 0x2b0ab4: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2b0ab8:
    // 0x2b0ab8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2b0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_2b0abc:
    // 0x2b0abc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2b0ac0:
    // 0x2b0ac0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2b0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_2b0ac4:
    // 0x2b0ac4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_2b0ac8:
    // 0x2b0ac8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2b0acc:
    // 0x2b0acc: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_2b0ad0:
    // 0x2b0ad0: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2b0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_2b0ad4:
    // 0x2b0ad4: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2b0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_2b0ad8:
    // 0x2b0ad8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2b0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_2b0adc:
    // 0x2b0adc: 0xc0abe46  jal         func_2AF918
label_2b0ae0:
    if (ctx->pc == 0x2B0AE0u) {
        ctx->pc = 0x2B0AE0u;
            // 0x2b0ae0: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0AE4u;
        goto label_2b0ae4;
    }
    ctx->pc = 0x2B0ADCu;
    SET_GPR_U32(ctx, 31, 0x2B0AE4u);
    ctx->pc = 0x2B0AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0ADCu;
            // 0x2b0ae0: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AE4u; }
        if (ctx->pc != 0x2B0AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AE4u; }
        if (ctx->pc != 0x2B0AE4u) { return; }
    }
    ctx->pc = 0x2B0AE4u;
label_2b0ae4:
    // 0x2b0ae4: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
label_2b0ae8:
    if (ctx->pc == 0x2B0AE8u) {
        ctx->pc = 0x2B0AE8u;
            // 0x2b0ae8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0AECu;
        goto label_2b0aec;
    }
    ctx->pc = 0x2B0AE4u;
    {
        const bool branch_taken_0x2b0ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0AE4u;
            // 0x2b0ae8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ae4) {
            ctx->pc = 0x2B0C78u;
            goto label_2b0c78;
        }
    }
    ctx->pc = 0x2B0AECu;
label_2b0aec:
    // 0x2b0aec: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2b0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2b0af0:
    // 0x2b0af0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2b0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2b0af4:
    // 0x2b0af4: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x2b0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_2b0af8:
    // 0x2b0af8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2b0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2b0afc:
    // 0x2b0afc: 0x24840980  addiu       $a0, $a0, 0x980
    ctx->pc = 0x2b0afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2432));
label_2b0b00:
    // 0x2b0b00: 0xc0a6170  jal         func_2985C0
label_2b0b04:
    if (ctx->pc == 0x2B0B04u) {
        ctx->pc = 0x2B0B04u;
            // 0x2b0b04: 0x24a509b0  addiu       $a1, $a1, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
        ctx->pc = 0x2B0B08u;
        goto label_2b0b08;
    }
    ctx->pc = 0x2B0B00u;
    SET_GPR_U32(ctx, 31, 0x2B0B08u);
    ctx->pc = 0x2B0B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B00u;
            // 0x2b0b04: 0x24a509b0  addiu       $a1, $a1, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (runtime->hasFunction(0x2985C0u)) {
        auto targetFn = runtime->lookupFunction(0x2985C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B08u; }
        if (ctx->pc != 0x2B0B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002985C0_0x2985c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B08u; }
        if (ctx->pc != 0x2B0B08u) { return; }
    }
    ctx->pc = 0x2B0B08u;
label_2b0b08:
    // 0x2b0b08: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_2b0b0c:
    if (ctx->pc == 0x2B0B0Cu) {
        ctx->pc = 0x2B0B0Cu;
            // 0x2b0b0c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0B10u;
        goto label_2b0b10;
    }
    ctx->pc = 0x2B0B08u;
    {
        const bool branch_taken_0x2b0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B08u;
            // 0x2b0b0c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b08) {
            ctx->pc = 0x2B0C78u;
            goto label_2b0c78;
        }
    }
    ctx->pc = 0x2B0B10u;
label_2b0b10:
    // 0x2b0b10: 0xc0a3b58  jal         func_28ED60
label_2b0b14:
    if (ctx->pc == 0x2B0B14u) {
        ctx->pc = 0x2B0B18u;
        goto label_2b0b18;
    }
    ctx->pc = 0x2B0B10u;
    SET_GPR_U32(ctx, 31, 0x2B0B18u);
    ctx->pc = 0x28ED60u;
    if (runtime->hasFunction(0x28ED60u)) {
        auto targetFn = runtime->lookupFunction(0x28ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B18u; }
        if (ctx->pc != 0x2B0B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028ED60_0x28ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B18u; }
        if (ctx->pc != 0x2B0B18u) { return; }
    }
    ctx->pc = 0x2B0B18u;
label_2b0b18:
    // 0x2b0b18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b0b1c:
    if (ctx->pc == 0x2B0B1Cu) {
        ctx->pc = 0x2B0B1Cu;
            // 0x2b0b1c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0B20u;
        goto label_2b0b20;
    }
    ctx->pc = 0x2B0B18u;
    {
        const bool branch_taken_0x2b0b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B18u;
            // 0x2b0b1c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b18) {
            ctx->pc = 0x2B0B50u;
            goto label_2b0b50;
        }
    }
    ctx->pc = 0x2B0B20u;
label_2b0b20:
    // 0x2b0b20: 0xc0abe32  jal         func_2AF8C8
label_2b0b24:
    if (ctx->pc == 0x2B0B24u) {
        ctx->pc = 0x2B0B28u;
        goto label_2b0b28;
    }
    ctx->pc = 0x2B0B20u;
    SET_GPR_U32(ctx, 31, 0x2B0B28u);
    ctx->pc = 0x2AF8C8u;
    if (runtime->hasFunction(0x2AF8C8u)) {
        auto targetFn = runtime->lookupFunction(0x2AF8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B28u; }
        if (ctx->pc != 0x2B0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF8C8_0x2af8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B28u; }
        if (ctx->pc != 0x2B0B28u) { return; }
    }
    ctx->pc = 0x2B0B28u;
label_2b0b28:
    // 0x2b0b28: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_2b0b2c:
    if (ctx->pc == 0x2B0B2Cu) {
        ctx->pc = 0x2B0B2Cu;
            // 0x2b0b2c: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2B0B30u;
        goto label_2b0b30;
    }
    ctx->pc = 0x2B0B28u;
    {
        const bool branch_taken_0x2b0b28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B28u;
            // 0x2b0b2c: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b28) {
            ctx->pc = 0x2B0B54u;
            goto label_2b0b54;
        }
    }
    ctx->pc = 0x2B0B30u;
label_2b0b30:
    // 0x2b0b30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0b34:
    // 0x2b0b34: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0b38:
    // 0x2b0b38: 0x2406010d  addiu       $a2, $zero, 0x10D
    ctx->pc = 0x2b0b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
label_2b0b3c:
    // 0x2b0b3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0b40:
    // 0x2b0b40: 0xc0a5648  jal         func_295920
label_2b0b44:
    if (ctx->pc == 0x2B0B44u) {
        ctx->pc = 0x2B0B44u;
            // 0x2b0b44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B48u;
        goto label_2b0b48;
    }
    ctx->pc = 0x2B0B40u;
    SET_GPR_U32(ctx, 31, 0x2B0B48u);
    ctx->pc = 0x2B0B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B40u;
            // 0x2b0b44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B48u; }
        if (ctx->pc != 0x2B0B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B48u; }
        if (ctx->pc != 0x2B0B48u) { return; }
    }
    ctx->pc = 0x2B0B48u;
label_2b0b48:
    // 0x2b0b48: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2b0b4c:
    if (ctx->pc == 0x2B0B4Cu) {
        ctx->pc = 0x2B0B4Cu;
            // 0x2b0b4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B0B50u;
        goto label_2b0b50;
    }
    ctx->pc = 0x2B0B48u;
    {
        const bool branch_taken_0x2b0b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B48u;
            // 0x2b0b4c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b48) {
            ctx->pc = 0x2B0C7Cu;
            goto label_2b0c7c;
        }
    }
    ctx->pc = 0x2B0B50u;
label_2b0b50:
    // 0x2b0b50: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2b0b50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_2b0b54:
    // 0x2b0b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b0b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b0b58:
    // 0x2b0b58: 0x24e7d360  addiu       $a3, $a3, -0x2CA0
    ctx->pc = 0x2b0b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955872));
label_2b0b5c:
    // 0x2b0b5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2b0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2b0b60:
    // 0x2b0b60: 0xc0ae6d2  jal         func_2B9B48
label_2b0b64:
    if (ctx->pc == 0x2B0B64u) {
        ctx->pc = 0x2B0B64u;
            // 0x2b0b64: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x2B0B68u;
        goto label_2b0b68;
    }
    ctx->pc = 0x2B0B60u;
    SET_GPR_U32(ctx, 31, 0x2B0B68u);
    ctx->pc = 0x2B0B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B60u;
            // 0x2b0b64: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9B48u;
    if (runtime->hasFunction(0x2B9B48u)) {
        auto targetFn = runtime->lookupFunction(0x2B9B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B68u; }
        if (ctx->pc != 0x2B0B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9B48_0x2b9b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B68u; }
        if (ctx->pc != 0x2B0B68u) { return; }
    }
    ctx->pc = 0x2B0B68u;
label_2b0b68:
    // 0x2b0b68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2b0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b0b6c:
    // 0x2b0b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b0b70:
    if (ctx->pc == 0x2B0B70u) {
        ctx->pc = 0x2B0B70u;
            // 0x2b0b70: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2B0B74u;
        goto label_2b0b74;
    }
    ctx->pc = 0x2B0B6Cu;
    {
        const bool branch_taken_0x2b0b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B6Cu;
            // 0x2b0b70: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b6c) {
            ctx->pc = 0x2B0B84u;
            goto label_2b0b84;
        }
    }
    ctx->pc = 0x2B0B74u;
label_2b0b74:
    // 0x2b0b74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b0b78:
    // 0x2b0b78: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_2b0b7c:
    if (ctx->pc == 0x2B0B7Cu) {
        ctx->pc = 0x2B0B7Cu;
            // 0x2b0b7c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2B0B80u;
        goto label_2b0b80;
    }
    ctx->pc = 0x2B0B78u;
    {
        const bool branch_taken_0x2b0b78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B78u;
            // 0x2b0b7c: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b78) {
            ctx->pc = 0x2B0B90u;
            goto label_2b0b90;
        }
    }
    ctx->pc = 0x2B0B80u;
label_2b0b80:
    // 0x2b0b80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0b84:
    // 0x2b0b84: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0b88:
    // 0x2b0b88: 0x10000026  b           . + 4 + (0x26 << 2)
label_2b0b8c:
    if (ctx->pc == 0x2B0B8Cu) {
        ctx->pc = 0x2B0B8Cu;
            // 0x2b0b8c: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->pc = 0x2B0B90u;
        goto label_2b0b90;
    }
    ctx->pc = 0x2B0B88u;
    {
        const bool branch_taken_0x2b0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B88u;
            // 0x2b0b8c: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b88) {
            ctx->pc = 0x2B0C24u;
            goto label_2b0c24;
        }
    }
    ctx->pc = 0x2B0B90u;
label_2b0b90:
    // 0x2b0b90: 0xc0a5c24  jal         func_297090
label_2b0b94:
    if (ctx->pc == 0x2B0B94u) {
        ctx->pc = 0x2B0B94u;
            // 0x2b0b94: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
        ctx->pc = 0x2B0B98u;
        goto label_2b0b98;
    }
    ctx->pc = 0x2B0B90u;
    SET_GPR_U32(ctx, 31, 0x2B0B98u);
    ctx->pc = 0x2B0B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B90u;
            // 0x2b0b94: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B98u; }
        if (ctx->pc != 0x2B0B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B98u; }
        if (ctx->pc != 0x2B0B98u) { return; }
    }
    ctx->pc = 0x2B0B98u;
label_2b0b98:
    // 0x2b0b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b0b9c:
    if (ctx->pc == 0x2B0B9Cu) {
        ctx->pc = 0x2B0B9Cu;
            // 0x2b0b9c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0BA0u;
        goto label_2b0ba0;
    }
    ctx->pc = 0x2B0B98u;
    {
        const bool branch_taken_0x2b0b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B98u;
            // 0x2b0b9c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b98) {
            ctx->pc = 0x2B0BB0u;
            goto label_2b0bb0;
        }
    }
    ctx->pc = 0x2B0BA0u;
label_2b0ba0:
    // 0x2b0ba0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0ba4:
    // 0x2b0ba4: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0ba8:
    // 0x2b0ba8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2b0bac:
    if (ctx->pc == 0x2B0BACu) {
        ctx->pc = 0x2B0BACu;
            // 0x2b0bac: 0x240600f1  addiu       $a2, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->pc = 0x2B0BB0u;
        goto label_2b0bb0;
    }
    ctx->pc = 0x2B0BA8u;
    {
        const bool branch_taken_0x2b0ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BA8u;
            // 0x2b0bac: 0x240600f1  addiu       $a2, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ba8) {
            ctx->pc = 0x2B0C24u;
            goto label_2b0c24;
        }
    }
    ctx->pc = 0x2B0BB0u;
label_2b0bb0:
    // 0x2b0bb0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2b0bb4:
    // 0x2b0bb4: 0xc0a5c24  jal         func_297090
label_2b0bb8:
    if (ctx->pc == 0x2B0BB8u) {
        ctx->pc = 0x2B0BB8u;
            // 0x2b0bb8: 0x2484d3a0  addiu       $a0, $a0, -0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955936));
        ctx->pc = 0x2B0BBCu;
        goto label_2b0bbc;
    }
    ctx->pc = 0x2B0BB4u;
    SET_GPR_U32(ctx, 31, 0x2B0BBCu);
    ctx->pc = 0x2B0BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BB4u;
            // 0x2b0bb8: 0x2484d3a0  addiu       $a0, $a0, -0x2C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BBCu; }
        if (ctx->pc != 0x2B0BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BBCu; }
        if (ctx->pc != 0x2B0BBCu) { return; }
    }
    ctx->pc = 0x2B0BBCu;
label_2b0bbc:
    // 0x2b0bbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b0bc0:
    if (ctx->pc == 0x2B0BC0u) {
        ctx->pc = 0x2B0BC0u;
            // 0x2b0bc0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0BC4u;
        goto label_2b0bc4;
    }
    ctx->pc = 0x2B0BBCu;
    {
        const bool branch_taken_0x2b0bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BBCu;
            // 0x2b0bc0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bbc) {
            ctx->pc = 0x2B0BD4u;
            goto label_2b0bd4;
        }
    }
    ctx->pc = 0x2B0BC4u;
label_2b0bc4:
    // 0x2b0bc4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0bc8:
    // 0x2b0bc8: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0bcc:
    // 0x2b0bcc: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b0bd0:
    if (ctx->pc == 0x2B0BD0u) {
        ctx->pc = 0x2B0BD0u;
            // 0x2b0bd0: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->pc = 0x2B0BD4u;
        goto label_2b0bd4;
    }
    ctx->pc = 0x2B0BCCu;
    {
        const bool branch_taken_0x2b0bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BCCu;
            // 0x2b0bd0: 0x240600f2  addiu       $a2, $zero, 0xF2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bcc) {
            ctx->pc = 0x2B0C24u;
            goto label_2b0c24;
        }
    }
    ctx->pc = 0x2B0BD4u;
label_2b0bd4:
    // 0x2b0bd4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2b0bd8:
    // 0x2b0bd8: 0xc0a5c24  jal         func_297090
label_2b0bdc:
    if (ctx->pc == 0x2B0BDCu) {
        ctx->pc = 0x2B0BDCu;
            // 0x2b0bdc: 0x2484d3b0  addiu       $a0, $a0, -0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
        ctx->pc = 0x2B0BE0u;
        goto label_2b0be0;
    }
    ctx->pc = 0x2B0BD8u;
    SET_GPR_U32(ctx, 31, 0x2B0BE0u);
    ctx->pc = 0x2B0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BD8u;
            // 0x2b0bdc: 0x2484d3b0  addiu       $a0, $a0, -0x2C50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BE0u; }
        if (ctx->pc != 0x2B0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BE0u; }
        if (ctx->pc != 0x2B0BE0u) { return; }
    }
    ctx->pc = 0x2B0BE0u;
label_2b0be0:
    // 0x2b0be0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2b0be4:
    if (ctx->pc == 0x2B0BE4u) {
        ctx->pc = 0x2B0BE4u;
            // 0x2b0be4: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0BE8u;
        goto label_2b0be8;
    }
    ctx->pc = 0x2B0BE0u;
    {
        const bool branch_taken_0x2b0be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BE0u;
            // 0x2b0be4: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0be0) {
            ctx->pc = 0x2B0BF8u;
            goto label_2b0bf8;
        }
    }
    ctx->pc = 0x2B0BE8u;
label_2b0be8:
    // 0x2b0be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0bec:
    // 0x2b0bec: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0bf0:
    // 0x2b0bf0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b0bf4:
    if (ctx->pc == 0x2B0BF4u) {
        ctx->pc = 0x2B0BF4u;
            // 0x2b0bf4: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->pc = 0x2B0BF8u;
        goto label_2b0bf8;
    }
    ctx->pc = 0x2B0BF0u;
    {
        const bool branch_taken_0x2b0bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BF0u;
            // 0x2b0bf4: 0x240600f3  addiu       $a2, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bf0) {
            ctx->pc = 0x2B0C24u;
            goto label_2b0c24;
        }
    }
    ctx->pc = 0x2B0BF8u;
label_2b0bf8:
    // 0x2b0bf8: 0xc0ac626  jal         func_2B1898
label_2b0bfc:
    if (ctx->pc == 0x2B0BFCu) {
        ctx->pc = 0x2B0BFCu;
            // 0x2b0bfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B0C00u;
        goto label_2b0c00;
    }
    ctx->pc = 0x2B0BF8u;
    SET_GPR_U32(ctx, 31, 0x2B0C00u);
    ctx->pc = 0x2B0BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BF8u;
            // 0x2b0bfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (runtime->hasFunction(0x2B1898u)) {
        auto targetFn = runtime->lookupFunction(0x2B1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C00u; }
        if (ctx->pc != 0x2B0C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1898_0x2b1898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C00u; }
        if (ctx->pc != 0x2B0C00u) { return; }
    }
    ctx->pc = 0x2B0C00u;
label_2b0c00:
    // 0x2b0c00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2b0c04:
    if (ctx->pc == 0x2B0C04u) {
        ctx->pc = 0x2B0C04u;
            // 0x2b0c04: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2B0C08u;
        goto label_2b0c08;
    }
    ctx->pc = 0x2B0C00u;
    {
        const bool branch_taken_0x2b0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C00u;
            // 0x2b0c04: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c00) {
            ctx->pc = 0x2B0C38u;
            goto label_2b0c38;
        }
    }
    ctx->pc = 0x2B0C08u;
label_2b0c08:
    // 0x2b0c08: 0xc0a5c24  jal         func_297090
label_2b0c0c:
    if (ctx->pc == 0x2B0C0Cu) {
        ctx->pc = 0x2B0C0Cu;
            // 0x2b0c0c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
        ctx->pc = 0x2B0C10u;
        goto label_2b0c10;
    }
    ctx->pc = 0x2B0C08u;
    SET_GPR_U32(ctx, 31, 0x2B0C10u);
    ctx->pc = 0x2B0C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C08u;
            // 0x2b0c0c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297090u;
    if (runtime->hasFunction(0x297090u)) {
        auto targetFn = runtime->lookupFunction(0x297090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C10u; }
        if (ctx->pc != 0x2B0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297090_0x297090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C10u; }
        if (ctx->pc != 0x2B0C10u) { return; }
    }
    ctx->pc = 0x2B0C10u;
label_2b0c10:
    // 0x2b0c10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2b0c14:
    if (ctx->pc == 0x2B0C14u) {
        ctx->pc = 0x2B0C14u;
            // 0x2b0c14: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0C18u;
        goto label_2b0c18;
    }
    ctx->pc = 0x2B0C10u;
    {
        const bool branch_taken_0x2b0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C10u;
            // 0x2b0c14: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c10) {
            ctx->pc = 0x2B0C3Cu;
            goto label_2b0c3c;
        }
    }
    ctx->pc = 0x2B0C18u;
label_2b0c18:
    // 0x2b0c18: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0c1c:
    // 0x2b0c1c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0c20:
    // 0x2b0c20: 0x2406044e  addiu       $a2, $zero, 0x44E
    ctx->pc = 0x2b0c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
label_2b0c24:
    // 0x2b0c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c28:
    // 0x2b0c28: 0xc0a5648  jal         func_295920
label_2b0c2c:
    if (ctx->pc == 0x2B0C2Cu) {
        ctx->pc = 0x2B0C2Cu;
            // 0x2b0c2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C30u;
        goto label_2b0c30;
    }
    ctx->pc = 0x2B0C28u;
    SET_GPR_U32(ctx, 31, 0x2B0C30u);
    ctx->pc = 0x2B0C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C28u;
            // 0x2b0c2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C30u; }
        if (ctx->pc != 0x2B0C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C30u; }
        if (ctx->pc != 0x2B0C30u) { return; }
    }
    ctx->pc = 0x2B0C30u;
label_2b0c30:
    // 0x2b0c30: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b0c34:
    if (ctx->pc == 0x2B0C34u) {
        ctx->pc = 0x2B0C38u;
        goto label_2b0c38;
    }
    ctx->pc = 0x2B0C30u;
    {
        const bool branch_taken_0x2b0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c30) {
            ctx->pc = 0x2B0C90u;
            goto label_2b0c90;
        }
    }
    ctx->pc = 0x2B0C38u;
label_2b0c38:
    // 0x2b0c38: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2b0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
label_2b0c3c:
    // 0x2b0c3c: 0xc0af004  jal         func_2BC010
label_2b0c40:
    if (ctx->pc == 0x2B0C40u) {
        ctx->pc = 0x2B0C40u;
            // 0x2b0c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C44u;
        goto label_2b0c44;
    }
    ctx->pc = 0x2B0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0C44u);
    ctx->pc = 0x2B0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C3Cu;
            // 0x2b0c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C44u; }
        if (ctx->pc != 0x2B0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C44u; }
        if (ctx->pc != 0x2B0C44u) { return; }
    }
    ctx->pc = 0x2B0C44u;
label_2b0c44:
    // 0x2b0c44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2b0c48:
    if (ctx->pc == 0x2B0C48u) {
        ctx->pc = 0x2B0C48u;
            // 0x2b0c48: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0C4Cu;
        goto label_2b0c4c;
    }
    ctx->pc = 0x2B0C44u;
    {
        const bool branch_taken_0x2b0c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C44u;
            // 0x2b0c48: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c44) {
            ctx->pc = 0x2B0C78u;
            goto label_2b0c78;
        }
    }
    ctx->pc = 0x2B0C4Cu;
label_2b0c4c:
    // 0x2b0c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c50:
    // 0x2b0c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c54:
    // 0x2b0c54: 0xc0a5d8e  jal         func_297638
label_2b0c58:
    if (ctx->pc == 0x2B0C58u) {
        ctx->pc = 0x2B0C58u;
            // 0x2b0c58: 0x260600f8  addiu       $a2, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->pc = 0x2B0C5Cu;
        goto label_2b0c5c;
    }
    ctx->pc = 0x2B0C54u;
    SET_GPR_U32(ctx, 31, 0x2B0C5Cu);
    ctx->pc = 0x2B0C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C54u;
            // 0x2b0c58: 0x260600f8  addiu       $a2, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (runtime->hasFunction(0x297638u)) {
        auto targetFn = runtime->lookupFunction(0x297638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C5Cu; }
        if (ctx->pc != 0x2B0C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297638_0x297638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C5Cu; }
        if (ctx->pc != 0x2B0C5Cu) { return; }
    }
    ctx->pc = 0x2B0C5Cu;
label_2b0c5c:
    // 0x2b0c5c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2b0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2b0c60:
    // 0x2b0c60: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x2b0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2b0c64:
    // 0x2b0c64: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x2b0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_2b0c68:
    // 0x2b0c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c6c:
    // 0x2b0c6c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2b0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
label_2b0c70:
    // 0x2b0c70: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b0c74:
    if (ctx->pc == 0x2B0C74u) {
        ctx->pc = 0x2B0C74u;
            // 0x2b0c74: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x2B0C78u;
        goto label_2b0c78;
    }
    ctx->pc = 0x2B0C70u;
    {
        const bool branch_taken_0x2b0c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C70u;
            // 0x2b0c74: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c70) {
            ctx->pc = 0x2B0CA4u;
            goto label_2b0ca4;
        }
    }
    ctx->pc = 0x2B0C78u;
label_2b0c78:
    // 0x2b0c78: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b0c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b0c7c:
    // 0x2b0c7c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x2b0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2b0c80:
    // 0x2b0c80: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b0c84:
    // 0x2b0c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c88:
    // 0x2b0c88: 0xc0a5648  jal         func_295920
label_2b0c8c:
    if (ctx->pc == 0x2B0C8Cu) {
        ctx->pc = 0x2B0C8Cu;
            // 0x2b0c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C90u;
        goto label_2b0c90;
    }
    ctx->pc = 0x2B0C88u;
    SET_GPR_U32(ctx, 31, 0x2B0C90u);
    ctx->pc = 0x2B0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C88u;
            // 0x2b0c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C90u; }
        if (ctx->pc != 0x2B0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C90u; }
        if (ctx->pc != 0x2B0C90u) { return; }
    }
    ctx->pc = 0x2B0C90u;
label_2b0c90:
    // 0x2b0c90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2b0c94:
    if (ctx->pc == 0x2B0C94u) {
        ctx->pc = 0x2B0C94u;
            // 0x2b0c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C98u;
        goto label_2b0c98;
    }
    ctx->pc = 0x2B0C90u;
    {
        const bool branch_taken_0x2b0c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C90u;
            // 0x2b0c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c90) {
            ctx->pc = 0x2B0CA4u;
            goto label_2b0ca4;
        }
    }
    ctx->pc = 0x2B0C98u;
label_2b0c98:
    // 0x2b0c98: 0xc0ac330  jal         func_2B0CC0
label_2b0c9c:
    if (ctx->pc == 0x2B0C9Cu) {
        ctx->pc = 0x2B0C9Cu;
            // 0x2b0c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CA0u;
        goto label_2b0ca0;
    }
    ctx->pc = 0x2B0C98u;
    SET_GPR_U32(ctx, 31, 0x2B0CA0u);
    ctx->pc = 0x2B0C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C98u;
            // 0x2b0c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0CC0u;
    if (runtime->hasFunction(0x2B0CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B0CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0CA0u; }
        if (ctx->pc != 0x2B0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0CC0_0x2b0cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0CA0u; }
        if (ctx->pc != 0x2B0CA0u) { return; }
    }
    ctx->pc = 0x2B0CA0u;
label_2b0ca0:
    // 0x2b0ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b0ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ca4:
    // 0x2b0ca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0ca8:
    // 0x2b0ca8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b0ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0cac:
    // 0x2b0cac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0cb0:
    // 0x2b0cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0cb4:
    // 0x2b0cb4: 0x3e00008  jr          $ra
label_2b0cb8:
    if (ctx->pc == 0x2B0CB8u) {
        ctx->pc = 0x2B0CB8u;
            // 0x2b0cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2B0CBCu;
        goto label_2b0cbc;
    }
    ctx->pc = 0x2B0CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0CB4u;
            // 0x2b0cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0CBCu;
label_2b0cbc:
    // 0x2b0cbc: 0x0  nop
    ctx->pc = 0x2b0cbcu;
    // NOP
    ctx->pc = 0x2b0cc0u;
}
