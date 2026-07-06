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

// Function: sub_00165AF0
// Address: 0x165af0 - 0x165f70
void sub_00165AF0_0x165af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165AF0_0x165af0");
#endif

    switch (ctx->pc) {
        case 0x165b30u: goto label_165b30;
        case 0x165b58u: goto label_165b58;
        case 0x165b74u: goto label_165b74;
        case 0x165b90u: goto label_165b90;
        case 0x165bacu: goto label_165bac;
        case 0x165bd0u: goto label_165bd0;
        case 0x165be0u: goto label_165be0;
        case 0x165becu: goto label_165bec;
        case 0x165bf0u: goto label_165bf0;
        case 0x165c30u: goto label_165c30;
        case 0x165c44u: goto label_165c44;
        case 0x165d00u: goto label_165d00;
        case 0x165d08u: goto label_165d08;
        case 0x165d4cu: goto label_165d4c;
        case 0x165de4u: goto label_165de4;
        case 0x165e00u: goto label_165e00;
        case 0x165e08u: goto label_165e08;
        case 0x165e2cu: goto label_165e2c;
        case 0x165e38u: goto label_165e38;
        case 0x165e44u: goto label_165e44;
        case 0x165e50u: goto label_165e50;
        case 0x165eb4u: goto label_165eb4;
        case 0x165ec4u: goto label_165ec4;
        case 0x165f00u: goto label_165f00;
        case 0x165f1cu: goto label_165f1c;
        default: break;
    }

    ctx->pc = 0x165af0u;

    // 0x165af0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x165af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x165af4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x165af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x165af8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x165af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x165afc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x165afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x165b00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x165b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x165b04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x165b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x165b0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x165b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x165b14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x165b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165b24: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x165b28: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x165B28u;
    SET_GPR_U32(ctx, 31, 0x165B30u);
    ctx->pc = 0x165B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B28u;
    // 0x165b2c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x165B28u, 0x165B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B30u;
label_165b30:
    // 0x165b30: 0x329e00ff  andi        $fp, $s4, 0xFF
    ctx->pc = 0x165b30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x165b34: 0x2bc10002  slti        $at, $fp, 0x2
    ctx->pc = 0x165b34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165b38: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x165B38u;
    {
        const bool branch_taken_0x165b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B38u;
        // 0x165b3c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b38) {
            ctx->pc = 0x165B88u;
            goto label_165b88;
        }
    }
    ctx->pc = 0x165B40u;
    // 0x165b40: 0x92a20281  lbu         $v0, 0x281($s5)
    ctx->pc = 0x165b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 641)));
    // 0x165b44: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x165b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x165b48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x165B48u;
    {
        const bool branch_taken_0x165b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b48) {
            ctx->pc = 0x165B88u;
            goto label_165b88;
        }
    }
    ctx->pc = 0x165B50u;
    // 0x165b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b54: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x165b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165b58:
    // 0x165b58: 0x920203c2  lbu         $v0, 0x3C2($s0)
    ctx->pc = 0x165b58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 962)));
    // 0x165b5c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x165b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165b60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165B60u;
    {
        const bool branch_taken_0x165b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b60) {
            ctx->pc = 0x165B78u;
            goto label_165b78;
        }
    }
    ctx->pc = 0x165B68u;
    // 0x165b68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b6c: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x165B6Cu;
    SET_GPR_U32(ctx, 31, 0x165B74u);
    ctx->pc = 0x165B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B6Cu;
    // 0x165b70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x165B6Cu, 0x165B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B74u;
label_165b74:
    // 0x165b74: 0x0  nop
    ctx->pc = 0x165b74u;
    // NOP
label_165b78:
    // 0x165b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165b7c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x165b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165b80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x165B80u;
    {
        const bool branch_taken_0x165b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B80u;
        // 0x165b84: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b80) {
            ctx->pc = 0x165B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165b58;
        }
    }
    ctx->pc = 0x165B88u;
label_165b88:
    // 0x165b88: 0xc05993c  jal         func_1664F0
    ctx->pc = 0x165B88u;
    SET_GPR_U32(ctx, 31, 0x165B90u);
    ctx->pc = 0x165B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B88u;
    // 0x165b8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664F0u, 0x165B88u, 0x165B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B90u;
