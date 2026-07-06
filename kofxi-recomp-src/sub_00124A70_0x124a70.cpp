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

// Function: sub_00124A70
// Address: 0x124a70 - 0x124b98
void sub_00124A70_0x124a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124A70_0x124a70");
#endif

    switch (ctx->pc) {
        case 0x124ab0u: goto label_124ab0;
        case 0x124ac0u: goto label_124ac0;
        case 0x124ad4u: goto label_124ad4;
        case 0x124ad8u: goto label_124ad8;
        case 0x124b18u: goto label_124b18;
        case 0x124b4cu: goto label_124b4c;
        case 0x124b88u: goto label_124b88;
        default: break;
    }

    ctx->pc = 0x124a70u;

    // 0x124a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124a74: 0x28af0002  slti        $t7, $a1, 0x2
    ctx->pc = 0x124a74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x124a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x124a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124a88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124a94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124a98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124a9c: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x124A9Cu;
    {
        const bool branch_taken_0x124a9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A9Cu;
        // 0x124aa0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a9c) {
            ctx->pc = 0x124AD8u;
            goto label_124ad8;
        }
    }
    ctx->pc = 0x124AA4u;
    // 0x124aa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x124aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124aa8: 0x24b2ffff  addiu       $s2, $a1, -0x1
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x124aac: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x124aacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_124ab0:
    // 0x124ab0: 0x56000013  bnel        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x124AB0u;
    {
        const bool branch_taken_0x124ab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x124ab0) {
            ctx->pc = 0x124AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124AB0u;
            // 0x124ab4: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124B00u;
            goto label_124b00;
        }
    }
    ctx->pc = 0x124AB8u;
    // 0x124ab8: 0xc04a566  jal         func_129598
    ctx->pc = 0x124AB8u;
    SET_GPR_U32(ctx, 31, 0x124AC0u);
    ctx->pc = 0x124ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AB8u;
    // 0x124abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129598u, 0x124AB8u, 0x124AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AC0u;
label_124ac0:
    // 0x124ac0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x124AC0u;
    {
        const bool branch_taken_0x124ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ac0) {
            ctx->pc = 0x124AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124AC0u;
            // 0x124ac4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124AFCu;
            goto label_124afc;
        }
    }
    ctx->pc = 0x124AC8u;
    // 0x124ac8: 0x12950003  beq         $s4, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x124AC8u;
    {
        const bool branch_taken_0x124ac8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x124ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AC8u;
        // 0x124acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ac8) {
            ctx->pc = 0x124AD8u;
            goto label_124ad8;
        }
    }
    ctx->pc = 0x124AD0u;
    // 0x124ad0: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x124ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_124ad4:
    // 0x124ad4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x124ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124ad8:
    // 0x124ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124adc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124ae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ae4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ae8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124ae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124aec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124af0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124af4: 0x3e00008  jr          $ra
    ctx->pc = 0x124AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124AF4u;
        // 0x124af8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124AFCu;
label_124afc:
    // 0x124afc: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x124afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124b00:
    // 0x124b00: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x124b00u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x124b04: 0x24f800b  movn        $s0, $s2, $t7
    ctx->pc = 0x124b04u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x124b08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124b0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b10: 0xc049bea  jal         func_126FA8
    ctx->pc = 0x124B10u;
    SET_GPR_U32(ctx, 31, 0x124B18u);
    ctx->pc = 0x124B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B10u;
    // 0x124b14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FA8u, 0x124B10u, 0x124B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B18u;
label_124b18:
    // 0x124b18: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x124b18u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x124b1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x124b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x124b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x124B24u;
    {
        const bool branch_taken_0x124b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B24u;
        // 0x124b28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b24) {
            ctx->pc = 0x124B60u;
            goto label_124b60;
        }
    }
    ctx->pc = 0x124B2Cu;
    // 0x124b2c: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x124b30: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x124b34: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b38: 0x1d07023  subu        $t6, $t6, $s0
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x124b3c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x124b3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x124b40: 0xae2e0004  sw          $t6, 0x4($s1)
    ctx->pc = 0x124b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
    // 0x124b44: 0xc049c48  jal         func_127120
    ctx->pc = 0x124B44u;
    SET_GPR_U32(ctx, 31, 0x124B4Cu);
    ctx->pc = 0x124B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B44u;
    // 0x124b48: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x124B44u, 0x124B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B4Cu;
label_124b4c:
    // 0x124b4c: 0x5640ffd8  bnel        $s2, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x124B4Cu;
    {
        const bool branch_taken_0x124b4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x124b4c) {
            ctx->pc = 0x124B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124B4Cu;
            // 0x124b50: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ab0;
        }
    }
    ctx->pc = 0x124B54u;
    // 0x124b54: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x124B54u;
    {
        const bool branch_taken_0x124b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B54u;
        // 0x124b58: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b54) {
            ctx->pc = 0x124AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ad4;
        }
    }
    ctx->pc = 0x124B5Cu;
    // 0x124b5c: 0x0  nop
    ctx->pc = 0x124b5cu;
    // NOP
label_124b60:
    // 0x124b60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124b64: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x124b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x124b68: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x124b68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x124b6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x124b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x124b70: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x124b70u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x124b74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x124b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b78: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x124b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
    // 0x124b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x124b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b80: 0xc049c48  jal         func_127120
    ctx->pc = 0x124B80u;
    SET_GPR_U32(ctx, 31, 0x124B88u);
    ctx->pc = 0x124B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124B80u;
    // 0x124b84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x124B80u, 0x124B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B88u;
label_124b88:
    // 0x124b88: 0x2907821  addu        $t7, $s4, $s0
    ctx->pc = 0x124b88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x124b8c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b90: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x124B90u;
    {
        const bool branch_taken_0x124b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B90u;
        // 0x124b94: 0xa1e00000  sb          $zero, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b90) {
            ctx->pc = 0x124AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ad8;
        }
    }
    ctx->pc = 0x124B98u;
}
