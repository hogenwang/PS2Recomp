#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00270AE0
// Address: 0x270ae0 - 0x270cc0
void sub_00270AE0_0x270ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270AE0_0x270ae0");
#endif

    switch (ctx->pc) {
        case 0x270ae0u: goto label_270ae0;
        case 0x270ae4u: goto label_270ae4;
        case 0x270ae8u: goto label_270ae8;
        case 0x270aecu: goto label_270aec;
        case 0x270af0u: goto label_270af0;
        case 0x270af4u: goto label_270af4;
        case 0x270af8u: goto label_270af8;
        case 0x270afcu: goto label_270afc;
        case 0x270b00u: goto label_270b00;
        case 0x270b04u: goto label_270b04;
        case 0x270b08u: goto label_270b08;
        case 0x270b0cu: goto label_270b0c;
        case 0x270b10u: goto label_270b10;
        case 0x270b14u: goto label_270b14;
        case 0x270b18u: goto label_270b18;
        case 0x270b1cu: goto label_270b1c;
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        case 0x270bf8u: goto label_270bf8;
        case 0x270bfcu: goto label_270bfc;
        case 0x270c00u: goto label_270c00;
        case 0x270c04u: goto label_270c04;
        case 0x270c08u: goto label_270c08;
        case 0x270c0cu: goto label_270c0c;
        case 0x270c10u: goto label_270c10;
        case 0x270c14u: goto label_270c14;
        case 0x270c18u: goto label_270c18;
        case 0x270c1cu: goto label_270c1c;
        case 0x270c20u: goto label_270c20;
        case 0x270c24u: goto label_270c24;
        case 0x270c28u: goto label_270c28;
        case 0x270c2cu: goto label_270c2c;
        case 0x270c30u: goto label_270c30;
        case 0x270c34u: goto label_270c34;
        case 0x270c38u: goto label_270c38;
        case 0x270c3cu: goto label_270c3c;
        case 0x270c40u: goto label_270c40;
        case 0x270c44u: goto label_270c44;
        case 0x270c48u: goto label_270c48;
        case 0x270c4cu: goto label_270c4c;
        case 0x270c50u: goto label_270c50;
        case 0x270c54u: goto label_270c54;
        case 0x270c58u: goto label_270c58;
        case 0x270c5cu: goto label_270c5c;
        case 0x270c60u: goto label_270c60;
        case 0x270c64u: goto label_270c64;
        case 0x270c68u: goto label_270c68;
        case 0x270c6cu: goto label_270c6c;
        case 0x270c70u: goto label_270c70;
        case 0x270c74u: goto label_270c74;
        case 0x270c78u: goto label_270c78;
        case 0x270c7cu: goto label_270c7c;
        case 0x270c80u: goto label_270c80;
        case 0x270c84u: goto label_270c84;
        case 0x270c88u: goto label_270c88;
        case 0x270c8cu: goto label_270c8c;
        case 0x270c90u: goto label_270c90;
        case 0x270c94u: goto label_270c94;
        case 0x270c98u: goto label_270c98;
        case 0x270c9cu: goto label_270c9c;
        case 0x270ca0u: goto label_270ca0;
        case 0x270ca4u: goto label_270ca4;
        case 0x270ca8u: goto label_270ca8;
        case 0x270cacu: goto label_270cac;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cb4u: goto label_270cb4;
        case 0x270cb8u: goto label_270cb8;
        case 0x270cbcu: goto label_270cbc;
        default: break;
    }

    ctx->pc = 0x270ae0u;

label_270ae0:
    // 0x270ae0: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x270ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_270ae4:
    // 0x270ae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270ae8:
    // 0x270ae8: 0x3e00008  jr          $ra
label_270aec:
    if (ctx->pc == 0x270AECu) {
        ctx->pc = 0x270AECu;
            // 0x270aec: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x270AF0u;
        goto label_270af0;
    }
    ctx->pc = 0x270AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AE8u;
            // 0x270aec: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270AF0u;
