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

// Function: sub_002C4A10
// Address: 0x2c4a10 - 0x2c4ca8
void sub_002C4A10_0x2c4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4A10_0x2c4a10");
#endif

    switch (ctx->pc) {
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c78u: goto label_2c4c78;
        default: break;
    }

    ctx->pc = 0x2c4a10u;

label_2c4a10:
    // 0x2c4a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c4a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a1c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4A1Cu;
    {
        const bool branch_taken_0x2c4a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A1Cu;
        // 0x2c4a20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a1c) {
            ctx->pc = 0x2C4A5Cu;
            goto label_2c4a5c;
        }
    }
    ctx->pc = 0x2C4A24u;
    // 0x2c4a24: 0xc0b0a08  jal         func_2C2820
    ctx->pc = 0x2C4A24u;
    SET_GPR_U32(ctx, 31, 0x2C4A2Cu);
    ctx->pc = 0x2C4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A24u;
    // 0x2c4a28: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2820u, 0x2C4A24u, 0x2C4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A2Cu;
label_2c4a2c:
    // 0x2c4a2c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C4A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A34u);
    ctx->pc = 0x2C4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A2Cu;
    // 0x2c4a30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2C4A2Cu, 0x2C4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A34u;
label_2c4a34:
    // 0x2c4a34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c4a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c4a38: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4A38u;
    {
        const bool branch_taken_0x2c4a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a38) {
            ctx->pc = 0x2C4A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4A38u;
            // 0x2c4a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A4Cu;
            goto label_2c4a4c;
        }
    }
    ctx->pc = 0x2C4A40u;
label_2c4a40:
    // 0x2c4a40: 0xc0a734a  jal         func_29CD28
    ctx->pc = 0x2C4A40u;
    SET_GPR_U32(ctx, 31, 0x2C4A48u);
    ctx->pc = 0x29CD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD28u, 0x2C4A40u, 0x2C4A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A48u;
label_2c4a48:
    // 0x2c4a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a4c:
    // 0x2c4a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4a54: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C4A54u;
    ctx->pc = 0x2C4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A54u;
    // 0x2c4a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2C4A5Cu;
label_2c4a5c:
    // 0x2c4a5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c4a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A64u;
        // 0x2c4a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4A6Cu;
label_2c4a6c:
    // 0x2c4a6c: 0x0  nop
    ctx->pc = 0x2c4a6cu;
    // NOP
    // 0x2c4a70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c4a74: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2c4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c4a78: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2c4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c4a7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c4a7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a80: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c4a84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c4a84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c4a8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c4a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4a90: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2c4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2c4a94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c4a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c4a98: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c4a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c4a9c: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4A9Cu;
    {
        const bool branch_taken_0x2c4a9c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A9Cu;
        // 0x2c4aa0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a9c) {
            ctx->pc = 0x2C4AACu;
            goto label_2c4aac;
        }
    }
    ctx->pc = 0x2C4AA4u;
    // 0x2c4aa4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2C4AA4u;
    {
        const bool branch_taken_0x2c4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AA4u;
        // 0x2c4aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4aa4) {
            ctx->pc = 0x2C4C7Cu;
            goto label_2c4c7c;
        }
    }
    ctx->pc = 0x2C4AACu;
label_2c4aac:
    // 0x2c4aac: 0xc0b1264  jal         func_2C4990
    ctx->pc = 0x2C4AACu;
    SET_GPR_U32(ctx, 31, 0x2C4AB4u);
    ctx->pc = 0x2C4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4990u, 0x2C4AACu, 0x2C4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AB4u;
label_2c4ab4:
    // 0x2c4ab4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c4ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ab8: 0x12800070  beqz        $s4, . + 4 + (0x70 << 2)
    ctx->pc = 0x2C4AB8u;
    {
        const bool branch_taken_0x2c4ab8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AB8u;
        // 0x2c4abc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ab8) {
            ctx->pc = 0x2C4C7Cu;
            goto label_2c4c7c;
        }
    }
    ctx->pc = 0x2C4AC0u;
    // 0x2c4ac0: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c4ac4: 0xc0a7304  jal         func_29CC10
    ctx->pc = 0x2C4AC4u;
    SET_GPR_U32(ctx, 31, 0x2C4ACCu);
    ctx->pc = 0x2C4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4AC4u;
    // 0x2c4ac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC10u, 0x2C4AC4u, 0x2C4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4ACCu;