label_165b90:
    // 0x165b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x165b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165b98: 0x3203000c  andi        $v1, $s0, 0xC
    ctx->pc = 0x165b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
    // 0x165b9c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165B9Cu;
    {
        const bool branch_taken_0x165b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165b9c) {
            ctx->pc = 0x165BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B9Cu;
            // 0x165ba0: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165BB0u;
            goto label_165bb0;
        }
    }
    ctx->pc = 0x165BA4u;
    // 0x165ba4: 0xc0598b0  jal         func_1662C0
    ctx->pc = 0x165BA4u;
    SET_GPR_U32(ctx, 31, 0x165BACu);
    ctx->pc = 0x165BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BA4u;
    // 0x165ba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1662C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1662C0u, 0x165BA4u, 0x165BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BACu;
label_165bac:
    // 0x165bac: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x165bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_165bb0:
    // 0x165bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165bb4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165BB4u;
    {
        const bool branch_taken_0x165bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165bb4) {
            ctx->pc = 0x165BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165BB4u;
            // 0x165bb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165BC4u;
            goto label_165bc4;
        }
    }
    ctx->pc = 0x165BBCu;
    // 0x165bbc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x165BBCu;
    {
        const bool branch_taken_0x165bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BBCu;
        // 0x165bc0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bbc) {
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165BC4u;
label_165bc4:
    // 0x165bc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x165bc8: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x165BC8u;
    SET_GPR_U32(ctx, 31, 0x165BD0u);
    ctx->pc = 0x165BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BC8u;
    // 0x165bcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FF0u, 0x165BC8u, 0x165BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BD0u;
label_165bd0:
    // 0x165bd0: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x165bd0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165bd4: 0x1ac0007a  blez        $s6, . + 4 + (0x7A << 2)
    ctx->pc = 0x165BD4u;
    {
        const bool branch_taken_0x165bd4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x165BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BD4u;
        // 0x165bd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bd4) {
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165BDCu;
    // 0x165bdc: 0x96a400ea  lhu         $a0, 0xEA($s5)
    ctx->pc = 0x165bdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
label_165be0:
    // 0x165be0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x165be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165be4: 0xc059890  jal         func_166240
    ctx->pc = 0x165BE4u;
    SET_GPR_U32(ctx, 31, 0x165BECu);
    ctx->pc = 0x165BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BE4u;
    // 0x165be8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166240u, 0x165BE4u, 0x165BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BECu;
label_165bec:
    // 0x165bec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165bf0:
    // 0x165bf0: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x165bf0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x165bf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x165bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x165bf8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x165BF8u;
    {
        const bool branch_taken_0x165bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x165bf8) {
            ctx->pc = 0x165DA0u;
            goto label_165da0;
        }
    }
    ctx->pc = 0x165C00u;
    // 0x165c00: 0x92a300f7  lbu         $v1, 0xF7($s5)
    ctx->pc = 0x165c00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 247)));
    // 0x165c04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x165c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x165c08: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x165c08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x165c0c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x165c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x165c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165C10u;
    {
        const bool branch_taken_0x165c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c10) {
            ctx->pc = 0x165C20u;
            goto label_165c20;
        }
    }
    ctx->pc = 0x165C18u;
    // 0x165c18: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x165C18u;
    {
        const bool branch_taken_0x165c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C18u;
        // 0x165c1c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c18) {
            ctx->pc = 0x165BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165bf0;
        }
    }
    ctx->pc = 0x165C20u;
label_165c20:
    // 0x165c20: 0x42a03  sra         $a1, $a0, 8
    ctx->pc = 0x165c20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
    // 0x165c24: 0x96a400ea  lhu         $a0, 0xEA($s5)
    ctx->pc = 0x165c24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x165c28: 0xc0597dc  jal         func_165F70
    ctx->pc = 0x165C28u;
    SET_GPR_U32(ctx, 31, 0x165C30u);
    ctx->pc = 0x165C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C28u;
    // 0x165c2c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F70u, 0x165C28u, 0x165C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C30u;
label_165c30:
    // 0x165c30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x165c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x165c38: 0xa3b100c8  sb          $s1, 0xC8($sp)
    ctx->pc = 0x165c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 17));
    // 0x165c3c: 0xc059af0  jal         func_166BC0
    ctx->pc = 0x165C3Cu;
    SET_GPR_U32(ctx, 31, 0x165C44u);
    ctx->pc = 0x165C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C3Cu;
    // 0x165c40: 0xa3b400ca  sb          $s4, 0xCA($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 202), (uint8_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166BC0u, 0x165C3Cu, 0x165C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C44u;
