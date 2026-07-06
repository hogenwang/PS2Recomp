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

// Function: sub_002D0B10
// Address: 0x2d0b10 - 0x2d0d18
void sub_002D0B10_0x2d0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0B10_0x2d0b10");
#endif

    switch (ctx->pc) {
        case 0x2d0b68u: goto label_2d0b68;
        case 0x2d0b70u: goto label_2d0b70;
        case 0x2d0b88u: goto label_2d0b88;
        case 0x2d0b94u: goto label_2d0b94;
        case 0x2d0bacu: goto label_2d0bac;
        case 0x2d0bd0u: goto label_2d0bd0;
        case 0x2d0be4u: goto label_2d0be4;
        case 0x2d0c00u: goto label_2d0c00;
        case 0x2d0c18u: goto label_2d0c18;
        case 0x2d0c30u: goto label_2d0c30;
        case 0x2d0c70u: goto label_2d0c70;
        case 0x2d0c8cu: goto label_2d0c8c;
        case 0x2d0cc0u: goto label_2d0cc0;
        case 0x2d0cccu: goto label_2d0ccc;
        case 0x2d0cdcu: goto label_2d0cdc;
        case 0x2d0ce4u: goto label_2d0ce4;
        default: break;
    }

    ctx->pc = 0x2d0b10u;

    // 0x2d0b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d0b14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d0b18: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d0b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b1c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d0b20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d0b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0b28: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d0b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2d0b2c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d0b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d0b30: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d0b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b34: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2d0b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2d0b38: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2d0b38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b3c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2d0b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2d0b40: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2d0b40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b44: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d0b48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d0b48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0b4c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d0b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2d0b50: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d0b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d0b54: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2d0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2d0b58: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d0b5c: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2d0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2d0b60: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D0B60u;
    SET_GPR_U32(ctx, 31, 0x2D0B68u);
    ctx->pc = 0x2D0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B60u;
    // 0x2d0b64: 0xafab0028  sw          $t3, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D0B60u, 0x2D0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B68u;
label_2d0b68:
    // 0x2d0b68: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2D0B68u;
    {
        const bool branch_taken_0x2d0b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B68u;
        // 0x2d0b6c: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b68) {
            ctx->pc = 0x2D0C78u;
            goto label_2d0c78;
        }
    }
    ctx->pc = 0x2D0B70u;
label_2d0b70:
    // 0x2d0b70: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0B70u;
    {
        const bool branch_taken_0x2d0b70 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2D0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B70u;
        // 0x2d0b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b70) {
            ctx->pc = 0x2D0BA0u;
            goto label_2d0ba0;
        }
    }
    ctx->pc = 0x2D0B78u;
    // 0x2d0b78: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2d0b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b7c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2d0b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0b84: 0x0  nop
    ctx->pc = 0x2d0b84u;
    // NOP
label_2d0b88:
    // 0x2d0b88: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2d0b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d0b8c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D0B94u);
    ctx->pc = 0x2D0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B8Cu;
    // 0x2d0b90: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D0B8Cu, 0x2D0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B94u;
label_2d0b94:
    // 0x2d0b94: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2D0B94u;
    {
        const bool branch_taken_0x2d0b94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B94u;
        // 0x2d0b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0b94) {
            ctx->pc = 0x2D0B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0b88;
        }
    }
    ctx->pc = 0x2D0B9Cu;
    // 0x2d0b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d0ba0:
    // 0x2d0ba0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d0ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ba4: 0xc0b47b2  jal         func_2D1EC8
    ctx->pc = 0x2D0BA4u;
    SET_GPR_U32(ctx, 31, 0x2D0BACu);
    ctx->pc = 0x2D0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BA4u;
    // 0x2d0ba8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1EC8u, 0x2D0BA4u, 0x2D0BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BACu;
