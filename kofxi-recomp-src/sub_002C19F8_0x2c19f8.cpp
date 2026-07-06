#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C19F8
// Address: 0x2c19f8 - 0x2c1cb8
void sub_002C19F8_0x2c19f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C19F8_0x2c19f8");
#endif

    switch (ctx->pc) {
        case 0x2c19f8u: goto label_2c19f8;
        case 0x2c19fcu: goto label_2c19fc;
        case 0x2c1a00u: goto label_2c1a00;
        case 0x2c1a04u: goto label_2c1a04;
        case 0x2c1a08u: goto label_2c1a08;
        case 0x2c1a0cu: goto label_2c1a0c;
        case 0x2c1a10u: goto label_2c1a10;
        case 0x2c1a14u: goto label_2c1a14;
        case 0x2c1a18u: goto label_2c1a18;
        case 0x2c1a1cu: goto label_2c1a1c;
        case 0x2c1a20u: goto label_2c1a20;
        case 0x2c1a24u: goto label_2c1a24;
        case 0x2c1a28u: goto label_2c1a28;
        case 0x2c1a2cu: goto label_2c1a2c;
        case 0x2c1a30u: goto label_2c1a30;
        case 0x2c1a34u: goto label_2c1a34;
        case 0x2c1a38u: goto label_2c1a38;
        case 0x2c1a3cu: goto label_2c1a3c;
        case 0x2c1a40u: goto label_2c1a40;
        case 0x2c1a44u: goto label_2c1a44;
        case 0x2c1a48u: goto label_2c1a48;
        case 0x2c1a4cu: goto label_2c1a4c;
        case 0x2c1a50u: goto label_2c1a50;
        case 0x2c1a54u: goto label_2c1a54;
        case 0x2c1a58u: goto label_2c1a58;
        case 0x2c1a5cu: goto label_2c1a5c;
        case 0x2c1a60u: goto label_2c1a60;
        case 0x2c1a64u: goto label_2c1a64;
        case 0x2c1a68u: goto label_2c1a68;
        case 0x2c1a6cu: goto label_2c1a6c;
        case 0x2c1a70u: goto label_2c1a70;
        case 0x2c1a74u: goto label_2c1a74;
        case 0x2c1a78u: goto label_2c1a78;
        case 0x2c1a7cu: goto label_2c1a7c;
        case 0x2c1a80u: goto label_2c1a80;
        case 0x2c1a84u: goto label_2c1a84;
        case 0x2c1a88u: goto label_2c1a88;
        case 0x2c1a8cu: goto label_2c1a8c;
        case 0x2c1a90u: goto label_2c1a90;
        case 0x2c1a94u: goto label_2c1a94;
        case 0x2c1a98u: goto label_2c1a98;
        case 0x2c1a9cu: goto label_2c1a9c;
        case 0x2c1aa0u: goto label_2c1aa0;
        case 0x2c1aa4u: goto label_2c1aa4;
        case 0x2c1aa8u: goto label_2c1aa8;
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1ab0u: goto label_2c1ab0;
        case 0x2c1ab4u: goto label_2c1ab4;
        case 0x2c1ab8u: goto label_2c1ab8;
        case 0x2c1abcu: goto label_2c1abc;
        case 0x2c1ac0u: goto label_2c1ac0;
        case 0x2c1ac4u: goto label_2c1ac4;
        case 0x2c1ac8u: goto label_2c1ac8;
        case 0x2c1accu: goto label_2c1acc;
        case 0x2c1ad0u: goto label_2c1ad0;
        case 0x2c1ad4u: goto label_2c1ad4;
        case 0x2c1ad8u: goto label_2c1ad8;
        case 0x2c1adcu: goto label_2c1adc;
        case 0x2c1ae0u: goto label_2c1ae0;
        case 0x2c1ae4u: goto label_2c1ae4;
        case 0x2c1ae8u: goto label_2c1ae8;
        case 0x2c1aecu: goto label_2c1aec;
        case 0x2c1af0u: goto label_2c1af0;
        case 0x2c1af4u: goto label_2c1af4;
        case 0x2c1af8u: goto label_2c1af8;
        case 0x2c1afcu: goto label_2c1afc;
        case 0x2c1b00u: goto label_2c1b00;
        case 0x2c1b04u: goto label_2c1b04;
        case 0x2c1b08u: goto label_2c1b08;
        case 0x2c1b0cu: goto label_2c1b0c;
        case 0x2c1b10u: goto label_2c1b10;
        case 0x2c1b14u: goto label_2c1b14;
        case 0x2c1b18u: goto label_2c1b18;
        case 0x2c1b1cu: goto label_2c1b1c;
        case 0x2c1b20u: goto label_2c1b20;
        case 0x2c1b24u: goto label_2c1b24;
        case 0x2c1b28u: goto label_2c1b28;
        case 0x2c1b2cu: goto label_2c1b2c;
        case 0x2c1b30u: goto label_2c1b30;
        case 0x2c1b34u: goto label_2c1b34;
        case 0x2c1b38u: goto label_2c1b38;
        case 0x2c1b3cu: goto label_2c1b3c;
        case 0x2c1b40u: goto label_2c1b40;
        case 0x2c1b44u: goto label_2c1b44;
        case 0x2c1b48u: goto label_2c1b48;
        case 0x2c1b4cu: goto label_2c1b4c;
        case 0x2c1b50u: goto label_2c1b50;
        case 0x2c1b54u: goto label_2c1b54;
        case 0x2c1b58u: goto label_2c1b58;
        case 0x2c1b5cu: goto label_2c1b5c;
        case 0x2c1b60u: goto label_2c1b60;
        case 0x2c1b64u: goto label_2c1b64;
        case 0x2c1b68u: goto label_2c1b68;
        case 0x2c1b6cu: goto label_2c1b6c;
        case 0x2c1b70u: goto label_2c1b70;
        case 0x2c1b74u: goto label_2c1b74;
        case 0x2c1b78u: goto label_2c1b78;
        case 0x2c1b7cu: goto label_2c1b7c;
        case 0x2c1b80u: goto label_2c1b80;
        case 0x2c1b84u: goto label_2c1b84;
        case 0x2c1b88u: goto label_2c1b88;
        case 0x2c1b8cu: goto label_2c1b8c;
        case 0x2c1b90u: goto label_2c1b90;
        case 0x2c1b94u: goto label_2c1b94;
        case 0x2c1b98u: goto label_2c1b98;
        case 0x2c1b9cu: goto label_2c1b9c;
        case 0x2c1ba0u: goto label_2c1ba0;
        case 0x2c1ba4u: goto label_2c1ba4;
        case 0x2c1ba8u: goto label_2c1ba8;
        case 0x2c1bacu: goto label_2c1bac;
        case 0x2c1bb0u: goto label_2c1bb0;
        case 0x2c1bb4u: goto label_2c1bb4;
        case 0x2c1bb8u: goto label_2c1bb8;
        case 0x2c1bbcu: goto label_2c1bbc;
        case 0x2c1bc0u: goto label_2c1bc0;
        case 0x2c1bc4u: goto label_2c1bc4;
        case 0x2c1bc8u: goto label_2c1bc8;
        case 0x2c1bccu: goto label_2c1bcc;
        case 0x2c1bd0u: goto label_2c1bd0;
        case 0x2c1bd4u: goto label_2c1bd4;
        case 0x2c1bd8u: goto label_2c1bd8;
        case 0x2c1bdcu: goto label_2c1bdc;
        case 0x2c1be0u: goto label_2c1be0;
        case 0x2c1be4u: goto label_2c1be4;
        case 0x2c1be8u: goto label_2c1be8;
        case 0x2c1becu: goto label_2c1bec;
        case 0x2c1bf0u: goto label_2c1bf0;
        case 0x2c1bf4u: goto label_2c1bf4;
        case 0x2c1bf8u: goto label_2c1bf8;
        case 0x2c1bfcu: goto label_2c1bfc;
        case 0x2c1c00u: goto label_2c1c00;
        case 0x2c1c04u: goto label_2c1c04;
        case 0x2c1c08u: goto label_2c1c08;
        case 0x2c1c0cu: goto label_2c1c0c;
        case 0x2c1c10u: goto label_2c1c10;
        case 0x2c1c14u: goto label_2c1c14;
        case 0x2c1c18u: goto label_2c1c18;
        case 0x2c1c1cu: goto label_2c1c1c;
        case 0x2c1c20u: goto label_2c1c20;
        case 0x2c1c24u: goto label_2c1c24;
        case 0x2c1c28u: goto label_2c1c28;
        case 0x2c1c2cu: goto label_2c1c2c;
        case 0x2c1c30u: goto label_2c1c30;
        case 0x2c1c34u: goto label_2c1c34;
        case 0x2c1c38u: goto label_2c1c38;
        case 0x2c1c3cu: goto label_2c1c3c;
        case 0x2c1c40u: goto label_2c1c40;
        case 0x2c1c44u: goto label_2c1c44;
        case 0x2c1c48u: goto label_2c1c48;
        case 0x2c1c4cu: goto label_2c1c4c;
        case 0x2c1c50u: goto label_2c1c50;
        case 0x2c1c54u: goto label_2c1c54;
        case 0x2c1c58u: goto label_2c1c58;
        case 0x2c1c5cu: goto label_2c1c5c;
        case 0x2c1c60u: goto label_2c1c60;
        case 0x2c1c64u: goto label_2c1c64;
        case 0x2c1c68u: goto label_2c1c68;
        case 0x2c1c6cu: goto label_2c1c6c;
        case 0x2c1c70u: goto label_2c1c70;
        case 0x2c1c74u: goto label_2c1c74;
        case 0x2c1c78u: goto label_2c1c78;
        case 0x2c1c7cu: goto label_2c1c7c;
        case 0x2c1c80u: goto label_2c1c80;
        case 0x2c1c84u: goto label_2c1c84;
        case 0x2c1c88u: goto label_2c1c88;
        case 0x2c1c8cu: goto label_2c1c8c;
        case 0x2c1c90u: goto label_2c1c90;
        case 0x2c1c94u: goto label_2c1c94;
        case 0x2c1c98u: goto label_2c1c98;
        case 0x2c1c9cu: goto label_2c1c9c;
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1ca4u: goto label_2c1ca4;
        case 0x2c1ca8u: goto label_2c1ca8;
        case 0x2c1cacu: goto label_2c1cac;
        case 0x2c1cb0u: goto label_2c1cb0;
        case 0x2c1cb4u: goto label_2c1cb4;
        default: break;
    }

    ctx->pc = 0x2c19f8u;

