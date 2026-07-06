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

// Function: sub_0012BC40
// Address: 0x12bc40 - 0x12bdd0
void sub_0012BC40_0x12bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BC40_0x12bc40");
#endif

    switch (ctx->pc) {
        case 0x12bc94u: goto label_12bc94;
        case 0x12bcc8u: goto label_12bcc8;
        case 0x12bd18u: goto label_12bd18;
        case 0x12bd40u: goto label_12bd40;
        default: break;
    }

    ctx->pc = 0x12bc40u;

    // 0x12bc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bc44: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x12bc44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bc48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bc4c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12bc4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bc50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bc58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12bc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc5c: 0x108f0038  beq         $a0, $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x12BC5Cu;
    {
        const bool branch_taken_0x12bc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC5Cu;
        // 0x12bc60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc5c) {
            ctx->pc = 0x12BD40u;
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BC64u;
    // 0x12bc64: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x12bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x12bc68: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BC68u;
    {
        const bool branch_taken_0x12bc68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc68) {
            ctx->pc = 0x12BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC68u;
            // 0x12bc6c: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC84u;
            goto label_12bc84;
        }
    }
    ctx->pc = 0x12BC70u;
    // 0x12bc70: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12bc74: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12bc78: 0xacae0054  sw          $t6, 0x54($a1)
    ctx->pc = 0x12bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 14));
    // 0x12bc7c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc80: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12bc80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12bc84:
    // 0x12bc84: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BC84u;
    {
        const bool branch_taken_0x12bc84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc84) {
            ctx->pc = 0x12BC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BC84u;
            // 0x12bc88: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BC98u;
            goto label_12bc98;
        }
    }
    ctx->pc = 0x12BC8Cu;
    // 0x12bc8c: 0xc049360  jal         func_124D80
    ctx->pc = 0x12BC8Cu;
    SET_GPR_U32(ctx, 31, 0x12BC94u);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x12BC8Cu, 0x12BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC94u;
label_12bc94:
    // 0x12bc94: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bc94u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12bc98:
    // 0x12bc98: 0x31eeffdf  andi        $t6, $t7, 0xFFDF
    ctx->pc = 0x12bc98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65503);
    // 0x12bc9c: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12bc9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x12bca0: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12BCA0u;
    {
        const bool branch_taken_0x12bca0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCA0u;
        // 0x12bca4: 0xa60e000c  sh          $t6, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bca0) {
            ctx->pc = 0x12BCF0u;
            goto label_12bcf0;
        }
    }
    ctx->pc = 0x12BCA8u;
    // 0x12bca8: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x12bca8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x12bcac: 0x11e00024  beqz        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x12BCACu;
    {
        const bool branch_taken_0x12bcac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCACu;
        // 0x12bcb0: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcac) {
            ctx->pc = 0x12BD40u;
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BCB4u;
    // 0x12bcb4: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12bcb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12bcb8: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12BCB8u;
    {
        const bool branch_taken_0x12bcb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bcb8) {
            ctx->pc = 0x12BCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BCB8u;
            // 0x12bcbc: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BCE8u;
            goto label_12bce8;
        }
    }
    ctx->pc = 0x12BCC0u;
    // 0x12bcc0: 0xc049258  jal         func_124960
    ctx->pc = 0x12BCC0u;
    SET_GPR_U32(ctx, 31, 0x12BCC8u);
    ctx->pc = 0x12BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCC0u;
    // 0x12bcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124960u, 0x12BCC0u, 0x12BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCC8u;
label_12bcc8:
    // 0x12bcc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12BCC8u;
    {
        const bool branch_taken_0x12bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCC8u;
        // 0x12bccc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcc8) {
            ctx->pc = 0x12BD40u;
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BCD0u;
    // 0x12bcd0: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bcd0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12bcd4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12bcd8: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x12bcd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
    // 0x12bcdc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12bce0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12bce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12bce4: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bce4u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12bce8:
    // 0x12bce8: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x12bce8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x12bcec: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12bcecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12bcf0:
    // 0x12bcf0: 0x8e0f0030  lw          $t7, 0x30($s0)
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12bcf4: 0x11e00018  beqz        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12BCF4u;
    {
        const bool branch_taken_0x12bcf4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCF4u;
        // 0x12bcf8: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcf4) {
            ctx->pc = 0x12BD58u;
            goto label_12bd58;
        }
    }
    ctx->pc = 0x12BCFCu;
    // 0x12bcfc: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bd00: 0x8e0e0034  lw          $t6, 0x34($s0)
    ctx->pc = 0x12bd00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x12bd04: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x12bd04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12bd08: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD08u;
    {
        const bool branch_taken_0x12bd08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bd08) {
            ctx->pc = 0x12BD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BD08u;
            // 0x12bd0c: 0x8e0e0000  lw          $t6, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BD24u;
            goto label_12bd24;
        }
    }
    ctx->pc = 0x12BD10u;
    // 0x12bd10: 0xc04aed6  jal         func_12BB58
    ctx->pc = 0x12BD10u;
    SET_GPR_U32(ctx, 31, 0x12BD18u);
    ctx->pc = 0x12BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD10u;
    // 0x12bd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB58u, 0x12BD10u, 0x12BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD18u;
