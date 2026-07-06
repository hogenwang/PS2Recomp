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

// Function: sub_002C9A48
// Address: 0x2c9a48 - 0x2c9d20
void sub_002C9A48_0x2c9a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9A48_0x2c9a48");
#endif

    switch (ctx->pc) {
        case 0x2c9ac8u: goto label_2c9ac8;
        case 0x2c9ae4u: goto label_2c9ae4;
        case 0x2c9af8u: goto label_2c9af8;
        case 0x2c9b00u: goto label_2c9b00;
        case 0x2c9b18u: goto label_2c9b18;
        case 0x2c9b20u: goto label_2c9b20;
        case 0x2c9be4u: goto label_2c9be4;
        case 0x2c9c0cu: goto label_2c9c0c;
        case 0x2c9c10u: goto label_2c9c10;
        case 0x2c9c24u: goto label_2c9c24;
        case 0x2c9c34u: goto label_2c9c34;
        case 0x2c9c38u: goto label_2c9c38;
        case 0x2c9ca4u: goto label_2c9ca4;
        case 0x2c9ca8u: goto label_2c9ca8;
        case 0x2c9cacu: goto label_2c9cac;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9d04u: goto label_2c9d04;
        case 0x2c9d1cu: goto label_2c9d1c;
        default: break;
    }

    ctx->pc = 0x2c9a48u;

    // 0x2c9a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9a4c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x2c9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2c9a50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c9a54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c9a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c9a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c9a64: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2c9a64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c9a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2c9a6c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c9a6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c9a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2c9a74: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2c9a74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c9a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c9a80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c9a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c9a84: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9A84u;
    {
        const bool branch_taken_0x2c9a84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A84u;
        // 0x2c9a88: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a84) {
            ctx->pc = 0x2C9A94u;
            goto label_2c9a94;
        }
    }
    ctx->pc = 0x2C9A8Cu;
    // 0x2c9a8c: 0x12a0004f  beqz        $s5, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C9A8Cu;
    {
        const bool branch_taken_0x2c9a8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A8Cu;
        // 0x2c9a90: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a8c) {
            ctx->pc = 0x2C9BCCu;
            goto label_2c9bcc;
        }
    }
    ctx->pc = 0x2C9A94u;
label_2c9a94:
    // 0x2c9a94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9a98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c9a9c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2c9a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9aa0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C9AA0u;
    {
        const bool branch_taken_0x2c9aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9aa0) {
            ctx->pc = 0x2C9AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9AA0u;
            // 0x2c9aa4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B64u;
            goto label_2c9b64;
        }
    }
    ctx->pc = 0x2C9AA8u;
    // 0x2c9aa8: 0x2473000a  addiu       $s3, $v1, 0xA
    ctx->pc = 0x2c9aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2c9aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9ab0: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x2c9ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2c9ab4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2c9ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c9ab8: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C9AB8u;
    {
        const bool branch_taken_0x2c9ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9AB8u;
        // 0x2c9abc: 0x24020803  addiu       $v0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ab8) {
            ctx->pc = 0x2C9BCCu;
            goto label_2c9bcc;
        }
    }
    ctx->pc = 0x2C9AC0u;
    // 0x2c9ac0: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C9AC0u;
    SET_GPR_U32(ctx, 31, 0x2C9AC8u);
    ctx->pc = 0x2C9AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AC0u;
    // 0x2c9ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2C9AC0u, 0x2C9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AC8u;
label_2c9ac8:
    // 0x2c9ac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9acc: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C9ACCu;
    {
        const bool branch_taken_0x2c9acc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9ACCu;
        // 0x2c9ad0: 0x24020803  addiu       $v0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9acc) {
            ctx->pc = 0x2C9BCCu;
            goto label_2c9bcc;
        }
    }
    ctx->pc = 0x2C9AD4u;
    // 0x2c9ad4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c9ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9adc: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2C9ADCu;
    SET_GPR_U32(ctx, 31, 0x2C9AE4u);
    ctx->pc = 0x2C9AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9ADCu;
    // 0x2c9ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2C9ADCu, 0x2C9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AE4u;