label_165c44:
    // 0x165c44: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x165c48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x165c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x165c4c: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x165c4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x165c50: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x165C50u;
    {
        const bool branch_taken_0x165c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x165c50) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C58u;
    // 0x165c58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x165C58u;
    {
        const bool branch_taken_0x165c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c58) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C60u;
    // 0x165c60: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x165c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x165c64: 0x8063bed0  lb          $v1, -0x4130($v1)
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950608)));
    // 0x165c68: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x165C68u;
    {
        const bool branch_taken_0x165c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165c68) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C70u;
    // 0x165c70: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x165c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x165c74: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x165c78: 0x90669720  lbu         $a2, -0x68E0($v1)
    ctx->pc = 0x165c78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x165c7c: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x165c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x165c80: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x165c84: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x165C84u;
    {
        const bool branch_taken_0x165c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x165c84) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165C8Cu;
    // 0x165c8c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x165c90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x165c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x165c94: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x165c98: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x165c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x165c9c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165ca0: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x165ca4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x165ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x165ca8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x165ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x165cac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x165cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x165cb0: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x165cb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x165cb4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x165cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x165cb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x165cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x165cbc: 0x9084014d  lbu         $a0, 0x14D($a0)
    ctx->pc = 0x165cbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 333)));
    // 0x165cc0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x165CC0u;
    {
        const bool branch_taken_0x165cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x165cc0) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165CC8u;
    // 0x165cc8: 0x97a400a4  lhu         $a0, 0xA4($sp)
    ctx->pc = 0x165cc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x165ccc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x165cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x165cd0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165CD0u;
    {
        const bool branch_taken_0x165cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x165cd0) {
            ctx->pc = 0x165CE0u;
            goto label_165ce0;
        }
    }
    ctx->pc = 0x165CD8u;
    // 0x165cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cdc: 0x0  nop
    ctx->pc = 0x165cdcu;
    // NOP
label_165ce0:
    // 0x165ce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165CE0u;
    {
        const bool branch_taken_0x165ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ce0) {
            ctx->pc = 0x165CF0u;
            goto label_165cf0;
        }
    }
    ctx->pc = 0x165CE8u;
    // 0x165ce8: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x165CE8u;
    {
        const bool branch_taken_0x165ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CE8u;
        // 0x165cec: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ce8) {
            ctx->pc = 0x165BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165bf0;
        }
    }
    ctx->pc = 0x165CF0u;
label_165cf0:
    // 0x165cf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165cf4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x165cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x165cf8: 0xc05a02c  jal         func_1680B0
    ctx->pc = 0x165CF8u;
    SET_GPR_U32(ctx, 31, 0x165D00u);
    ctx->pc = 0x165CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165CF8u;
    // 0x165cfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1680B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1680B0u, 0x165CF8u, 0x165D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D00u;
label_165d00:
    // 0x165d00: 0xc05993c  jal         func_1664F0
    ctx->pc = 0x165D00u;
    SET_GPR_U32(ctx, 31, 0x165D08u);
    ctx->pc = 0x165D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D00u;
    // 0x165d04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664F0u, 0x165D00u, 0x165D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D08u;
label_165d08:
    // 0x165d08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x165d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165d10: 0x3203000c  andi        $v1, $s0, 0xC
    ctx->pc = 0x165d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
    // 0x165d14: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165D14u;
    {
        const bool branch_taken_0x165d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165d14) {
            ctx->pc = 0x165D38u;
            goto label_165d38;
        }
    }
    ctx->pc = 0x165D1Cu;
    // 0x165d1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x165d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165d20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165D20u;
    {
        const bool branch_taken_0x165d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165d20) {
            ctx->pc = 0x165D30u;
            goto label_165d30;
        }
    }
    ctx->pc = 0x165D28u;
    // 0x165d28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x165D28u;
    {
        const bool branch_taken_0x165d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d28) {
            ctx->pc = 0x165D50u;
            goto label_165d50;
        }
    }
    ctx->pc = 0x165D30u;
label_165d30:
    // 0x165d30: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x165D30u;
    {
        const bool branch_taken_0x165d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D30u;
        // 0x165d34: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d30) {
            ctx->pc = 0x165BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165bf0;
        }
    }
    ctx->pc = 0x165D38u;