label_270af0:
    // 0x270af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x270af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_270af4:
    // 0x270af4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x270af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_270af8:
    // 0x270af8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x270af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_270afc:
    // 0x270afc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x270afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_270b00:
    // 0x270b00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x270b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270b04:
    // 0x270b04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x270b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_270b08:
    // 0x270b08: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x270b08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270b0c:
    // 0x270b0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x270b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_270b10:
    // 0x270b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_270b14:
    // 0x270b14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x270b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_270b18:
    // 0x270b18: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x270b18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_270b1c:
    // 0x270b1c: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x270b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_270b20:
    // 0x270b20: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x270b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_270b24:
    // 0x270b24: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_270b28:
    if (ctx->pc == 0x270B28u) {
        ctx->pc = 0x270B28u;
            // 0x270b28: 0x26550004  addiu       $s5, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x270B2Cu;
        goto label_270b2c;
    }
    ctx->pc = 0x270B24u;
    {
        const bool branch_taken_0x270b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B24u;
            // 0x270b28: 0x26550004  addiu       $s5, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b24) {
            ctx->pc = 0x270C28u;
            goto label_270c28;
        }
    }
    ctx->pc = 0x270B2Cu;
label_270b2c:
    // 0x270b2c: 0xc09c2b8  jal         func_270AE0
label_270b30:
    if (ctx->pc == 0x270B30u) {
        ctx->pc = 0x270B30u;
            // 0x270b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270B34u;
        goto label_270b34;
    }
    ctx->pc = 0x270B2Cu;
    SET_GPR_U32(ctx, 31, 0x270B34u);
    ctx->pc = 0x270B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B2Cu;
            // 0x270b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270AE0u;
    goto label_270ae0;
    ctx->pc = 0x270B34u;
label_270b34:
    // 0x270b34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x270b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270b38:
    // 0x270b38: 0x660004a  bltz        $s3, . + 4 + (0x4A << 2)
label_270b3c:
    if (ctx->pc == 0x270B3Cu) {
        ctx->pc = 0x270B3Cu;
            // 0x270b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x270B40u;
        goto label_270b40;
    }
    ctx->pc = 0x270B38u;
    {
        const bool branch_taken_0x270b38 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x270B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B38u;
            // 0x270b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b38) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270B40u;
label_270b40:
    // 0x270b40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x270b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_270b44:
    // 0x270b44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_270b48:
    if (ctx->pc == 0x270B48u) {
        ctx->pc = 0x270B48u;
            // 0x270b48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x270B4Cu;
        goto label_270b4c;
    }
    ctx->pc = 0x270B44u;
    {
        const bool branch_taken_0x270b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x270B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B44u;
            // 0x270b48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b44) {
            ctx->pc = 0x270B54u;
            goto label_270b54;
        }
    }
    ctx->pc = 0x270B4Cu;
label_270b4c:
    // 0x270b4c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_270b50:
    if (ctx->pc == 0x270B50u) {
        ctx->pc = 0x270B50u;
            // 0x270b50: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x270B54u;
        goto label_270b54;
    }
    ctx->pc = 0x270B4Cu;
    {
        const bool branch_taken_0x270b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B4Cu;
            // 0x270b50: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b4c) {
            ctx->pc = 0x270B8Cu;
            goto label_270b8c;
        }
    }
    ctx->pc = 0x270B54u;
label_270b54:
    // 0x270b54: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_270b58:
    // 0x270b58: 0xc09a08e  jal         func_268238