label_2c9ae4:
    // 0x2c9ae4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c9ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c9ae8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c9ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9af0: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2C9AF0u;
    SET_GPR_U32(ctx, 31, 0x2C9AF8u);
    ctx->pc = 0x2C9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AF0u;
    // 0x2c9af4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2C9AF0u, 0x2C9AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9AF8u;
label_2c9af8:
    // 0x2c9af8: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2C9AF8u;
    SET_GPR_U32(ctx, 31, 0x2C9B00u);
    ctx->pc = 0x2C9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9AF8u;
    // 0x2c9afc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2C9AF8u, 0x2C9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B00u;
label_2c9b00:
    // 0x2c9b00: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2c9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2c9b04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c9b08: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2c9b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2c9b0c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C9B0Cu;
    {
        const bool branch_taken_0x2c9b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b0c) {
            ctx->pc = 0x2C9B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B0Cu;
            // 0x2c9b10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B60u;
            goto label_2c9b60;
        }
    }
    ctx->pc = 0x2C9B14u;
    // 0x2c9b14: 0x0  nop
    ctx->pc = 0x2c9b14u;
    // NOP
label_2c9b18:
    // 0x2c9b18: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2C9B18u;
    SET_GPR_U32(ctx, 31, 0x2C9B20u);
    ctx->pc = 0x2C9B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B18u;
    // 0x2c9b1c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2C9B18u, 0x2C9B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B20u;
label_2c9b20:
    // 0x2c9b20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2c9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c9b24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9b2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9b30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9B30u;
    {
        const bool branch_taken_0x2c9b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B30u;
        // 0x2c9b34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b30) {
            ctx->pc = 0x2C9B58u;
            goto label_2c9b58;
        }
    }
    ctx->pc = 0x2C9B38u;
    // 0x2c9b38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c9b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c9b40: 0x53182b  sltu        $v1, $v0, $s3
    ctx->pc = 0x2c9b40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2c9b44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9B44u;
    {
        const bool branch_taken_0x2c9b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B44u;
        // 0x2c9b48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b44) {
            ctx->pc = 0x2C9B18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9b18;
        }
    }
    ctx->pc = 0x2C9B4Cu;
    // 0x2c9b4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9B4Cu;
    {
        const bool branch_taken_0x2c9b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B4Cu;
        // 0x2c9b50: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b4c) {
            ctx->pc = 0x2C9B60u;
            goto label_2c9b60;
        }
    }
    ctx->pc = 0x2C9B54u;
    // 0x2c9b54: 0x0  nop
    ctx->pc = 0x2c9b54u;
    // NOP
label_2c9b58:
    // 0x2c9b58: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9B58u;
    {
        const bool branch_taken_0x2c9b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B58u;
        // 0x2c9b5c: 0x24020803  addiu       $v0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b58) {
            ctx->pc = 0x2C9BCCu;
            goto label_2c9bcc;
        }
    }
    ctx->pc = 0x2C9B60u;