label_2d0bac:
    // 0x2d0bac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bb0: 0x1640003b  bnez        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D0BB0u;
    {
        const bool branch_taken_0x2d0bb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bb0) {
            ctx->pc = 0x2D0CA0u;
            goto label_2d0ca0;
        }
    }
    ctx->pc = 0x2D0BB8u;
    // 0x2d0bb8: 0x13d50022  beq         $fp, $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D0BB8u;
    {
        const bool branch_taken_0x2d0bb8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 21));
        ctx->pc = 0x2D0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BB8u;
        // 0x2d0bbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0bb8) {
            ctx->pc = 0x2D0C44u;
            goto label_2d0c44;
        }
    }
    ctx->pc = 0x2D0BC0u;
    // 0x2d0bc0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d0bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bc4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2d0bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bc8: 0xc0b4864  jal         func_2D2190
    ctx->pc = 0x2D0BC8u;
    SET_GPR_U32(ctx, 31, 0x2D0BD0u);
    ctx->pc = 0x2D0BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BC8u;
    // 0x2d0bcc: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2190u, 0x2D0BC8u, 0x2D0BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BD0u;
label_2d0bd0:
    // 0x2d0bd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bd4: 0x16400032  bnez        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D0BD4u;
    {
        const bool branch_taken_0x2d0bd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0bd4) {
            ctx->pc = 0x2D0CA0u;
            goto label_2d0ca0;
        }
    }
    ctx->pc = 0x2D0BDCu;
    // 0x2d0bdc: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D0BDCu;
    SET_GPR_U32(ctx, 31, 0x2D0BE4u);
    ctx->pc = 0x2D0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0BDCu;
    // 0x2d0be0: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85E0u, 0x2D0BDCu, 0x2D0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BE4u;
label_2d0be4:
    // 0x2d0be4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0be8: 0x1640002d  bnez        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D0BE8u;
    {
        const bool branch_taken_0x2d0be8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0BE8u;
        // 0x2d0bec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0be8) {
            ctx->pc = 0x2D0CA0u;
            goto label_2d0ca0;
        }
    }
    ctx->pc = 0x2D0BF0u;
    // 0x2d0bf0: 0x2691000c  addiu       $s1, $s4, 0xC
    ctx->pc = 0x2d0bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2d0bf4: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2d0bf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0bf8: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2d0bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d0bfc: 0x0  nop
    ctx->pc = 0x2d0bfcu;
    // NOP
label_2d0c00:
    // 0x2d0c00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0C00u;
    {
        const bool branch_taken_0x2d0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C00u;
        // 0x2d0c04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c00) {
            ctx->pc = 0x2D0C3Cu;
            goto label_2d0c3c;
        }
    }
    ctx->pc = 0x2D0C08u;
    // 0x2d0c08: 0x3d5102a  slt         $v0, $fp, $s5
    ctx->pc = 0x2d0c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2d0c0c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0C0Cu;
    {
        const bool branch_taken_0x2d0c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C0Cu;
        // 0x2d0c10: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c0c) {
            ctx->pc = 0x2D0C3Cu;
            goto label_2d0c3c;
        }
    }
    ctx->pc = 0x2D0C14u;
    // 0x2d0c14: 0x2624fff4  addiu       $a0, $s1, -0xC
    ctx->pc = 0x2d0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
label_2d0c18:
    // 0x2d0c18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d0c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c1c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d0c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0c20: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d0c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c24: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2d0c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c28: 0xc0b48e4  jal         func_2D2390
    ctx->pc = 0x2D0C28u;
    SET_GPR_U32(ctx, 31, 0x2D0C30u);
    ctx->pc = 0x2D0C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C28u;
    // 0x2d0c2c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2390u, 0x2D0C28u, 0x2D0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C30u;
label_2d0c30:
    // 0x2d0c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c34: 0x1240fff2  beqz        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D0C34u;
    {
        const bool branch_taken_0x2d0c34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C34u;
        // 0x2d0c38: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c34) {
            ctx->pc = 0x2D0C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0c00;
        }
    }
    ctx->pc = 0x2D0C3Cu;
label_2d0c3c:
    // 0x2d0c3c: 0x16400018  bnez        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D0C3Cu;
    {
        const bool branch_taken_0x2d0c3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c3c) {
            ctx->pc = 0x2D0CA0u;
            goto label_2d0ca0;
        }
    }
    ctx->pc = 0x2D0C44u;