label_2c4acc:
    // 0x2c4acc: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C4ACCu;
    SET_GPR_U32(ctx, 31, 0x2C4AD4u);
    ctx->pc = 0x2C4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4ACCu;
    // 0x2c4ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2C4ACCu, 0x2C4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AD4u;
label_2c4ad4:
    // 0x2c4ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ad8: 0x12000063  beqz        $s0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2C4AD8u;
    {
        const bool branch_taken_0x2c4ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ad8) {
            ctx->pc = 0x2C4C68u;
            goto label_2c4c68;
        }
    }
    ctx->pc = 0x2C4AE0u;
    // 0x2c4ae0: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x2C4AE0u;
    SET_GPR_U32(ctx, 31, 0x2C4AE8u);
    ctx->pc = 0x2C4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4AE0u;
    // 0x2c4ae4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280ED8u, 0x2C4AE0u, 0x2C4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AE8u;
label_2c4ae8:
    // 0x2c4ae8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2c4aec: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c4af0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4AF0u;
    {
        const bool branch_taken_0x2c4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AF0u;
        // 0x2c4af4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4af0) {
            ctx->pc = 0x2C4B04u;
            goto label_2c4b04;
        }
    }
    ctx->pc = 0x2C4AF8u;
    // 0x2c4af8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c4afc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C4AFCu;
    {
        const bool branch_taken_0x2c4afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AFCu;
        // 0x2c4b00: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4afc) {
            ctx->pc = 0x2C4B3Cu;
            goto label_2c4b3c;
        }
    }
    ctx->pc = 0x2C4B04u;
label_2c4b04:
    // 0x2c4b04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4b08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4B08u;
    {
        const bool branch_taken_0x2c4b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B08u;
        // 0x2c4b0c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b08) {
            ctx->pc = 0x2C4B1Cu;
            goto label_2c4b1c;
        }
    }
    ctx->pc = 0x2C4B10u;
    // 0x2c4b10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4b14: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2C4B14u;
    {
        const bool branch_taken_0x2c4b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4b14) {
            ctx->pc = 0x2C4B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4B14u;
            // 0x2c4b18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4BDCu;
            goto label_2c4bdc;
        }
    }
    ctx->pc = 0x2C4B1Cu;
label_2c4b1c:
    // 0x2c4b1c: 0xc0a0c14  jal         func_283050
    ctx->pc = 0x2C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B24u);
    ctx->pc = 0x283050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283050u, 0x2C4B1Cu, 0x2C4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B24u;
label_2c4b24:
    // 0x2c4b24: 0xc0a0bfe  jal         func_282FF8
    ctx->pc = 0x2C4B24u;
    SET_GPR_U32(ctx, 31, 0x2C4B2Cu);
    ctx->pc = 0x282FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF8u, 0x2C4B24u, 0x2C4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B2Cu;
label_2c4b2c:
    // 0x2c4b2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c4b30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c4b34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C4B34u;
    {
        const bool branch_taken_0x2c4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B34u;
        // 0x2c4b38: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b34) {
            ctx->pc = 0x2C4BD8u;
            goto label_2c4bd8;
        }
    }
    ctx->pc = 0x2C4B3Cu;
label_2c4b3c:
    // 0x2c4b3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4B3Cu;
    {
        const bool branch_taken_0x2c4b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B3Cu;
        // 0x2c4b40: 0x24060099  addiu       $a2, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b3c) {
            ctx->pc = 0x2C4B60u;
            goto label_2c4b60;
        }
    }
    ctx->pc = 0x2C4B44u;
    // 0x2c4b44: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c4b48: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x2c4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2c4b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b50: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C4B50u;
    SET_GPR_U32(ctx, 31, 0x2C4B58u);
    ctx->pc = 0x2C4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B50u;
    // 0x2c4b54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C4B50u, 0x2C4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B58u;