label_270b5c:
    if (ctx->pc == 0x270B5Cu) {
        ctx->pc = 0x270B5Cu;
            // 0x270b5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270B60u;
        goto label_270b60;
    }
    ctx->pc = 0x270B58u;
    SET_GPR_U32(ctx, 31, 0x270B60u);
    ctx->pc = 0x270B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270B58u;
            // 0x270b5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268238u;
    if (runtime->hasFunction(0x268238u)) {
        auto targetFn = runtime->lookupFunction(0x268238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B60u; }
        if (ctx->pc != 0x270B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268238_0x268238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270B60u; }
        if (ctx->pc != 0x270B60u) { return; }
    }
    ctx->pc = 0x270B60u;
label_270b60:
    // 0x270b60: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
label_270b64:
    if (ctx->pc == 0x270B64u) {
        ctx->pc = 0x270B64u;
            // 0x270b64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x270B68u;
        goto label_270b68;
    }
    ctx->pc = 0x270B60u;
    {
        const bool branch_taken_0x270b60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B60u;
            // 0x270b64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b60) {
            ctx->pc = 0x270C28u;
            goto label_270c28;
        }
    }
    ctx->pc = 0x270B68u;
label_270b68:
    // 0x270b68: 0x1622002d  bne         $s1, $v0, . + 4 + (0x2D << 2)
label_270b6c:
    if (ctx->pc == 0x270B6Cu) {
        ctx->pc = 0x270B6Cu;
            // 0x270b6c: 0x2606680b  addiu       $a2, $s0, 0x680B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 26635));
        ctx->pc = 0x270B70u;
        goto label_270b70;
    }
    ctx->pc = 0x270B68u;
    {
        const bool branch_taken_0x270b68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x270B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B68u;
            // 0x270b6c: 0x2606680b  addiu       $a2, $s0, 0x680B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 26635));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b68) {
            ctx->pc = 0x270C20u;
            goto label_270c20;
        }
    }
    ctx->pc = 0x270B70u;
label_270b70:
    // 0x270b70: 0x92026708  lbu         $v0, 0x6708($s0)
    ctx->pc = 0x270b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26376)));
label_270b74:
    // 0x270b74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_270b78:
    if (ctx->pc == 0x270B78u) {
        ctx->pc = 0x270B78u;
            // 0x270b78: 0x2607690b  addiu       $a3, $s0, 0x690B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 26891));
        ctx->pc = 0x270B7Cu;
        goto label_270b7c;
    }
    ctx->pc = 0x270B74u;
    {
        const bool branch_taken_0x270b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B74u;
            // 0x270b78: 0x2607690b  addiu       $a3, $s0, 0x690B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 26891));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b74) {
            ctx->pc = 0x270B88u;
            goto label_270b88;
        }
    }
    ctx->pc = 0x270B7Cu;
label_270b7c:
    // 0x270b7c: 0x92026a10  lbu         $v0, 0x6A10($s0)
    ctx->pc = 0x270b7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27152)));
label_270b80:
    // 0x270b80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B84u;
            // 0x270b84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270B88u;
        goto label_270b88;
    }
    ctx->pc = 0x270B80u;
    {
        const bool branch_taken_0x270b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B80u;
            // 0x270b84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b80) {
            ctx->pc = 0x270BA0u;
            goto label_270ba0;
        }
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x270b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_270b8c:
    // 0x270b8c: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_270b90:
    // 0x270b90: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x270b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_270b94:
    // 0x270b94: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_270b98:
    // 0x270b98: 0x10000023  b           . + 4 + (0x23 << 2)
label_270b9c:
    if (ctx->pc == 0x270B9Cu) {
        ctx->pc = 0x270B9Cu;
            // 0x270b9c: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x270BA0u;
        goto label_270ba0;
    }
    ctx->pc = 0x270B98u;
    {
        const bool branch_taken_0x270b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B98u;
            // 0x270b9c: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b98) {
            ctx->pc = 0x270C28u;
            goto label_270c28;
        }
    }
    ctx->pc = 0x270BA0u;
label_270ba0:
    // 0x270ba0: 0xc099f6c  jal         func_267DB0
