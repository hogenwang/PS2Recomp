#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233B08
// Address: 0x233b08 - 0x233bd0
void sub_00233B08_0x233b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233B08_0x233b08");
#endif

    switch (ctx->pc) {
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        default: break;
    }

    ctx->pc = 0x233b08u;

label_233b08:
    // 0x233b08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_233b0c:
    // 0x233b0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_233b10:
    // 0x233b10: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x233b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_233b14:
    // 0x233b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233b18:
    // 0x233b18: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x233b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_233b1c:
    // 0x233b1c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x233b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_233b20:
    // 0x233b20: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x233b20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_233b24:
    // 0x233b24: 0x96040030  lhu         $a0, 0x30($s0)
    ctx->pc = 0x233b24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_233b28:
    // 0x233b28: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_233b2c:
    if (ctx->pc == 0x233B2Cu) {
        ctx->pc = 0x233B2Cu;
            // 0x233b2c: 0x86120030  lh          $s2, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x233B30u;
        goto label_233b30;
    }
    ctx->pc = 0x233B28u;
    {
        const bool branch_taken_0x233b28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B28u;
            // 0x233b2c: 0x86120030  lh          $s2, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b28) {
            ctx->pc = 0x233B4Cu;
            goto label_233b4c;
        }
    }
    ctx->pc = 0x233B30u;
label_233b30:
    // 0x233b30: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_233b34:
    // 0x233b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b38:
    // 0x233b38: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_233b3c:
    if (ctx->pc == 0x233B3Cu) {
        ctx->pc = 0x233B3Cu;
            // 0x233b3c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x233B40u;
        goto label_233b40;
    }
    ctx->pc = 0x233B38u;
    {
        const bool branch_taken_0x233b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B38u;
            // 0x233b3c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b38) {
            ctx->pc = 0x233B58u;
            goto label_233b58;
        }
    }
    ctx->pc = 0x233B40u;
label_233b40:
    // 0x233b40: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x233b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_233b44:
    // 0x233b44: 0x1000000b  b           . + 4 + (0xB << 2)
label_233b48:
    if (ctx->pc == 0x233B48u) {
        ctx->pc = 0x233B48u;
            // 0x233b48: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x233B4Cu;
        goto label_233b4c;
    }
    ctx->pc = 0x233B44u;
    {
        const bool branch_taken_0x233b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B44u;
            // 0x233b48: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b44) {
            ctx->pc = 0x233B74u;
            goto label_233b74;
        }
    }
    ctx->pc = 0x233B4Cu;
label_233b4c:
    // 0x233b4c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x233b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_233b50:
    // 0x233b50: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_233b54:
    if (ctx->pc == 0x233B54u) {
        ctx->pc = 0x233B54u;
            // 0x233b54: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x233B58u;
        goto label_233b58;
    }
    ctx->pc = 0x233B50u;
    {
        const bool branch_taken_0x233b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B50u;
            // 0x233b54: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b50) {
            ctx->pc = 0x233B60u;
            goto label_233b60;
        }
    }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x10000017  b           . + 4 + (0x17 << 2)
label_233b5c:
    if (ctx->pc == 0x233B5Cu) {
        ctx->pc = 0x233B5Cu;
            // 0x233b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B60u;
        goto label_233b60;
    }
    ctx->pc = 0x233B58u;
    {
        const bool branch_taken_0x233b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B58u;
            // 0x233b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b58) {
            ctx->pc = 0x233BB8u;
            goto label_233bb8;
        }
    }
    ctx->pc = 0x233B60u;
label_233b60:
    // 0x233b60: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_233b64:
    // 0x233b64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x233b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_233b68:
    // 0x233b68: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x233b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_233b6c:
    // 0x233b6c: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
label_233b70:
    if (ctx->pc == 0x233B70u) {
        ctx->pc = 0x233B70u;
            // 0x233b70: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x233B74u;
        goto label_233b74;
    }
    ctx->pc = 0x233B6Cu;
    {
        const bool branch_taken_0x233b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B6Cu;
            // 0x233b70: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b6c) {
            ctx->pc = 0x233B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233b58;
        }
    }
    ctx->pc = 0x233B74u;
label_233b74:
    // 0x233b74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233b78:
    // 0x233b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233b7c:
    // 0x233b7c: 0xc049cb6  jal         func_1272D8
label_233b80:
    if (ctx->pc == 0x233B80u) {
        ctx->pc = 0x233B80u;
            // 0x233b80: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x233B84u;
        goto label_233b84;
    }
    ctx->pc = 0x233B7Cu;
    SET_GPR_U32(ctx, 31, 0x233B84u);
    ctx->pc = 0x233B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B7Cu;
            // 0x233b80: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B84u; }
        if (ctx->pc != 0x233B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B84u; }
        if (ctx->pc != 0x233B84u) { return; }
    }
    ctx->pc = 0x233B84u;
label_233b84:
    // 0x233b84: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x233b84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_233b88:
    // 0x233b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233b8c:
    // 0x233b8c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_233b90:
    // 0x233b90: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_233b94:
    // 0x233b94: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x233b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_233b98:
    // 0x233b98: 0x34a56910  ori         $a1, $a1, 0x6910
    ctx->pc = 0x233b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26896);
label_233b9c:
    // 0x233b9c: 0xa7a30010  sh          $v1, 0x10($sp)
    ctx->pc = 0x233b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
label_233ba0:
    // 0x233ba0: 0x40f809  jalr        $v0
label_233ba4:
    if (ctx->pc == 0x233BA4u) {
        ctx->pc = 0x233BA4u;
            // 0x233ba4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BA8u;
        goto label_233ba8;
    }
    ctx->pc = 0x233BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233BA8u);
        ctx->pc = 0x233BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BA0u;
            // 0x233ba4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233BA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233BA8u; }
            if (ctx->pc != 0x233BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x233BA8u;
label_233ba8:
    // 0x233ba8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_233bac:
    if (ctx->pc == 0x233BACu) {
        ctx->pc = 0x233BACu;
            // 0x233bac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x233BB0u;
        goto label_233bb0;
    }
    ctx->pc = 0x233BA8u;
    {
        const bool branch_taken_0x233ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BA8u;
            // 0x233bac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ba8) {
            ctx->pc = 0x233BBCu;
            goto label_233bbc;
        }
    }
    ctx->pc = 0x233BB0u;
label_233bb0:
    // 0x233bb0: 0xa6120030  sh          $s2, 0x30($s0)
    ctx->pc = 0x233bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 18));
label_233bb4:
    // 0x233bb4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x233bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
label_233bb8:
    // 0x233bb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x233bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_233bbc:
    // 0x233bbc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x233bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_233bc0:
    // 0x233bc0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233bc4:
    // 0x233bc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x233bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233bc8:
    // 0x233bc8: 0x3e00008  jr          $ra
label_233bcc:
    if (ctx->pc == 0x233BCCu) {
        ctx->pc = 0x233BCCu;
            // 0x233bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x233BD0u;
        goto label_fallthrough_0x233bc8;
    }
    ctx->pc = 0x233BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BC8u;
            // 0x233bcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x233bc8:
    ctx->pc = 0x233BD0u;
    ctx->pc = 0x233bd0u;
}
