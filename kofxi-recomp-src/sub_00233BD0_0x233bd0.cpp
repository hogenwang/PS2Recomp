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

// Function: sub_00233BD0
// Address: 0x233bd0 - 0x233cf8
void sub_00233BD0_0x233bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233BD0_0x233bd0");
#endif

    switch (ctx->pc) {
        case 0x233bd8u: goto label_233bd8;
        case 0x233c1cu: goto label_233c1c;
        default: break;
    }

    ctx->pc = 0x233bd0u;

    // 0x233bd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233BD0u;
    {
        const bool branch_taken_0x233bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD0u;
        // 0x233bd4: 0x8c87000c  lw          $a3, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bd0) {
            ctx->pc = 0x233BE4u;
            goto label_233be4;
        }
    }
    ctx->pc = 0x233BD8u;
label_233bd8:
    // 0x233bd8: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x233BD8u;
    {
        const bool branch_taken_0x233bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD8u;
        // 0x233bdc: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bd8) {
            ctx->pc = 0x233CE0u;
            goto label_233ce0;
        }
    }
    ctx->pc = 0x233BE0u;
    // 0x233be0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233be4:
    // 0x233be4: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x233be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x233be8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233BE8u;
    {
        const bool branch_taken_0x233be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233be8) {
            ctx->pc = 0x233BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233BE8u;
            // 0x233bec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233bd8;
        }
    }
    ctx->pc = 0x233BF0u;
    // 0x233bf0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x233bf4: 0xe54823  subu        $t1, $a3, $a1
    ctx->pc = 0x233bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x233bf8: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x233bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x233bfc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x233BFCu;
    {
        const bool branch_taken_0x233bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BFCu;
        // 0x233c00: 0x654021  addu        $t0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bfc) {
            ctx->pc = 0x233C34u;
            goto label_233c34;
        }
    }
    ctx->pc = 0x233C04u;
    // 0x233c04: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x233c08: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x233c08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x233c0c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x233c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x233c10: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x233c10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x233c14: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x233c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x233c18: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x233c18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_233c1c:
    // 0x233c1c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x233c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x233c20: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x233c24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x233c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x233c28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x233c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x233C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C2Cu;
        // 0x233c30: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C34u;
label_233c34:
    // 0x233c34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233c38: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x233C38u;
    {
        const bool branch_taken_0x233c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C38u;
        // 0x233c3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c38) {
            ctx->pc = 0x233CE8u;
            goto label_233ce8;
        }
    }
    ctx->pc = 0x233C40u;
    // 0x233c40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x233c44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x233c48: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x233c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233c4c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x233c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x233c50: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x233C50u;
    {
        const bool branch_taken_0x233c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C50u;
        // 0x233c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c50) {
            ctx->pc = 0x233CECu;
            goto label_233cec;
        }
    }
    ctx->pc = 0x233C58u;
    // 0x233c58: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x233c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233c60: 0x1122000a  beq         $t1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x233C60u;
    {
        const bool branch_taken_0x233c60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x233C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C60u;
        // 0x233c64: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c60) {
            ctx->pc = 0x233C8Cu;
            goto label_233c8c;
        }
    }
    ctx->pc = 0x233C68u;
    // 0x233c68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233c6c: 0x51220012  beql        $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x233C6Cu;
    {
        const bool branch_taken_0x233c6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x233c6c) {
            ctx->pc = 0x233C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C6Cu;
            // 0x233c70: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233CB8u;
            goto label_233cb8;
        }
    }
    ctx->pc = 0x233C74u;
    // 0x233c74: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x233c74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x233c78: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x233c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x233c7c: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x233c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x233c80: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x233c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x233c84: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x233C84u;
    {
        const bool branch_taken_0x233c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C84u;
        // 0x233c88: 0x90a50000  lbu         $a1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c84) {
            ctx->pc = 0x233C1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233c1c;
        }
    }
    ctx->pc = 0x233C8Cu;
label_233c8c:
    // 0x233c8c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x233c8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x233c90: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x233c90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x233c94: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x233c94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x233c98: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x233c9c: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x233c9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x233ca0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x233ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x233ca4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x233ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x233ca8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x233ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x233cac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x233cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x233cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x233CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CB0u;
        // 0x233cb4: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233CB8u;
label_233cb8:
    // 0x233cb8: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x233cb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x233cbc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x233cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x233cc0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x233cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x233cc4: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x233cc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x233cc8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x233ccc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x233cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x233cd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x233cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x233cd4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x233cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x233cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x233CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD8u;
        // 0x233cdc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233CE0u;
label_233ce0:
    // 0x233ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x233CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CE0u;
        // 0x233ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233CE8u;
label_233ce8:
    // 0x233ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233cec:
    // 0x233cec: 0x3e00008  jr          $ra
    ctx->pc = 0x233CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CECu;
        // 0x233cf0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233CF4u;
    // 0x233cf4: 0x0  nop
    ctx->pc = 0x233cf4u;
    // NOP
    if (ctx->pc == 0x233cf4u) { ctx->pc = 0x233cf8u; }
}