label_2c9b60:
    // 0x2c9b60: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c9b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c9b64:
    // 0x2c9b64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c9b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c9b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9b74: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x2c9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
    // 0x2c9b78: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9b7c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c9b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9b80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9b84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c9b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c9b88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9b8c: 0xac970004  sw          $s7, 0x4($a0)
    ctx->pc = 0x2c9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 23));
    // 0x2c9b90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9b94: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9b9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c9ba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9ba4: 0xac940008  sw          $s4, 0x8($a0)
    ctx->pc = 0x2c9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 20));
    // 0x2c9ba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9bac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c9bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c9bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9bb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c9bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c9bb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9bbc: 0xac95000c  sw          $s5, 0xC($a0)
    ctx->pc = 0x2c9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 21));
    // 0x2c9bc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c9bc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c9bc8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2c9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2c9bcc:
    // 0x2c9bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c9bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c9bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9bdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c9bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9be0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c9be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c9be4:
    // 0x2c9be4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c9be4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9be8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c9be8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c9bec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c9becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BF0u;
        // 0x2c9bf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9BF8u;
    // 0x2c9bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9bfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c9c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c9c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c9c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c9c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c0c:
    // 0x2c9c0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c9c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c10:
    // 0x2c9c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9c14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c9c18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2c9c1c: 0xc0b2748  jal         func_2C9D20
    ctx->pc = 0x2C9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C24u);
    ctx->pc = 0x2C9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C1Cu;
    // 0x2c9c20: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2C9C1Cu, 0x2C9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C24u;
label_2c9c24:
    // 0x2c9c24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9c28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9C28u;
    {
        const bool branch_taken_0x2c9c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C28u;
        // 0x2c9c2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c28) {
            ctx->pc = 0x2C9C68u;
            goto label_2c9c68;
        }
    }
    ctx->pc = 0x2C9C30u;
    // 0x2c9c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c34:
    // 0x2c9c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9c38:
    // 0x2c9c38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c9c3c: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9C3Cu;
    {
        const bool branch_taken_0x2c9c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2c9c3c) {
            ctx->pc = 0x2C9C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C3Cu;
            // 0x2c9c40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9C50u;
            goto label_2c9c50;
        }
    }
    ctx->pc = 0x2C9C44u;
    // 0x2c9c44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9C44u;
    {
        const bool branch_taken_0x2c9c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C44u;
        // 0x2c9c48: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c44) {
            ctx->pc = 0x2C9C6Cu;
            goto label_2c9c6c;
        }
    }
    ctx->pc = 0x2C9C4Cu;
    // 0x2c9c4c: 0x0  nop
    ctx->pc = 0x2c9c4cu;
    // NOP
label_2c9c50:
    // 0x2c9c50: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2c9c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c9c54: 0x0  nop
    ctx->pc = 0x2c9c54u;
    // NOP
    // 0x2c9c58: 0x0  nop
    ctx->pc = 0x2c9c58u;
    // NOP
    // 0x2c9c5c: 0x0  nop
    ctx->pc = 0x2c9c5cu;
    // NOP
    // 0x2c9c60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C9C60u;
    {
        const bool branch_taken_0x2c9c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C60u;
        // 0x2c9c64: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c60) {
            ctx->pc = 0x2C9C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9c38;
        }
    }
    ctx->pc = 0x2C9C68u;
label_2c9c68:
    // 0x2c9c68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2c9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2c9c6c:
    // 0x2c9c6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c9c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9c70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c9c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9c74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c9c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9c78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c9c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c9c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C7Cu;
        // 0x2c9c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9C84u;
    // 0x2c9c84: 0x0  nop
    ctx->pc = 0x2c9c84u;
    // NOP
    // 0x2c9c88: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C9C88u;
    {
        const bool branch_taken_0x2c9c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C88u;
        // 0x2c9c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9c88) {
            ctx->pc = 0x2C9D10u;
            goto label_2c9d10;
        }
    }
    ctx->pc = 0x2C9C90u;
    // 0x2c9c90: 0x240c0020  addiu       $t4, $zero, 0x20
    ctx->pc = 0x2c9c90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c9c94: 0x240b002a  addiu       $t3, $zero, 0x2A
    ctx->pc = 0x2c9c94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2c9c98: 0x240a003d  addiu       $t2, $zero, 0x3D
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2c9c9c: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x2c9c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2c9ca0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2c9ca4:
    // 0x2c9ca4: 0x0  nop
    ctx->pc = 0x2c9ca4u;
    // NOP