label_2c4b58:
    // 0x2c4b58: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2C4B58u;
    {
        const bool branch_taken_0x2c4b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b58) {
            ctx->pc = 0x2C4C68u;
            goto label_2c4c68;
        }
    }
    ctx->pc = 0x2C4B60u;
label_2c4b60:
    // 0x2c4b60: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c4b64: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c4b68: 0xc0a0c14  jal         func_283050
    ctx->pc = 0x2C4B68u;
    SET_GPR_U32(ctx, 31, 0x2C4B70u);
    ctx->pc = 0x2C4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B68u;
    // 0x2c4b6c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283050u, 0x2C4B68u, 0x2C4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B70u;
label_2c4b70:
    // 0x2c4b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b74: 0xc0a6066  jal         func_298198
    ctx->pc = 0x2C4B74u;
    SET_GPR_U32(ctx, 31, 0x2C4B7Cu);
    ctx->pc = 0x2C4B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B74u;
    // 0x2c4b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298198u, 0x2C4B74u, 0x2C4B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B7Cu;
label_2c4b7c:
    // 0x2c4b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b80: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C4B80u;
    SET_GPR_U32(ctx, 31, 0x2C4B88u);
    ctx->pc = 0x2C4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B80u;
    // 0x2c4b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C4B80u, 0x2C4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B88u;
label_2c4b88:
    // 0x2c4b88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c4b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2c4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2c4b94: 0xc0a6066  jal         func_298198
    ctx->pc = 0x2C4B94u;
    SET_GPR_U32(ctx, 31, 0x2C4B9Cu);
    ctx->pc = 0x2C4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B94u;
    // 0x2c4b98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298198u, 0x2C4B94u, 0x2C4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B9Cu;
label_2c4b9c:
    // 0x2c4b9c: 0xc0a0bfe  jal         func_282FF8
    ctx->pc = 0x2C4B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4BA4u);
    ctx->pc = 0x282FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282FF8u, 0x2C4B9Cu, 0x2C4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BA4u;
label_2c4ba4:
    // 0x2c4ba4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c4ba8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c4bac: 0xc0a06ea  jal         func_281BA8
    ctx->pc = 0x2C4BACu;
    SET_GPR_U32(ctx, 31, 0x2C4BB4u);
    ctx->pc = 0x2C4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BACu;
    // 0x2c4bb0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BA8u, 0x2C4BACu, 0x2C4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BB4u;
label_2c4bb4:
    // 0x2c4bb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4bb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c4bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bbc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c4bc0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c4bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c4bc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c4bc8: 0xc0a06b2  jal         func_281AC8
    ctx->pc = 0x2C4BC8u;
    SET_GPR_U32(ctx, 31, 0x2C4BD0u);
    ctx->pc = 0x2C4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BC8u;
    // 0x2c4bcc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281AC8u, 0x2C4BC8u, 0x2C4BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BD0u;
label_2c4bd0:
    // 0x2c4bd0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C4BD0u;
    SET_GPR_U32(ctx, 31, 0x2C4BD8u);
    ctx->pc = 0x2C4BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BD0u;
    // 0x2c4bd4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2C4BD0u, 0x2C4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BD8u;
label_2c4bd8:
    // 0x2c4bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bdc:
    // 0x2c4bdc: 0xc0a60d6  jal         func_298358
    ctx->pc = 0x2C4BDCu;
    SET_GPR_U32(ctx, 31, 0x2C4BE4u);
    ctx->pc = 0x2C4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BDCu;
    // 0x2c4be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298358u, 0x2C4BDCu, 0x2C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4be8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C4BE8u;
    SET_GPR_U32(ctx, 31, 0x2C4BF0u);
    ctx->pc = 0x2C4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BE8u;
    // 0x2c4bec: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C4BE8u, 0x2C4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BF0u;