label_270ba4:
    if (ctx->pc == 0x270BA4u) {
        ctx->pc = 0x270BA4u;
            // 0x270ba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x270BA8u;
        goto label_270ba8;
    }
    ctx->pc = 0x270BA0u;
    SET_GPR_U32(ctx, 31, 0x270BA8u);
    ctx->pc = 0x270BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270BA0u;
            // 0x270ba4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267DB0u;
    if (runtime->hasFunction(0x267DB0u)) {
        auto targetFn = runtime->lookupFunction(0x267DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BA8u; }
        if (ctx->pc != 0x270BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267DB0_0x267db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BA8u; }
        if (ctx->pc != 0x270BA8u) { return; }
    }
    ctx->pc = 0x270BA8u;
label_270ba8:
    // 0x270ba8: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
label_270bac:
    if (ctx->pc == 0x270BACu) {
        ctx->pc = 0x270BACu;
            // 0x270bac: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x270BB0u;
        goto label_270bb0;
    }
    ctx->pc = 0x270BA8u;
    {
        const bool branch_taken_0x270ba8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x270ba8) {
            ctx->pc = 0x270BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270BA8u;
            // 0x270bac: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270BC4u;
            goto label_270bc4;
        }
    }
    ctx->pc = 0x270BB0u;
label_270bb0:
    // 0x270bb0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_270bb4:
    // 0x270bb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270bb8:
    // 0x270bb8: 0xc08b5ac  jal         func_22D6B0
label_270bbc:
    if (ctx->pc == 0x270BBCu) {
        ctx->pc = 0x270BBCu;
            // 0x270bbc: 0x24a59c98  addiu       $a1, $a1, -0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941848));
        ctx->pc = 0x270BC0u;
        goto label_270bc0;
    }
    ctx->pc = 0x270BB8u;
    SET_GPR_U32(ctx, 31, 0x270BC0u);
    ctx->pc = 0x270BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270BB8u;
            // 0x270bbc: 0x24a59c98  addiu       $a1, $a1, -0x6368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BC0u; }
        if (ctx->pc != 0x270BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BC0u; }
        if (ctx->pc != 0x270BC0u) { return; }
    }
    ctx->pc = 0x270BC0u;
label_270bc0:
    // 0x270bc0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x270bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_270bc4:
    // 0x270bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270bc8:
    // 0x270bc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x270bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270bcc:
    // 0x270bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x270bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270bd0:
    // 0x270bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x270bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270bd4:
    // 0x270bd4: 0x40f809  jalr        $v0
label_270bd8:
    if (ctx->pc == 0x270BD8u) {
        ctx->pc = 0x270BD8u;
            // 0x270bd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270BDCu;
        goto label_270bdc;
    }
    ctx->pc = 0x270BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270BDCu);
        ctx->pc = 0x270BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BD4u;
            // 0x270bd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x270BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x270BDCu; }
            if (ctx->pc != 0x270BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x270BDCu;
label_270bdc:
    // 0x270bdc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_270be0:
    if (ctx->pc == 0x270BE0u) {
        ctx->pc = 0x270BE0u;
            // 0x270be0: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x270BE4u;
        goto label_270be4;
    }
    ctx->pc = 0x270BDCu;
    {
        const bool branch_taken_0x270bdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BDCu;
            // 0x270be0: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bdc) {
            ctx->pc = 0x270BF8u;
            goto label_270bf8;
        }
    }
    ctx->pc = 0x270BE4u;
label_270be4:
    // 0x270be4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_270be8:
    // 0x270be8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270bec:
    // 0x270bec: 0xc08b5ac  jal         func_22D6B0