label_2c19f8:
    // 0x2c19f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c19f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c19fc:
    // 0x2c19fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c19fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2c1a00:
    // 0x2c1a00: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2c1a04:
    // 0x2c1a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a08:
    // 0x2c1a08: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2c1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2c1a0c:
    // 0x2c1a0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c1a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2c1a10:
    // 0x2c1a10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c1a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2c1a14:
    // 0x2c1a14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c1a18:
    // 0x2c1a18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c1a1c:
    // 0x2c1a1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1a20:
    // 0x2c1a20: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x2c1a20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2c1a24:
    // 0x2c1a24: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_2c1a28:
    if (ctx->pc == 0x2C1A28u) {
        ctx->pc = 0x2C1A28u;
            // 0x2c1a28: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2C1A2Cu;
        goto label_2c1a2c;
    }
    ctx->pc = 0x2C1A24u;
    {
        const bool branch_taken_0x2c1a24 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A24u;
            // 0x2c1a28: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a24) {
            ctx->pc = 0x2C1A34u;
            goto label_2c1a34;
        }
    }
    ctx->pc = 0x2C1A2Cu;
label_2c1a2c:
    // 0x2c1a2c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c1a30:
    // 0x2c1a30: 0x24551528  addiu       $s5, $v0, 0x1528
    ctx->pc = 0x2c1a30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5416));