label_165d38:
    // 0x165d38: 0x86a20502  lh          $v0, 0x502($s5)
    ctx->pc = 0x165d38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1282)));
    // 0x165d3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165D3Cu;
    {
        const bool branch_taken_0x165d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165d3c) {
            ctx->pc = 0x165D50u;
            goto label_165d50;
        }
    }
    ctx->pc = 0x165D44u;
    // 0x165d44: 0xc0598b0  jal         func_1662C0
    ctx->pc = 0x165D44u;
    SET_GPR_U32(ctx, 31, 0x165D4Cu);
    ctx->pc = 0x165D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D44u;
    // 0x165d48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1662C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1662C0u, 0x165D44u, 0x165D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D4Cu;
label_165d4c:
    // 0x165d4c: 0x0  nop
    ctx->pc = 0x165d4cu;
    // NOP
label_165d50:
    // 0x165d50: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x165d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x165d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165d58: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165D58u;
    {
        const bool branch_taken_0x165d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165d58) {
            ctx->pc = 0x165D80u;
            goto label_165d80;
        }
    }
    ctx->pc = 0x165D60u;
    // 0x165d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165d64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165D64u;
    {
        const bool branch_taken_0x165d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165d64) {
            ctx->pc = 0x165D78u;
            goto label_165d78;
        }
    }
    ctx->pc = 0x165D6Cu;
    // 0x165d6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165D6Cu;
    {
        const bool branch_taken_0x165d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d6c) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165D74u;
    // 0x165d74: 0x0  nop
    ctx->pc = 0x165d74u;
    // NOP
label_165d78:
    // 0x165d78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165D78u;
    {
        const bool branch_taken_0x165d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D78u;
        // 0x165d7c: 0x2413fffe  addiu       $s3, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d78) {
            ctx->pc = 0x165D88u;
            goto label_165d88;
        }
    }
    ctx->pc = 0x165D80u;
label_165d80:
    // 0x165d80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x165d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165d84: 0x0  nop
    ctx->pc = 0x165d84u;
    // NOP
label_165d88:
    // 0x165d88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165d8c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165D8Cu;
    {
        const bool branch_taken_0x165d8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x165d8c) {
            ctx->pc = 0x165DA0u;
            goto label_165da0;
        }
    }
    ctx->pc = 0x165D94u;
    // 0x165d94: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x165D94u;
    {
        const bool branch_taken_0x165d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D94u;
        // 0x165d98: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d94) {
            ctx->pc = 0x165BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165bf0;
        }
    }
    ctx->pc = 0x165D9Cu;
    // 0x165d9c: 0x0  nop
    ctx->pc = 0x165d9cu;
    // NOP
label_165da0:
    // 0x165da0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x165da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165da4: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165DA4u;
    {
        const bool branch_taken_0x165da4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x165da4) {
            ctx->pc = 0x165DC0u;
            goto label_165dc0;
        }
    }
    ctx->pc = 0x165DACu;
    // 0x165dac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165db0: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x165db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x165db4: 0x5440ff8a  bnel        $v0, $zero, . + 4 + (-0x76 << 2)
    ctx->pc = 0x165DB4u;
    {
        const bool branch_taken_0x165db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165db4) {
            ctx->pc = 0x165DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DB4u;
            // 0x165db8: 0x96a400ea  lhu         $a0, 0xEA($s5) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165be0;
        }
    }
    ctx->pc = 0x165DBCu;
    // 0x165dbc: 0x0  nop
    ctx->pc = 0x165dbcu;
    // NOP
label_165dc0:
    // 0x165dc0: 0x5660003a  bnel        $s3, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x165DC0u;
    {
        const bool branch_taken_0x165dc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x165dc0) {
            ctx->pc = 0x165DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DC0u;
            // 0x165dc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165EACu;
            goto label_165eac;
        }
    }
    ctx->pc = 0x165DC8u;
    // 0x165dc8: 0x92a203c2  lbu         $v0, 0x3C2($s5)
    ctx->pc = 0x165dc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 962)));
    // 0x165dcc: 0x505e0003  beql        $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x165DCCu;
    {
        const bool branch_taken_0x165dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x165dcc) {
            ctx->pc = 0x165DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DCCu;
            // 0x165dd0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DDCu;
            goto label_165ddc;
        }
    }
    ctx->pc = 0x165DD4u;
    // 0x165dd4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x165DD4u;
    {
        const bool branch_taken_0x165dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DD4u;
        // 0x165dd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dd4) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165DDCu;
label_165ddc:
    // 0x165ddc: 0xc05964c  jal         func_165930
    ctx->pc = 0x165DDCu;
    SET_GPR_U32(ctx, 31, 0x165DE4u);
    ctx->pc = 0x165930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165930u, 0x165DDCu, 0x165DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DE4u;
label_165de4:
    // 0x165de4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x165de4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165de8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x165DE8u;
    {
        const bool branch_taken_0x165de8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x165de8) {
            ctx->pc = 0x165DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DE8u;
            // 0x165dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DF8u;
            goto label_165df8;
        }
    }
    ctx->pc = 0x165DF0u;
    // 0x165df0: 0x96b003ba  lhu         $s0, 0x3BA($s5)
    ctx->pc = 0x165df0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 954)));
    // 0x165df4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165df8:
    // 0x165df8: 0xc059fd8  jal         func_167F60
    ctx->pc = 0x165DF8u;
    SET_GPR_U32(ctx, 31, 0x165E00u);
    ctx->pc = 0x167F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167F60u, 0x165DF8u, 0x165E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E00u;