label_270bf0:
    if (ctx->pc == 0x270BF0u) {
        ctx->pc = 0x270BF0u;
            // 0x270bf0: 0x24a59cd8  addiu       $a1, $a1, -0x6328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941912));
        ctx->pc = 0x270BF4u;
        goto label_270bf4;
    }
    ctx->pc = 0x270BECu;
    SET_GPR_U32(ctx, 31, 0x270BF4u);
    ctx->pc = 0x270BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270BECu;
            // 0x270bf0: 0x24a59cd8  addiu       $a1, $a1, -0x6328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BF4u; }
        if (ctx->pc != 0x270BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270BF4u; }
        if (ctx->pc != 0x270BF4u) { return; }
    }
    ctx->pc = 0x270BF4u;
label_270bf4:
    // 0x270bf4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x270bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_270bf8:
    // 0x270bf8: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x270bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_270bfc:
    // 0x270bfc: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x270bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_270c00:
    // 0x270c00: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x270c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_270c04:
    // 0x270c04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x270c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_270c08:
    // 0x270c08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x270c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_270c0c:
    // 0x270c0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x270c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_270c10:
    // 0x270c10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x270c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_270c14:
    // 0x270c14: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270c18:
    // 0x270c18: 0x40f809  jalr        $v0
label_270c1c:
    if (ctx->pc == 0x270C1Cu) {
        ctx->pc = 0x270C20u;
        goto label_270c20;
    }
    ctx->pc = 0x270C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270C20u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x270C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x270C20u; }
            if (ctx->pc != 0x270C20u) { return; }
        }
        }
    }
    ctx->pc = 0x270C20u;
label_270c20:
    // 0x270c20: 0xc043328  jal         func_10CCA0
label_270c24:
    if (ctx->pc == 0x270C24u) {
        ctx->pc = 0x270C24u;
            // 0x270c24: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x270C28u;
        goto label_270c28;
    }
    ctx->pc = 0x270C20u;
    SET_GPR_U32(ctx, 31, 0x270C28u);
    ctx->pc = 0x270C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C20u;
            // 0x270c24: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C28u; }
        if (ctx->pc != 0x270C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C28u; }
        if (ctx->pc != 0x270C28u) { return; }
    }
    ctx->pc = 0x270C28u;
label_270c28:
    // 0x270c28: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
label_270c2c:
    if (ctx->pc == 0x270C2Cu) {
        ctx->pc = 0x270C2Cu;
            // 0x270c2c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x270C30u;
        goto label_270c30;
    }
    ctx->pc = 0x270C28u;
    {
        const bool branch_taken_0x270c28 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x270C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C28u;
            // 0x270c2c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c28) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270C30u;
label_270c30:
    // 0x270c30: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x270c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_270c34:
    // 0x270c34: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_270c38:
    // 0x270c38: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x270c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_270c3c:
    // 0x270c3c: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_270c40:
    if (ctx->pc == 0x270C40u) {
        ctx->pc = 0x270C40u;
            // 0x270c40: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x270C44u;
        goto label_270c44;
    }
    ctx->pc = 0x270C3Cu;
    {
        const bool branch_taken_0x270c3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C3Cu;
            // 0x270c40: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c3c) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270C44u;
label_270c44:
    // 0x270c44: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_270c48:
    // 0x270c48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_270c4c:
    // 0x270c4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_270c50:
    // 0x270c50: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x270c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_270c54:
    // 0x270c54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x270c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_270c58:
    // 0x270c58: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270c5c:
    // 0x270c5c: 0x40f809  jalr        $v0
label_270c60:
    if (ctx->pc == 0x270C60u) {
        ctx->pc = 0x270C64u;
        goto label_270c64;
    }
    ctx->pc = 0x270C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270C64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x270C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x270C64u; }
            if (ctx->pc != 0x270C64u) { return; }
        }
        }
    }
    ctx->pc = 0x270C64u;
label_270c64:
    // 0x270c64: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_270c68:
    // 0x270c68: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_270c6c:
    if (ctx->pc == 0x270C6Cu) {
        ctx->pc = 0x270C70u;
        goto label_270c70;
    }
    ctx->pc = 0x270C68u;
    {
        const bool branch_taken_0x270c68 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x270c68) {
            ctx->pc = 0x270C78u;
            goto label_270c78;
        }
    }
    ctx->pc = 0x270C70u;