label_2c1a34:
    // 0x2c1a34: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2c1a34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1a38:
    // 0x2c1a38: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x2c1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2c1a3c:
    // 0x2c1a3c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2c1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2c1a40:
    // 0x2c1a40: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2c1a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a44:
    // 0x2c1a44: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2c1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2c1a48:
    // 0x2c1a48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c1a4c:
    // 0x2c1a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c1a50:
    // 0x2c1a50: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2c1a50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c1a54:
    // 0x2c1a54: 0xc0afc4c  jal         func_2BF130
label_2c1a58:
    if (ctx->pc == 0x2C1A58u) {
        ctx->pc = 0x2C1A58u;
            // 0x2c1a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A5Cu;
        goto label_2c1a5c;
    }
    ctx->pc = 0x2C1A54u;
    SET_GPR_U32(ctx, 31, 0x2C1A5Cu);
    ctx->pc = 0x2C1A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A54u;
            // 0x2c1a58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A5Cu; }
        if (ctx->pc != 0x2C1A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A5Cu; }
        if (ctx->pc != 0x2C1A5Cu) { return; }
    }
    ctx->pc = 0x2C1A5Cu;
label_2c1a5c:
    // 0x2c1a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a60:
    // 0x2c1a60: 0xc0afc48  jal         func_2BF120
label_2c1a64:
    if (ctx->pc == 0x2C1A64u) {
        ctx->pc = 0x2C1A64u;
            // 0x2c1a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A68u;
        goto label_2c1a68;
    }
    ctx->pc = 0x2C1A60u;
    SET_GPR_U32(ctx, 31, 0x2C1A68u);
    ctx->pc = 0x2C1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A60u;
            // 0x2c1a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (runtime->hasFunction(0x2BF120u)) {
        auto targetFn = runtime->lookupFunction(0x2BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A68u; }
        if (ctx->pc != 0x2C1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF120_0x2bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A68u; }
        if (ctx->pc != 0x2C1A68u) { return; }
    }
    ctx->pc = 0x2C1A68u;
label_2c1a68:
    // 0x2c1a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c1a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a6c:
    // 0x2c1a6c: 0xc0afc54  jal         func_2BF150
label_2c1a70:
    if (ctx->pc == 0x2C1A70u) {
        ctx->pc = 0x2C1A70u;
            // 0x2c1a70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A74u;
        goto label_2c1a74;
    }
    ctx->pc = 0x2C1A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1A74u);
    ctx->pc = 0x2C1A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A6Cu;
            // 0x2c1a70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF150u;
    if (runtime->hasFunction(0x2BF150u)) {
        auto targetFn = runtime->lookupFunction(0x2BF150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A74u; }
        if (ctx->pc != 0x2C1A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF150_0x2bf150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A74u; }
        if (ctx->pc != 0x2C1A74u) { return; }
    }
    ctx->pc = 0x2C1A74u;
label_2c1a74:
    // 0x2c1a74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2c1a78:
    if (ctx->pc == 0x2C1A78u) {
        ctx->pc = 0x2C1A78u;
            // 0x2c1a78: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A7Cu;
        goto label_2c1a7c;
    }
    ctx->pc = 0x2C1A74u;
    {
        const bool branch_taken_0x2c1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A74u;
            // 0x2c1a78: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a74) {
            ctx->pc = 0x2C1ABCu;
            goto label_2c1abc;
        }
    }
    ctx->pc = 0x2C1A7Cu;
label_2c1a7c:
    // 0x2c1a7c: 0x1e800009  bgtz        $s4, . + 4 + (0x9 << 2)
label_2c1a80:
    if (ctx->pc == 0x2C1A80u) {
        ctx->pc = 0x2C1A80u;
            // 0x2c1a80: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x2C1A84u;
        goto label_2c1a84;
    }
    ctx->pc = 0x2C1A7Cu;
    {
        const bool branch_taken_0x2c1a7c = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2C1A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A7Cu;
            // 0x2c1a80: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a7c) {
            ctx->pc = 0x2C1AA4u;
            goto label_2c1aa4;
        }
    }
    ctx->pc = 0x2C1A84u;