label_165e00:
    // 0x165e00: 0xc0598b4  jal         func_1662D0
    ctx->pc = 0x165E00u;
    SET_GPR_U32(ctx, 31, 0x165E08u);
    ctx->pc = 0x165E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E00u;
    // 0x165e04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1662D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1662D0u, 0x165E00u, 0x165E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E08u;
label_165e08:
    // 0x165e08: 0x92a203c4  lbu         $v0, 0x3C4($s5)
    ctx->pc = 0x165e08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 964)));
    // 0x165e0c: 0xa2a203e8  sb          $v0, 0x3E8($s5)
    ctx->pc = 0x165e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1000), (uint8_t)GPR_U32(ctx, 2));
    // 0x165e10: 0x8ea203b4  lw          $v0, 0x3B4($s5)
    ctx->pc = 0x165e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 948)));
    // 0x165e14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165e18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165E18u;
    {
        const bool branch_taken_0x165e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e18) {
            ctx->pc = 0x165E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E18u;
            // 0x165e1c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165E30u;
            goto label_165e30;
        }
    }
    ctx->pc = 0x165E20u;
    // 0x165e20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x165e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e24: 0xc05c604  jal         func_171810
    ctx->pc = 0x165E24u;
    SET_GPR_U32(ctx, 31, 0x165E2Cu);
    ctx->pc = 0x165E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E24u;
    // 0x165e28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x165E24u, 0x165E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E2Cu;
label_165e2c:
    // 0x165e2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x165e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_165e30:
    // 0x165e30: 0xc05c604  jal         func_171810
    ctx->pc = 0x165E30u;
    SET_GPR_U32(ctx, 31, 0x165E38u);
    ctx->pc = 0x165E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E30u;
    // 0x165e34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x165E30u, 0x165E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E38u;
label_165e38:
    // 0x165e38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e3c: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x165E3Cu;
    SET_GPR_U32(ctx, 31, 0x165E44u);
    ctx->pc = 0x165E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E3Cu;
    // 0x165e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x165E3Cu, 0x165E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E44u;
label_165e44:
    // 0x165e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e48: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x165E48u;
    SET_GPR_U32(ctx, 31, 0x165E50u);
    ctx->pc = 0x165E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E48u;
    // 0x165e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x165E48u, 0x165E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E50u;
label_165e50:
    // 0x165e50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x165e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x165e54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x165e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x165e58: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x165e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x165e5c: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x165E5Cu;
    {
        const bool branch_taken_0x165e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165e5c) {
            ctx->pc = 0x165E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165E5Cu;
            // 0x165e60: 0x3202ffff  andi        $v0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165E64u;
    // 0x165e64: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x165e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x165e68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x165e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x165e6c: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x165e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x165e70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x165e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x165e74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165E74u;
    {
        const bool branch_taken_0x165e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165e74) {
            ctx->pc = 0x165EA0u;
            goto label_165ea0;
        }
    }
    ctx->pc = 0x165E7Cu;
    // 0x165e7c: 0x92a303c8  lbu         $v1, 0x3C8($s5)
    ctx->pc = 0x165e7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 968)));
    // 0x165e80: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x165e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x165e84: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x165E84u;
    {
        const bool branch_taken_0x165e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165e84) {
            ctx->pc = 0x165EA0u;
            goto label_165ea0;
        }
    }
    ctx->pc = 0x165E8Cu;
    // 0x165e8c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x165e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x165e90: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x165e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x165e94: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x165e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x165e98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x165e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x165e9c: 0xac43bedc  sw          $v1, -0x4124($v0)
    ctx->pc = 0x165e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