label_270c70:
    // 0x270c70: 0xc04331c  jal         func_10CC70
label_270c74:
    if (ctx->pc == 0x270C74u) {
        ctx->pc = 0x270C78u;
        goto label_270c78;
    }
    ctx->pc = 0x270C70u;
    SET_GPR_U32(ctx, 31, 0x270C78u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C78u; }
        if (ctx->pc != 0x270C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C78u; }
        if (ctx->pc != 0x270C78u) { return; }
    }
    ctx->pc = 0x270C78u;
label_270c78:
    // 0x270c78: 0xc098560  jal         func_261580
label_270c7c:
    if (ctx->pc == 0x270C7Cu) {
        ctx->pc = 0x270C7Cu;
            // 0x270c7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270C80u;
        goto label_270c80;
    }
    ctx->pc = 0x270C78u;
    SET_GPR_U32(ctx, 31, 0x270C80u);
    ctx->pc = 0x270C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C78u;
            // 0x270c7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C80u; }
        if (ctx->pc != 0x270C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C80u; }
        if (ctx->pc != 0x270C80u) { return; }
    }
    ctx->pc = 0x270C80u;
label_270c80:
    // 0x270c80: 0xc0432d4  jal         func_10CB50
label_270c84:
    if (ctx->pc == 0x270C84u) {
        ctx->pc = 0x270C88u;
        goto label_270c88;
    }
    ctx->pc = 0x270C80u;
    SET_GPR_U32(ctx, 31, 0x270C88u);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C88u; }
        if (ctx->pc != 0x270C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C88u; }
        if (ctx->pc != 0x270C88u) { return; }
    }
    ctx->pc = 0x270C88u;
label_270c88:
    // 0x270c88: 0xc097360  jal         func_25CD80
label_270c8c:
    if (ctx->pc == 0x270C8Cu) {
        ctx->pc = 0x270C8Cu;
            // 0x270c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x270C90u;
        goto label_270c90;
    }
    ctx->pc = 0x270C88u;
    SET_GPR_U32(ctx, 31, 0x270C90u);
    ctx->pc = 0x270C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C88u;
            // 0x270c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C90u; }
        if (ctx->pc != 0x270C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C90u; }
        if (ctx->pc != 0x270C90u) { return; }
    }
    ctx->pc = 0x270C90u;
label_270c90:
    // 0x270c90: 0xc0432a8  jal         func_10CAA0
label_270c94:
    if (ctx->pc == 0x270C94u) {
        ctx->pc = 0x270C98u;
        goto label_270c98;
    }
    ctx->pc = 0x270C90u;
    SET_GPR_U32(ctx, 31, 0x270C98u);
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C98u; }
        if (ctx->pc != 0x270C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C98u; }
        if (ctx->pc != 0x270C98u) { return; }
    }
    ctx->pc = 0x270C98u;
label_270c98:
    // 0x270c98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x270c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_270c9c:
    // 0x270c9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270ca0:
    // 0x270ca0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_270ca4:
    // 0x270ca4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x270ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_270ca8:
    // 0x270ca8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x270ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_270cac:
    // 0x270cac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x270cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_270cb0:
    // 0x270cb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x270cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270cb4:
    // 0x270cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_270cb8:
    // 0x270cb8: 0x3e00008  jr          $ra
label_270cbc:
    if (ctx->pc == 0x270CBCu) {
        ctx->pc = 0x270CBCu;
            // 0x270cbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x270CC0u;
        goto label_fallthrough_0x270cb8;
    }
    ctx->pc = 0x270CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CB8u;
            // 0x270cbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x270cb8:
    ctx->pc = 0x270CC0u;
    ctx->pc = 0x270cc0u;
}