label_2c1a84:
    // 0x2c1a84: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2c1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2c1a88:
    // 0x2c1a88: 0xae330028  sw          $s3, 0x28($s1)
    ctx->pc = 0x2c1a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 19));
label_2c1a8c:
    // 0x2c1a8c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1a90:
    // 0x2c1a90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c1a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1a94:
    // 0x2c1a94: 0x2a0f809  jalr        $s5
label_2c1a98:
    if (ctx->pc == 0x2C1A98u) {
        ctx->pc = 0x2C1A98u;
            // 0x2c1a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1A9Cu;
        goto label_2c1a9c;
    }
    ctx->pc = 0x2C1A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1A9Cu);
        ctx->pc = 0x2C1A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A94u;
            // 0x2c1a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1A9Cu; }
            if (ctx->pc != 0x2C1A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C1A9Cu;
label_2c1a9c:
    // 0x2c1a9c: 0x10000066  b           . + 4 + (0x66 << 2)
label_2c1aa0:
    if (ctx->pc == 0x2C1AA0u) {
        ctx->pc = 0x2C1AA0u;
            // 0x2c1aa0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1AA4u;
        goto label_2c1aa4;
    }
    ctx->pc = 0x2C1A9Cu;
    {
        const bool branch_taken_0x2c1a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1A9Cu;
            // 0x2c1aa0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1a9c) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1AA4u;
label_2c1aa4:
    // 0x2c1aa4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2c1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1aa8:
    // 0x2c1aa8: 0xae340020  sw          $s4, 0x20($s1)
    ctx->pc = 0x2c1aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2c1aac:
    // 0x2c1aac: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2c1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2c1ab0:
    // 0x2c1ab0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c1ab4:
    // 0x2c1ab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c1ab8:
    // 0x2c1ab8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2c1ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c1abc:
    // 0x2c1abc: 0x680005d  bltz        $s4, . + 4 + (0x5D << 2)
label_2c1ac0:
    if (ctx->pc == 0x2C1AC0u) {
        ctx->pc = 0x2C1AC0u;
            // 0x2c1ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C1AC4u;
        goto label_2c1ac4;
    }
    ctx->pc = 0x2C1ABCu;
    {
        const bool branch_taken_0x2c1abc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2C1AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1ABCu;
            // 0x2c1ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1abc) {
            ctx->pc = 0x2C1C34u;
            goto label_2c1c34;
        }
    }
    ctx->pc = 0x2C1AC4u;
label_2c1ac4:
    // 0x2c1ac4: 0x0  nop
    ctx->pc = 0x2c1ac4u;
    // NOP
label_2c1ac8:
    // 0x2c1ac8: 0xae340020  sw          $s4, 0x20($s1)
    ctx->pc = 0x2c1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 20));
label_2c1acc:
    // 0x2c1acc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2c1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c1ad0:
    // 0x2c1ad0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_2c1ad4:
    if (ctx->pc == 0x2C1AD4u) {
        ctx->pc = 0x2C1AD8u;
        goto label_2c1ad8;
    }
    ctx->pc = 0x2C1AD0u;
    {
        const bool branch_taken_0x2c1ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ad0) {
            ctx->pc = 0x2C1B9Cu;
            goto label_2c1b9c;
        }
    }
    ctx->pc = 0x2C1AD8u;
label_2c1ad8:
    // 0x2c1ad8: 0xc0afcf8  jal         func_2BF3E0
label_2c1adc:
    if (ctx->pc == 0x2C1ADCu) {
        ctx->pc = 0x2C1ADCu;
            // 0x2c1adc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AE0u;
        goto label_2c1ae0;
    }
    ctx->pc = 0x2C1AD8u;
    SET_GPR_U32(ctx, 31, 0x2C1AE0u);
    ctx->pc = 0x2C1ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AD8u;
            // 0x2c1adc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF3E0u;
    if (runtime->hasFunction(0x2BF3E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BF3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AE0u; }
        if (ctx->pc != 0x2C1AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF3E0_0x2bf3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1AE0u; }
        if (ctx->pc != 0x2C1AE0u) { return; }
    }
    ctx->pc = 0x2C1AE0u;
label_2c1ae0:
    // 0x2c1ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1ae4:
    // 0x2c1ae4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_2c1ae8:
    if (ctx->pc == 0x2C1AE8u) {
        ctx->pc = 0x2C1AE8u;
            // 0x2c1ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AECu;
        goto label_2c1aec;
    }
    ctx->pc = 0x2C1AE4u;
    {
        const bool branch_taken_0x2c1ae4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AE4u;
            // 0x2c1ae8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ae4) {
            ctx->pc = 0x2C1B0Cu;
            goto label_2c1b0c;
        }
    }
    ctx->pc = 0x2C1AECu;
label_2c1aec:
    // 0x2c1aec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c1af0:
    // 0x2c1af0: 0xae330028  sw          $s3, 0x28($s1)
    ctx->pc = 0x2c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 19));
label_2c1af4:
    // 0x2c1af4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1af8:
    // 0x2c1af8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1afc:
    // 0x2c1afc: 0x2a0f809  jalr        $s5