label_2c9ca8:
    // 0x2c9ca8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c9cac:
    // 0x2c9cac: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2c9cacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9cb0: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x2c9cb0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c9cb4: 0x24c200bf  addiu       $v0, $a2, 0xBF
    ctx->pc = 0x2c9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 191));
    // 0x2c9cb8: 0x24c3009f  addiu       $v1, $a2, 0x9F
    ctx->pc = 0x2c9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 159));
    // 0x2c9cbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9cc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c9cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c9cc4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2c9cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2c9cc8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2c9ccc:
    if (ctx->pc == 0x2C9CCCu) {
        ctx->pc = 0x2C9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CC8u;
        // 0x2c9ccc: 0x2c63001a  sltiu       $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9CD0u;
        goto label_fallthrough_0x2c9cc8;
    }
    ctx->pc = 0x2C9CC8u;
    {
        const bool branch_taken_0x2c9cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CC8u;
        // 0x2c9ccc: 0x2c63001a  sltiu       $v1, $v1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cc8) {
            ctx->pc = 0x2C9D08u;
            goto label_2c9d08;
        }
    }
label_fallthrough_0x2c9cc8:
    ctx->pc = 0x2C9CD0u;
    // 0x2c9cd0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9CD0u;
    {
        const bool branch_taken_0x2c9cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cd0) {
            ctx->pc = 0x2C9D08u;
            goto label_2c9d08;
        }
    }
    ctx->pc = 0x2C9CD8u;
    // 0x2c9cd8: 0x10cc000b  beq         $a2, $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9CD8u;
    {
        const bool branch_taken_0x2c9cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9CD8u;
        // 0x2c9cdc: 0x24c200d9  addiu       $v0, $a2, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9cd8) {
            ctx->pc = 0x2C9D08u;
            goto label_2c9d08;
        }
    }
    ctx->pc = 0x2C9CE0u;
    // 0x2c9ce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9ce4: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x2c9ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2c9ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9CE8u;
    {
        const bool branch_taken_0x2c9ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ce8) {
            ctx->pc = 0x2C9CF8u;
            goto label_2c9cf8;
        }
    }
    ctx->pc = 0x2C9CF0u;
    // 0x2c9cf0: 0x14cb0005  bne         $a2, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9CF0u;
    {
        const bool branch_taken_0x2c9cf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x2c9cf0) {
            ctx->pc = 0x2C9D08u;
            goto label_2c9d08;
        }
    }
    ctx->pc = 0x2C9CF8u;
label_2c9cf8:
    // 0x2c9cf8: 0x10ca0003  beq         $a2, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9CF8u;
    {
        const bool branch_taken_0x2c9cf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c9cf8) {
            ctx->pc = 0x2C9D08u;
            goto label_2c9d08;
        }
    }
    ctx->pc = 0x2C9D00u;
    // 0x2c9d00: 0x14c90004  bne         $a2, $t1, . + 4 + (0x4 << 2)
label_2c9d04:
    if (ctx->pc == 0x2C9D04u) {
        ctx->pc = 0x2C9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D00u;
        // 0x2c9d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9D08u;
        goto label_2c9d08;
    }
    ctx->pc = 0x2C9D00u;
    {
        const bool branch_taken_0x2c9d00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x2C9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D00u;
        // 0x2c9d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d00) {
            ctx->pc = 0x2C9D14u;
            goto label_2c9d14;
        }
    }
    ctx->pc = 0x2C9D08u;
label_2c9d08:
    // 0x2c9d08: 0x5500ffe7  bnel        $t0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C9D08u;
    {
        const bool branch_taken_0x2c9d08 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d08) {
            ctx->pc = 0x2C9D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9D08u;
            // 0x2c9d0c: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9ca8;
        }
    }
    ctx->pc = 0x2C9D10u;
label_2c9d10:
    // 0x2c9d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9d14:
    // 0x2c9d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9D1Cu;
label_2c9d1c:
    // 0x2c9d1c: 0x0  nop
    ctx->pc = 0x2c9d1cu;
    // NOP
}