label_2c4bf0:
    // 0x2c4bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bf4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C4BF4u;
    {
        const bool branch_taken_0x2c4bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BF4u;
        // 0x2c4bf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bf4) {
            ctx->pc = 0x2C4C68u;
            goto label_2c4c68;
        }
    }
    ctx->pc = 0x2C4BFCu;
    // 0x2c4bfc: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2c4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2c4c00: 0xc0a60d6  jal         func_298358
    ctx->pc = 0x2C4C00u;
    SET_GPR_U32(ctx, 31, 0x2C4C08u);
    ctx->pc = 0x2C4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C00u;
    // 0x2c4c04: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x298358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298358u, 0x2C4C00u, 0x2C4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C08u;
label_2c4c08:
    // 0x2c4c08: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c4c0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c4c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c10: 0xc0a06b2  jal         func_281AC8
    ctx->pc = 0x2C4C10u;
    SET_GPR_U32(ctx, 31, 0x2C4C18u);
    ctx->pc = 0x2C4C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C10u;
    // 0x2c4c14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281AC8u, 0x2C4C10u, 0x2C4C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C18u;
label_2c4c18:
    // 0x2c4c18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4C18u;
    {
        const bool branch_taken_0x2c4c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c18) {
            ctx->pc = 0x2C4C68u;
            goto label_2c4c68;
        }
    }
    ctx->pc = 0x2C4C20u;
    // 0x2c4c20: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C4C20u;
    SET_GPR_U32(ctx, 31, 0x2C4C28u);
    ctx->pc = 0x2C4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C20u;
    // 0x2c4c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2C4C20u, 0x2C4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C28u;
label_2c4c28:
    // 0x2c4c28: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2c4c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2c4c2c: 0x26640008  addiu       $a0, $s3, 0x8
    ctx->pc = 0x2c4c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2c4c30: 0x24e7edb0  addiu       $a3, $a3, -0x1250
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962608));
    // 0x2c4c34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c38: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2c4c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c4c3c: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2C4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C44u);
    ctx->pc = 0x2C4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C3Cu;
    // 0x2c4c40: 0x24080096  addiu       $t0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2C4C3Cu, 0x2C4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C44u;
label_2c4c44:
    // 0x2c4c44: 0xae930008  sw          $s3, 0x8($s4)
    ctx->pc = 0x2c4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
    // 0x2c4c48: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2c4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c4c4c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4C4Cu;
    {
        const bool branch_taken_0x2c4c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c4c) {
            ctx->pc = 0x2C4C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C4Cu;
            // 0x2c4c50: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C60u;
            goto label_2c4c60;
        }
    }
    ctx->pc = 0x2C4C54u;
    // 0x2c4c54: 0xc0b1284  jal         func_2C4A10
    ctx->pc = 0x2C4C54u;
    SET_GPR_U32(ctx, 31, 0x2C4C5Cu);
    ctx->pc = 0x2C4A10u;
    goto label_2c4a10;
    ctx->pc = 0x2C4C5Cu;
label_2c4c5c:
    // 0x2c4c5c: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x2c4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_2c4c60:
    // 0x2c4c60: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c4c60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4c64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2c4c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c68:
    // 0x2c4c68: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4C68u;
    {
        const bool branch_taken_0x2c4c68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C68u;
        // 0x2c4c6c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c68) {
            ctx->pc = 0x2C4C7Cu;
            goto label_2c4c7c;
        }
    }
    ctx->pc = 0x2C4C70u;
    // 0x2c4c70: 0xc0b1284  jal         func_2C4A10
    ctx->pc = 0x2C4C70u;
    SET_GPR_U32(ctx, 31, 0x2C4C78u);
    ctx->pc = 0x2C4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C70u;
    // 0x2c4c74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4A10u;
    goto label_2c4a10;
    ctx->pc = 0x2C4C78u;
label_2c4c78:
    // 0x2c4c78: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2c4c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c7c:
    // 0x2c4c7c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c4c80: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2c4c80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c4c84: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2c4c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4c88: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c4c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4c8c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c4c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4c90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c4c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4c94: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c4c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4c98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c4c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C9Cu;
        // 0x2c4ca0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4CA4u;
    // 0x2c4ca4: 0x0  nop
    ctx->pc = 0x2c4ca4u;
    // NOP
    if (ctx->pc == 0x2c4ca4u) { ctx->pc = 0x2c4ca8u; }
}