label_2c1b00:
    if (ctx->pc == 0x2C1B00u) {
        ctx->pc = 0x2C1B00u;
            // 0x2c1b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B04u;
        goto label_2c1b04;
    }
    ctx->pc = 0x2C1AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1B04u);
        ctx->pc = 0x2C1B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1AFCu;
            // 0x2c1b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1B04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B04u; }
            if (ctx->pc != 0x2C1B04u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1B04u;
label_2c1b04:
    // 0x2c1b04: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2c1b08:
    if (ctx->pc == 0x2C1B08u) {
        ctx->pc = 0x2C1B08u;
            // 0x2c1b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B0Cu;
        goto label_2c1b0c;
    }
    ctx->pc = 0x2C1B04u;
    {
        const bool branch_taken_0x2c1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B04u;
            // 0x2c1b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b04) {
            ctx->pc = 0x2C1C34u;
            goto label_2c1c34;
        }
    }
    ctx->pc = 0x2C1B0Cu;
label_2c1b0c:
    // 0x2c1b0c: 0xc0b00d8  jal         func_2C0360
label_2c1b10:
    if (ctx->pc == 0x2C1B10u) {
        ctx->pc = 0x2C1B10u;
            // 0x2c1b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B14u;
        goto label_2c1b14;
    }
    ctx->pc = 0x2C1B0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1B14u);
    ctx->pc = 0x2C1B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B0Cu;
            // 0x2c1b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0360u;
    if (runtime->hasFunction(0x2C0360u)) {
        auto targetFn = runtime->lookupFunction(0x2C0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B14u; }
        if (ctx->pc != 0x2C1B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0360_0x2c0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B14u; }
        if (ctx->pc != 0x2C1B14u) { return; }
    }
    ctx->pc = 0x2C1B14u;
label_2c1b14:
    // 0x2c1b14: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_2c1b18:
    if (ctx->pc == 0x2C1B18u) {
        ctx->pc = 0x2C1B18u;
            // 0x2c1b18: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2C1B1Cu;
        goto label_2c1b1c;
    }
    ctx->pc = 0x2C1B14u;
    {
        const bool branch_taken_0x2c1b14 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C1B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B14u;
            // 0x2c1b18: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b14) {
            ctx->pc = 0x2C1B38u;
            goto label_2c1b38;
        }
    }
    ctx->pc = 0x2C1B1Cu;
label_2c1b1c:
    // 0x2c1b1c: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1b20:
    // 0x2c1b20: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1b24:
    // 0x2c1b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b28:
    // 0x2c1b28: 0x2a0f809  jalr        $s5
