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

// Function: sub_00256AB0
// Address: 0x256ab0 - 0x256c18
void sub_00256AB0_0x256ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256AB0_0x256ab0");
#endif

    switch (ctx->pc) {
        case 0x256ad8u: goto label_256ad8;
        case 0x256af0u: goto label_256af0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bdcu: goto label_256bdc;
        default: break;
    }

    ctx->pc = 0x256ab0u;

    // 0x256ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x256ab4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x256ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x256ab8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x256ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x256abc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x256abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256ac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x256ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x256ac8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x256ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x256acc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x256accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x256ad0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x256AD0u;
    SET_GPR_U32(ctx, 31, 0x256AD8u);
    ctx->pc = 0x256AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AD0u;
    // 0x256ad4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x256AD0u, 0x256AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AD8u;
label_256ad8:
    // 0x256ad8: 0x8e7000cc  lw          $s0, 0xCC($s3)
    ctx->pc = 0x256ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x256adc: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x256ADCu;
    {
        const bool branch_taken_0x256adc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256ADCu;
        // 0x256ae0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256adc) {
            ctx->pc = 0x256BE8u;
            goto label_256be8;
        }
    }
    ctx->pc = 0x256AE4u;
    // 0x256ae4: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x256ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x256ae8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x256ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x256aec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_256af0:
    // 0x256af0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256AF0u;
    {
        const bool branch_taken_0x256af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AF0u;
        // 0x256af4: 0x8e12009c  lw          $s2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256af0) {
            ctx->pc = 0x256B04u;
            goto label_256b04;
        }
    }
    ctx->pc = 0x256AF8u;
    // 0x256af8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x256af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x256afc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x256afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x256b00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_256b04:
    // 0x256b04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x256b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x256b08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256b0c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x256b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x256b10: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256b14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256B14u;
    {
        const bool branch_taken_0x256b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B14u;
        // 0x256b18: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b14) {
            ctx->pc = 0x256B28u;
            goto label_256b28;
        }
    }
    ctx->pc = 0x256B1Cu;
    // 0x256b1c: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x256b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x256b20: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256b24: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x256b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_256b28:
    // 0x256b28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256b2c: 0x26840490  addiu       $a0, $s4, 0x490
    ctx->pc = 0x256b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1168));
    // 0x256b30: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x256b34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x256b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256b3c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x256b3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x256b40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256b44: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x256b44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x256b48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256b4c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256B4Cu;
    {
        const bool branch_taken_0x256b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b4c) {
            ctx->pc = 0x256B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B4Cu;
            // 0x256b50: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B60u;
            goto label_256b60;
        }
    }
    ctx->pc = 0x256B54u;
    // 0x256b54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256b58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x256B58u;
    {
        const bool branch_taken_0x256b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B58u;
        // 0x256b5c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b58) {
            ctx->pc = 0x256B78u;
            goto label_256b78;
        }
    }
    ctx->pc = 0x256B60u;
label_256b60:
    // 0x256b60: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x256b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256b64: 0x24631228  addiu       $v1, $v1, 0x1228
    ctx->pc = 0x256b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4648));
    // 0x256b68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x256b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256b6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x256b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256b74: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x256b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_256b78:
    // 0x256b78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256b7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256b80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256b84: 0xde241218  ld          $a0, 0x1218($s1)
    ctx->pc = 0x256b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 4632)));
    // 0x256b88: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x256b88u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x256b8c: 0xfe241218  sd          $a0, 0x1218($s1)
    ctx->pc = 0x256b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4632), GPR_U64(ctx, 4));
    // 0x256b90: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x256b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x256b94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256B94u;
    {
        const bool branch_taken_0x256b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b94) {
            ctx->pc = 0x256B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B94u;
            // 0x256b98: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256BA8u;
            goto label_256ba8;
        }
    }
    ctx->pc = 0x256B9Cu;
    // 0x256b9c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x256B9Cu;
    SET_GPR_U32(ctx, 31, 0x256BA4u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x256B9Cu, 0x256BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BA4u;
label_256ba4:
    // 0x256ba4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x256ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256ba8:
    // 0x256ba8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x256BA8u;
    {
        const bool branch_taken_0x256ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256ba8) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256BB0u;
    // 0x256bb0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x256bb4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256bb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256BB8u;
    {
        const bool branch_taken_0x256bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BB8u;
        // 0x256bbc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bb8) {
            ctx->pc = 0x256BD0u;
            goto label_256bd0;
        }
    }
    ctx->pc = 0x256BC0u;
    // 0x256bc0: 0xc090c4c  jal         func_243130
    ctx->pc = 0x256BC0u;
    SET_GPR_U32(ctx, 31, 0x256BC8u);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x256BC0u, 0x256BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BC8u;
label_256bc8:
    // 0x256bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x256BC8u;
    {
        const bool branch_taken_0x256bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256bc8) {
            ctx->pc = 0x256BD4u;
            goto label_256bd4;
        }
    }
    ctx->pc = 0x256BD0u;
label_256bd0:
    // 0x256bd0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x256bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_256bd4:
    // 0x256bd4: 0xc098560  jal         func_261580
    ctx->pc = 0x256BD4u;
    SET_GPR_U32(ctx, 31, 0x256BDCu);
    ctx->pc = 0x256BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256BD4u;
    // 0x256bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x256BD4u, 0x256BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256BDCu;
label_256bdc:
    // 0x256bdc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x256bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256be0: 0x5600ffc3  bnel        $s0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x256BE0u;
    {
        const bool branch_taken_0x256be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x256be0) {
            ctx->pc = 0x256BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256BE0u;
            // 0x256be4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256af0;
        }
    }
    ctx->pc = 0x256BE8u;
label_256be8:
    // 0x256be8: 0xae6000cc  sw          $zero, 0xCC($s3)
    ctx->pc = 0x256be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 0));
    // 0x256bec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x256becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256bf0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x256bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256bf4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x256bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256bf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x256bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256bfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x256bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256c00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x256c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256c04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x256c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256c0c: 0x808c698  j           func_231A60
    ctx->pc = 0x256C0Cu;
    ctx->pc = 0x256C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C0Cu;
    // 0x256c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x256C14u;
    // 0x256c14: 0x0  nop
    ctx->pc = 0x256c14u;
    // NOP
}