label_165ea0:
    // 0x165ea0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x165ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x165ea4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x165EA4u;
    {
        const bool branch_taken_0x165ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ea4) {
            ctx->pc = 0x165F34u;
            goto label_165f34;
        }
    }
    ctx->pc = 0x165EACu;
label_165eac:
    // 0x165eac: 0xc059ae8  jal         func_166BA0
    ctx->pc = 0x165EACu;
    SET_GPR_U32(ctx, 31, 0x165EB4u);
    ctx->pc = 0x166BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166BA0u, 0x165EACu, 0x165EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EB4u;
label_165eb4:
    // 0x165eb4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x165EB4u;
    {
        const bool branch_taken_0x165eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165eb4) {
            ctx->pc = 0x165F30u;
            goto label_165f30;
        }
    }
    ctx->pc = 0x165EBCu;
    // 0x165ebc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x165ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_165ec4:
    // 0x165ec4: 0x922203c2  lbu         $v0, 0x3C2($s1)
    ctx->pc = 0x165ec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 962)));
    // 0x165ec8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x165ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165ecc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x165ECCu;
    {
        const bool branch_taken_0x165ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ecc) {
            ctx->pc = 0x165F20u;
            goto label_165f20;
        }
    }
    ctx->pc = 0x165ED4u;
    // 0x165ed4: 0x922203c3  lbu         $v0, 0x3C3($s1)
    ctx->pc = 0x165ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 963)));
    // 0x165ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165ED8u;
    {
        const bool branch_taken_0x165ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165ed8) {
            ctx->pc = 0x165EE8u;
            goto label_165ee8;
        }
    }
    ctx->pc = 0x165EE0u;
    // 0x165ee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x165ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165ee4: 0xa22203c3  sb          $v0, 0x3C3($s1)
    ctx->pc = 0x165ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 963), (uint8_t)GPR_U32(ctx, 2));
label_165ee8:
    // 0x165ee8: 0x922203c3  lbu         $v0, 0x3C3($s1)
    ctx->pc = 0x165ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 963)));
    // 0x165eec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165EECu;
    {
        const bool branch_taken_0x165eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165eec) {
            ctx->pc = 0x165F00u;
            goto label_165f00;
        }
    }
    ctx->pc = 0x165EF4u;
    // 0x165ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ef8: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x165EF8u;
    SET_GPR_U32(ctx, 31, 0x165F00u);
    ctx->pc = 0x165EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EF8u;
    // 0x165efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x165EF8u, 0x165F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F00u;
label_165f00:
    // 0x165f00: 0x962303b8  lhu         $v1, 0x3B8($s1)
    ctx->pc = 0x165f00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 952)));
    // 0x165f04: 0x96a200ec  lhu         $v0, 0xEC($s5)
    ctx->pc = 0x165f04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 236)));
    // 0x165f08: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165F08u;
    {
        const bool branch_taken_0x165f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165f08) {
            ctx->pc = 0x165F20u;
            goto label_165f20;
        }
    }
    ctx->pc = 0x165F10u;
    // 0x165f10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f14: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x165F14u;
    SET_GPR_U32(ctx, 31, 0x165F1Cu);
    ctx->pc = 0x165F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F14u;
    // 0x165f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x165F14u, 0x165F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165F1Cu;
label_165f1c:
    // 0x165f1c: 0x0  nop
    ctx->pc = 0x165f1cu;
    // NOP
label_165f20:
    // 0x165f20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x165f24: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x165f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x165f28: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x165F28u;
    {
        const bool branch_taken_0x165f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F28u;
        // 0x165f2c: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f28) {
            ctx->pc = 0x165EC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165ec4;
        }
    }
    ctx->pc = 0x165F30u;
label_165f30:
    // 0x165f30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x165f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_165f34:
    // 0x165f34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x165f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x165f38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x165f38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x165f3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x165f3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x165f40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x165f40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165f44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165f44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165f48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x165f48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165f4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x165F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F5Cu;
        // 0x165f60: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F64u;
    // 0x165f64: 0x0  nop
    ctx->pc = 0x165f64u;
    // NOP
    // 0x165f68: 0x0  nop
    ctx->pc = 0x165f68u;
    // NOP
    // 0x165f6c: 0x0  nop
    ctx->pc = 0x165f6cu;
    // NOP
}