label_2c1b2c:
    if (ctx->pc == 0x2C1B2Cu) {
        ctx->pc = 0x2C1B2Cu;
            // 0x2c1b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B30u;
        goto label_2c1b30;
    }
    ctx->pc = 0x2C1B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1B30u);
        ctx->pc = 0x2C1B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B28u;
            // 0x2c1b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B30u; }
            if (ctx->pc != 0x2C1B30u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1B30u;
label_2c1b30:
    // 0x2c1b30: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_2c1b34:
    if (ctx->pc == 0x2C1B34u) {
        ctx->pc = 0x2C1B34u;
            // 0x2c1b34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1B38u;
        goto label_2c1b38;
    }
    ctx->pc = 0x2C1B30u;
    {
        const bool branch_taken_0x2c1b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B30u;
            // 0x2c1b34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b30) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1B38u;
label_2c1b38:
    // 0x2c1b38: 0xc0afd76  jal         func_2BF5D8
label_2c1b3c:
    if (ctx->pc == 0x2C1B3Cu) {
        ctx->pc = 0x2C1B3Cu;
            // 0x2c1b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B40u;
        goto label_2c1b40;
    }
    ctx->pc = 0x2C1B38u;
    SET_GPR_U32(ctx, 31, 0x2C1B40u);
    ctx->pc = 0x2C1B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B38u;
            // 0x2c1b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5D8u;
    if (runtime->hasFunction(0x2BF5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BF5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B40u; }
        if (ctx->pc != 0x2C1B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF5D8_0x2bf5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B40u; }
        if (ctx->pc != 0x2C1B40u) { return; }
    }
    ctx->pc = 0x2C1B40u;
label_2c1b40:
    // 0x2c1b40: 0xc0b014e  jal         func_2C0538
label_2c1b44:
    if (ctx->pc == 0x2C1B44u) {
        ctx->pc = 0x2C1B44u;
            // 0x2c1b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B48u;
        goto label_2c1b48;
    }
    ctx->pc = 0x2C1B40u;
    SET_GPR_U32(ctx, 31, 0x2C1B48u);
    ctx->pc = 0x2C1B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B40u;
            // 0x2c1b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0538u;
    if (runtime->hasFunction(0x2C0538u)) {
        auto targetFn = runtime->lookupFunction(0x2C0538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B48u; }
        if (ctx->pc != 0x2C1B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0538_0x2c0538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B48u; }
        if (ctx->pc != 0x2C1B48u) { return; }
    }
    ctx->pc = 0x2C1B48u;
label_2c1b48:
    // 0x2c1b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b4c:
    // 0x2c1b4c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2c1b50:
    if (ctx->pc == 0x2C1B50u) {
        ctx->pc = 0x2C1B50u;
            // 0x2c1b50: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2C1B54u;
        goto label_2c1b54;
    }
    ctx->pc = 0x2C1B4Cu;
    {
        const bool branch_taken_0x2c1b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B4Cu;
            // 0x2c1b50: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b4c) {
            ctx->pc = 0x2C1B70u;
            goto label_2c1b70;
        }
    }
    ctx->pc = 0x2C1B54u;
label_2c1b54:
    // 0x2c1b54: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1b58:
    // 0x2c1b58: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1b5c:
    // 0x2c1b5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b60:
    // 0x2c1b60: 0x2a0f809  jalr        $s5
label_2c1b64:
    if (ctx->pc == 0x2C1B64u) {
        ctx->pc = 0x2C1B64u;
            // 0x2c1b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B68u;
        goto label_2c1b68;
    }
    ctx->pc = 0x2C1B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1B68u);
        ctx->pc = 0x2C1B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B60u;
            // 0x2c1b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B68u; }
            if (ctx->pc != 0x2C1B68u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1B68u;
label_2c1b68:
    // 0x2c1b68: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_2c1b6c:
    if (ctx->pc == 0x2C1B6Cu) {
        ctx->pc = 0x2C1B6Cu;
            // 0x2c1b6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1B70u;
        goto label_2c1b70;
    }
    ctx->pc = 0x2C1B68u;
    {
        const bool branch_taken_0x2c1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B68u;
            // 0x2c1b6c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b68) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1B70u;
label_2c1b70:
    // 0x2c1b70: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
label_2c1b74:
    if (ctx->pc == 0x2C1B74u) {
        ctx->pc = 0x2C1B74u;
            // 0x2c1b74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C1B78u;
        goto label_2c1b78;
    }
    ctx->pc = 0x2C1B70u;
    {
        const bool branch_taken_0x2c1b70 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2C1B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B70u;
            // 0x2c1b74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b70) {
            ctx->pc = 0x2C1B94u;
            goto label_2c1b94;
        }
    }
    ctx->pc = 0x2C1B78u;
label_2c1b78:
    // 0x2c1b78: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1b7c:
    // 0x2c1b7c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1b80:
    // 0x2c1b80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1b84:
    // 0x2c1b84: 0x2a0f809  jalr        $s5
label_2c1b88:
    if (ctx->pc == 0x2C1B88u) {
        ctx->pc = 0x2C1B88u;
            // 0x2c1b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B8Cu;
        goto label_2c1b8c;
    }
    ctx->pc = 0x2C1B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1B8Cu);
        ctx->pc = 0x2C1B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B84u;
            // 0x2c1b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1B8Cu; }
            if (ctx->pc != 0x2C1B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C1B8Cu;
label_2c1b8c:
    // 0x2c1b8c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2c1b90:
    if (ctx->pc == 0x2C1B90u) {
        ctx->pc = 0x2C1B90u;
            // 0x2c1b90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1B94u;
        goto label_2c1b94;
    }
    ctx->pc = 0x2C1B8Cu;
    {
        const bool branch_taken_0x2c1b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B8Cu;
            // 0x2c1b90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1b8c) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1B94u;
label_2c1b94:
    // 0x2c1b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1b98:
    // 0x2c1b98: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2c1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2c1b9c:
    // 0x2c1b9c: 0xc0afd7a  jal         func_2BF5E8
label_2c1ba0:
    if (ctx->pc == 0x2C1BA0u) {
        ctx->pc = 0x2C1BA0u;
            // 0x2c1ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BA4u;
        goto label_2c1ba4;
    }
    ctx->pc = 0x2C1B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C1BA4u);
    ctx->pc = 0x2C1BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1B9Cu;
            // 0x2c1ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5E8u;
    if (runtime->hasFunction(0x2BF5E8u)) {
        auto targetFn = runtime->lookupFunction(0x2BF5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BA4u; }
        if (ctx->pc != 0x2C1BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF5E8_0x2bf5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BA4u; }
        if (ctx->pc != 0x2C1BA4u) { return; }
    }
    ctx->pc = 0x2C1BA4u;
label_2c1ba4:
    // 0x2c1ba4: 0xc0b014e  jal         func_2C0538
label_2c1ba8:
    if (ctx->pc == 0x2C1BA8u) {
        ctx->pc = 0x2C1BA8u;
            // 0x2c1ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BACu;
        goto label_2c1bac;
    }
    ctx->pc = 0x2C1BA4u;
    SET_GPR_U32(ctx, 31, 0x2C1BACu);
    ctx->pc = 0x2C1BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BA4u;
            // 0x2c1ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0538u;
    if (runtime->hasFunction(0x2C0538u)) {
        auto targetFn = runtime->lookupFunction(0x2C0538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BACu; }
        if (ctx->pc != 0x2C1BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0538_0x2c0538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BACu; }
        if (ctx->pc != 0x2C1BACu) { return; }
    }
    ctx->pc = 0x2C1BACu;
label_2c1bac:
    // 0x2c1bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bb0:
    // 0x2c1bb0: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_2c1bb4:
    if (ctx->pc == 0x2C1BB4u) {
        ctx->pc = 0x2C1BB4u;
            // 0x2c1bb4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2C1BB8u;
        goto label_2c1bb8;
    }
    ctx->pc = 0x2C1BB0u;
    {
        const bool branch_taken_0x2c1bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BB0u;
            // 0x2c1bb4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bb0) {
            ctx->pc = 0x2C1BD4u;
            goto label_2c1bd4;
        }
    }
    ctx->pc = 0x2C1BB8u;