label_12bd18:
    // 0x12bd18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BD18u;
    {
        const bool branch_taken_0x12bd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD18u;
        // 0x12bd1c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd18) {
            ctx->pc = 0x12BD40u;
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BD20u;
    // 0x12bd20: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12bd24:
    // 0x12bd24: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12bd24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd28: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x12bd28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12bd2c: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x12bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x12bd30: 0xa1d1ffff  sb          $s1, -0x1($t6)
    ctx->pc = 0x12bd30u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x12bd34: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x12bd34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bd38: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12bd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12bd3c: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
label_12bd40:
    // 0x12bd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd44: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x12bd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD50u;
        // 0x12bd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD58u;
label_12bd58:
    // 0x12bd58: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12bd58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12bd5c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12BD5Cu;
    {
        const bool branch_taken_0x12bd5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD5Cu;
        // 0x12bd60: 0x8e0b0000  lw          $t3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd5c) {
            ctx->pc = 0x12BD98u;
            goto label_12bd98;
        }
    }
    ctx->pc = 0x12BD64u;
    // 0x12bd64: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x12bd64u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12bd68: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12BD68u;
    {
        const bool branch_taken_0x12bd68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD68u;
        // 0x12bd6c: 0x8e0e0004  lw          $t6, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd68) {
            ctx->pc = 0x12BD9Cu;
            goto label_12bd9c;
        }
    }
    ctx->pc = 0x12BD70u;
    // 0x12bd70: 0x916fffff  lbu         $t7, -0x1($t3)
    ctx->pc = 0x12bd70u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967295)));
    // 0x12bd74: 0x15f10009  bne         $t7, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BD74u;
    {
        const bool branch_taken_0x12bd74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x12bd74) {
            ctx->pc = 0x12BD9Cu;
            goto label_12bd9c;
        }
    }
    ctx->pc = 0x12BD7Cu;
    // 0x12bd7c: 0x256fffff  addiu       $t7, $t3, -0x1
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12bd80: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x12bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x12bd84: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12bd84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd88: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12bd8c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12BD8Cu;
    {
        const bool branch_taken_0x12bd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD8Cu;
        // 0x12bd90: 0xae0e0004  sw          $t6, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd8c) {
            ctx->pc = 0x12BD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BD94u;
    // 0x12bd94: 0x0  nop
    ctx->pc = 0x12bd94u;
    // NOP
label_12bd98:
    // 0x12bd98: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12bd9c:
    // 0x12bd9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12bd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bda0: 0x260d0040  addiu       $t5, $s0, 0x40
    ctx->pc = 0x12bda0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x12bda4: 0xae0b0038  sw          $t3, 0x38($s0)
    ctx->pc = 0x12bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 11));
    // 0x12bda8: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x12bdac: 0x260c0042  addiu       $t4, $s0, 0x42
    ctx->pc = 0x12bdacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x12bdb0: 0xae0e003c  sw          $t6, 0x3C($s0)
    ctx->pc = 0x12bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 14));
    // 0x12bdb4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12bdb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdb8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12bdb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bdbc: 0xae0d0030  sw          $t5, 0x30($s0)
    ctx->pc = 0x12bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 13));
    // 0x12bdc0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x12bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x12bdc4: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x12bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x12bdc8: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x12BDC8u;
    {
        const bool branch_taken_0x12bdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDC8u;
        // 0x12bdcc: 0xa2110042  sb          $s1, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdc8) {
            ctx->pc = 0x12BD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12bd40;
        }
    }
    ctx->pc = 0x12BDD0u;
}