label_2d0c44:
    // 0x2d0c44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2d0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d0c48: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2d0c48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c4c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2d0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0c50: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2d0c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c54: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x2d0c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d0c58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d0c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c5c: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x2d0c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0c60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d0c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c64: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2d0c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0c68: 0xc0b4346  jal         func_2D0D18
    ctx->pc = 0x2D0C68u;
    SET_GPR_U32(ctx, 31, 0x2D0C70u);
    ctx->pc = 0x2D0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C68u;
    // 0x2d0c6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D18u, 0x2D0C68u, 0x2D0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C70u;
label_2d0c70:
    // 0x2d0c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D0C70u;
    {
        const bool branch_taken_0x2d0c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C70u;
        // 0x2d0c74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c70) {
            ctx->pc = 0x2D0CA0u;
            goto label_2d0ca0;
        }
    }
    ctx->pc = 0x2D0C78u;
label_2d0c78:
    // 0x2d0c78: 0x959804  sllv        $s3, $s5, $a0
    ctx->pc = 0x2d0c78u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x2d0c7c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x2d0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2d0c80: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2d0c84: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D0C84u;
    SET_GPR_U32(ctx, 31, 0x2D0C8Cu);
    ctx->pc = 0x2D0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C84u;
    // 0x2d0c88: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D0C84u, 0x2D0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C8Cu;
label_2d0c8c:
    // 0x2d0c8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d0c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c90: 0x1680ffb7  bnez        $s4, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2D0C90u;
    {
        const bool branch_taken_0x2d0c90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c90) {
            ctx->pc = 0x2D0B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0b70;
        }
    }
    ctx->pc = 0x2D0C98u;
    // 0x2d0c98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d0c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c9c: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x2d0c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d0ca0:
    // 0x2d0ca0: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0CA0u;
    {
        const bool branch_taken_0x2d0ca0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ca0) {
            ctx->pc = 0x2D0CDCu;
            goto label_2d0cdc;
        }
    }
    ctx->pc = 0x2D0CA8u;
    // 0x2d0ca8: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0CA8u;
    {
        const bool branch_taken_0x2d0ca8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2d0ca8) {
            ctx->pc = 0x2D0CD4u;
            goto label_2d0cd4;
        }
    }
    ctx->pc = 0x2D0CB0u;
    // 0x2d0cb0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2d0cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0cb4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2d0cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0cbc: 0x0  nop
    ctx->pc = 0x2d0cbcu;
    // NOP
label_2d0cc0:
    // 0x2d0cc0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2d0cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d0cc4: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D0CC4u;
    SET_GPR_U32(ctx, 31, 0x2D0CCCu);
    ctx->pc = 0x2D0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CC4u;
    // 0x2d0cc8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D0CC4u, 0x2D0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CCCu;
label_2d0ccc:
    // 0x2d0ccc: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2D0CCCu;
    {
        const bool branch_taken_0x2d0ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ccc) {
            ctx->pc = 0x2D0CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0CCCu;
            // 0x2d0cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0cc0;
        }
    }
    ctx->pc = 0x2D0CD4u;
label_2d0cd4:
    // 0x2d0cd4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D0CD4u;
    SET_GPR_U32(ctx, 31, 0x2D0CDCu);
    ctx->pc = 0x2D0CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CD4u;
    // 0x2d0cd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D0CD4u, 0x2D0CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CDCu;
label_2d0cdc:
    // 0x2d0cdc: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D0CDCu;
    SET_GPR_U32(ctx, 31, 0x2D0CE4u);
    ctx->pc = 0x2D0CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CDCu;
    // 0x2d0ce0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D0CDCu, 0x2D0CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CE4u;
label_2d0ce4:
    // 0x2d0ce4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d0ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ce8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d0ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0cec: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d0cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d0cf0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d0cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0cf4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d0cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0cf8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d0cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0cfc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d0cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0d00: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d0d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0d04: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2d0d04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0d08: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2d0d08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d0d0c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2d0d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d0d10: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D10u;
        // 0x2d0d14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D18u;
}