label_2c1bb8:
    // 0x2c1bb8: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1bbc:
    // 0x2c1bbc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1bc0:
    // 0x2c1bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1bc4:
    // 0x2c1bc4: 0x2a0f809  jalr        $s5
label_2c1bc8:
    if (ctx->pc == 0x2C1BC8u) {
        ctx->pc = 0x2C1BC8u;
            // 0x2c1bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BCCu;
        goto label_2c1bcc;
    }
    ctx->pc = 0x2C1BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1BCCu);
        ctx->pc = 0x2C1BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BC4u;
            // 0x2c1bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1BCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BCCu; }
            if (ctx->pc != 0x2C1BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x2C1BCCu;
label_2c1bcc:
    // 0x2c1bcc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2c1bd0:
    if (ctx->pc == 0x2C1BD0u) {
        ctx->pc = 0x2C1BD0u;
            // 0x2c1bd0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1BD4u;
        goto label_2c1bd4;
    }
    ctx->pc = 0x2C1BCCu;
    {
        const bool branch_taken_0x2c1bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BCCu;
            // 0x2c1bd0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bcc) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1BD4u;
label_2c1bd4:
    // 0x2c1bd4: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
label_2c1bd8:
    if (ctx->pc == 0x2C1BD8u) {
        ctx->pc = 0x2C1BD8u;
            // 0x2c1bd8: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->pc = 0x2C1BDCu;
        goto label_2c1bdc;
    }
    ctx->pc = 0x2C1BD4u;
    {
        const bool branch_taken_0x2c1bd4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C1BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BD4u;
            // 0x2c1bd8: 0xae320028  sw          $s2, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bd4) {
            ctx->pc = 0x2C1BFCu;
            goto label_2c1bfc;
        }
    }
    ctx->pc = 0x2C1BDCu;
label_2c1bdc:
    // 0x2c1bdc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2c1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c1be0:
    // 0x2c1be0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c1be4:
    // 0x2c1be4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1be8:
    // 0x2c1be8: 0x2a0f809  jalr        $s5
label_2c1bec:
    if (ctx->pc == 0x2C1BECu) {
        ctx->pc = 0x2C1BECu;
            // 0x2c1bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BF0u;
        goto label_2c1bf0;
    }
    ctx->pc = 0x2C1BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1BF0u);
        ctx->pc = 0x2C1BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BE8u;
            // 0x2c1bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1BF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1BF0u; }
            if (ctx->pc != 0x2C1BF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1BF0u;
label_2c1bf0:
    // 0x2c1bf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2c1bf4:
    if (ctx->pc == 0x2C1BF4u) {
        ctx->pc = 0x2C1BF4u;
            // 0x2c1bf4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2C1BF8u;
        goto label_2c1bf8;
    }
    ctx->pc = 0x2C1BF0u;
    {
        const bool branch_taken_0x2c1bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1BF0u;
            // 0x2c1bf4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1bf0) {
            ctx->pc = 0x2C1C38u;
            goto label_2c1c38;
        }
    }
    ctx->pc = 0x2C1BF8u;
label_2c1bf8:
    // 0x2c1bf8: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x2c1bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_2c1bfc:
    // 0x2c1bfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c00:
    // 0x2c1c00: 0x2a0f809  jalr        $s5
label_2c1c04:
    if (ctx->pc == 0x2C1C04u) {
        ctx->pc = 0x2C1C04u;
            // 0x2c1c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C08u;
        goto label_2c1c08;
    }
    ctx->pc = 0x2C1C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C1C08u);
        ctx->pc = 0x2C1C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C00u;
            // 0x2c1c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C08u; }
            if (ctx->pc != 0x2C1C08u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1C08u;
label_2c1c08:
    // 0x2c1c08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c1c0c:
    if (ctx->pc == 0x2C1C0Cu) {
        ctx->pc = 0x2C1C0Cu;
            // 0x2c1c0c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x2C1C10u;
        goto label_2c1c10;
    }
    ctx->pc = 0x2C1C08u;
    {
        const bool branch_taken_0x2c1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C08u;
            // 0x2c1c0c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c08) {
            ctx->pc = 0x2C1C34u;
            goto label_2c1c34;
        }
    }
    ctx->pc = 0x2C1C10u;
label_2c1c10:
    // 0x2c1c10: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_2c1c14:
    if (ctx->pc == 0x2C1C14u) {
        ctx->pc = 0x2C1C14u;
            // 0x2c1c14: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x2C1C18u;
        goto label_2c1c18;
    }
    ctx->pc = 0x2C1C10u;
    {
        const bool branch_taken_0x2c1c10 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2C1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C10u;
            // 0x2c1c14: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c10) {
            ctx->pc = 0x2C1C30u;
            goto label_2c1c30;
        }
    }
    ctx->pc = 0x2C1C18u;
label_2c1c18:
    // 0x2c1c18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c1c1c:
    // 0x2c1c1c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x2c1c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c20:
    // 0x2c1c20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c1c24:
    // 0x2c1c24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c1c28:
    // 0x2c1c28: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
label_2c1c2c:
    if (ctx->pc == 0x2C1C2Cu) {
        ctx->pc = 0x2C1C2Cu;
            // 0x2c1c2c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2C1C30u;
        goto label_2c1c30;
    }
    ctx->pc = 0x2C1C28u;
    {
        const bool branch_taken_0x2c1c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C28u;
            // 0x2c1c2c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c28) {
            ctx->pc = 0x2C1AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1ac8;
        }
    }
    ctx->pc = 0x2C1C30u;
label_2c1c30:
    // 0x2c1c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1c34:
    // 0x2c1c34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c1c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c1c38:
    // 0x2c1c38: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2c1c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c1c3c:
    // 0x2c1c3c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c1c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1c40:
    // 0x2c1c40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c1c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1c44:
    // 0x2c1c44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1c48:
    // 0x2c1c48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1c4c:
    // 0x2c1c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1c50:
    // 0x2c1c50: 0x3e00008  jr          $ra
label_2c1c54:
    if (ctx->pc == 0x2C1C54u) {
        ctx->pc = 0x2C1C54u;
            // 0x2c1c54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2C1C58u;
        goto label_2c1c58;
    }
    ctx->pc = 0x2C1C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C50u;
            // 0x2c1c54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1C58u;
label_2c1c58:
    // 0x2c1c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c1c5c:
    // 0x2c1c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c1c60:
    // 0x2c1c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c64:
    // 0x2c1c64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c1c68:
    // 0x2c1c68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2c1c6c:
    // 0x2c1c6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c1c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c70:
    // 0x2c1c70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c1c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c74:
    // 0x2c1c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c1c78:
    // 0x2c1c78: 0xc0a69c2  jal         func_29A708
label_2c1c7c:
    if (ctx->pc == 0x2C1C7Cu) {
        ctx->pc = 0x2C1C7Cu;
            // 0x2c1c7c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C80u;
        goto label_2c1c80;
    }
    ctx->pc = 0x2C1C78u;
    SET_GPR_U32(ctx, 31, 0x2C1C80u);
    ctx->pc = 0x2C1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C78u;
            // 0x2c1c7c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (runtime->hasFunction(0x29A708u)) {
        auto targetFn = runtime->lookupFunction(0x29A708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C80u; }
        if (ctx->pc != 0x2C1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A708_0x29a708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1C80u; }
        if (ctx->pc != 0x2C1C80u) { return; }
    }
    ctx->pc = 0x2C1C80u;
label_2c1c80:
    // 0x2c1c80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c1c84:
    if (ctx->pc == 0x2C1C84u) {
        ctx->pc = 0x2C1C84u;
            // 0x2c1c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C88u;
        goto label_2c1c88;
    }
    ctx->pc = 0x2C1C80u;
    {
        const bool branch_taken_0x2c1c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C80u;
            // 0x2c1c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c80) {
            ctx->pc = 0x2C1C90u;
            goto label_2c1c90;
        }
    }
    ctx->pc = 0x2C1C88u;
label_2c1c88:
    // 0x2c1c88: 0x10000005  b           . + 4 + (0x5 << 2)
label_2c1c8c:
    if (ctx->pc == 0x2C1C8Cu) {
        ctx->pc = 0x2C1C8Cu;
            // 0x2c1c8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C1C90u;
        goto label_2c1c90;
    }
    ctx->pc = 0x2C1C88u;
    {
        const bool branch_taken_0x2c1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C88u;
            // 0x2c1c8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1c88) {
            ctx->pc = 0x2C1CA0u;
            goto label_2c1ca0;
        }
    }
    ctx->pc = 0x2C1C90u;
label_2c1c90:
    // 0x2c1c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c1c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c94:
    // 0x2c1c94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c1c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1c98:
    // 0x2c1c98: 0xc0b072e  jal         func_2C1CB8
label_2c1c9c:
    if (ctx->pc == 0x2C1C9Cu) {
        ctx->pc = 0x2C1C9Cu;
            // 0x2c1c9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1CA0u;
        goto label_2c1ca0;
    }
    ctx->pc = 0x2C1C98u;
    SET_GPR_U32(ctx, 31, 0x2C1CA0u);
    ctx->pc = 0x2C1C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1C98u;
            // 0x2c1c9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1CB8u;
    if (runtime->hasFunction(0x2C1CB8u)) {
        auto targetFn = runtime->lookupFunction(0x2C1CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CA0u; }
        if (ctx->pc != 0x2C1CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1CB8_0x2c1cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CA0u; }
        if (ctx->pc != 0x2C1CA0u) { return; }
    }
    ctx->pc = 0x2C1CA0u;
label_2c1ca0:
    // 0x2c1ca0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1ca4:
    // 0x2c1ca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1ca8:
    // 0x2c1ca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1cac:
    // 0x2c1cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1cb0:
    // 0x2c1cb0: 0x3e00008  jr          $ra
label_2c1cb4:
    if (ctx->pc == 0x2C1CB4u) {
        ctx->pc = 0x2C1CB4u;
            // 0x2c1cb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C1CB8u;
        goto label_fallthrough_0x2c1cb0;
    }
    ctx->pc = 0x2C1CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CB0u;
            // 0x2c1cb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c1cb0:
    ctx->pc = 0x2C1CB8u;
    ctx->pc = 0x2c1cb8u;
}
