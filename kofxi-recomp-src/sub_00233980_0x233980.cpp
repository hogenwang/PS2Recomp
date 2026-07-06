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

// Function: sub_00233980
// Address: 0x233980 - 0x233b08
void sub_00233980_0x233980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233980_0x233980");
#endif

    switch (ctx->pc) {
        case 0x2339b8u: goto label_2339b8;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f8u: goto label_2339f8;
        case 0x233a18u: goto label_233a18;
        case 0x233a3cu: goto label_233a3c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233ad4u: goto label_233ad4;
        default: break;
    }

    ctx->pc = 0x233980u;

    // 0x233980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x233980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x233984: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x233984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x233988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x233988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23398c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23398cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x233990: 0x2451fa30  addiu       $s1, $v0, -0x5D0
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
    // 0x233994: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x233994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x233998: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x23399c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2339a0: 0x26330280  addiu       $s3, $s1, 0x280
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x2339a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2339a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2339a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2339a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2339acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2339b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2339b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2339b4: 0x0  nop
    ctx->pc = 0x2339b4u;
    // NOP
label_2339b8:
    // 0x2339b8: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2339B8u;
    {
        const bool branch_taken_0x2339b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2339b8) {
            ctx->pc = 0x2339BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339B8u;
            // 0x2339bc: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x2339C0u;
    // 0x2339c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2339c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2339c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2339C4u;
    {
        const bool branch_taken_0x2339c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c4) {
            ctx->pc = 0x2339C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339C4u;
            // 0x2339c8: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x2339CCu;
    // 0x2339cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2339d0: 0x5452000a  bnel        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2339D0u;
    {
        const bool branch_taken_0x2339d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2339d0) {
            ctx->pc = 0x2339D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339D0u;
            // 0x2339d4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339FCu;
            goto label_2339fc;
        }
    }
    ctx->pc = 0x2339D8u;
    // 0x2339d8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2339D8u;
    SET_GPR_U32(ctx, 31, 0x2339E0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2339D8u, 0x2339E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339E0u;
label_2339e0:
    // 0x2339e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2339e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339e4: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2339e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2339e8: 0xc08ca5a  jal         func_232968
    ctx->pc = 0x2339E8u;
    SET_GPR_U32(ctx, 31, 0x2339F0u);
    ctx->pc = 0x2339ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339E8u;
    // 0x2339ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232968u, 0x2339E8u, 0x2339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339F0u;
label_2339f0:
    // 0x2339f0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2339F0u;
    SET_GPR_U32(ctx, 31, 0x2339F8u);
    ctx->pc = 0x2339F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339F0u;
    // 0x2339f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2339F0u, 0x2339F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339F8u;
label_2339f8:
    // 0x2339f8: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2339fc:
    // 0x2339fc: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2339fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x233a00: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x233A00u;
    {
        const bool branch_taken_0x233a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233a00) {
            ctx->pc = 0x233A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A00u;
            // 0x233a04: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2339b8;
        }
    }
    ctx->pc = 0x233A08u;
    // 0x233a08: 0x8e84fa2c  lw          $a0, -0x5D4($s4)
    ctx->pc = 0x233a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965804)));
    // 0x233a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233A0Cu;
    {
        const bool branch_taken_0x233a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A0Cu;
        // 0x233a10: 0x2683fa2c  addiu       $v1, $s4, -0x5D4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965804));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a0c) {
            ctx->pc = 0x233A1Cu;
            goto label_233a1c;
        }
    }
    ctx->pc = 0x233A14u;
    // 0x233a14: 0x0  nop
    ctx->pc = 0x233a14u;
    // NOP
label_233a18:
    // 0x233a18: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233a1c:
    // 0x233a1c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233A1Cu;
    {
        const bool branch_taken_0x233a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A1Cu;
        // 0x233a20: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a1c) {
            ctx->pc = 0x233A40u;
            goto label_233a40;
        }
    }
    ctx->pc = 0x233A24u;
    // 0x233a24: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x233a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x233a28: 0x5452fffb  bnel        $v0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233A28u;
    {
        const bool branch_taken_0x233a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x233a28) {
            ctx->pc = 0x233A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A28u;
            // 0x233a2c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233a18;
        }
    }
    ctx->pc = 0x233A30u;
    // 0x233a30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x233a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x233a34: 0xc098560  jal         func_261580
    ctx->pc = 0x233A34u;
    SET_GPR_U32(ctx, 31, 0x233A3Cu);
    ctx->pc = 0x233A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A34u;
    // 0x233a38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x233A34u, 0x233A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A3Cu;
label_233a3c:
    // 0x233a3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x233a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_233a40:
    // 0x233a40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x233a40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233a44: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233a48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x233a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233a4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233a54: 0x3e00008  jr          $ra
    ctx->pc = 0x233A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233A5Cu;
    // 0x233a5c: 0x0  nop
    ctx->pc = 0x233a5cu;
    // NOP
    // 0x233a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233a64: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x233a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233a6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x233a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x233a70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x233a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x233a74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a78: 0x8c50fa2c  lw          $s0, -0x5D4($v0)
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965804)));
    // 0x233a7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x233a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x233a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x233a84: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x233A84u;
    {
        const bool branch_taken_0x233a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A84u;
        // 0x233a88: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a84) {
            ctx->pc = 0x233AC4u;
            goto label_233ac4;
        }
    }
    ctx->pc = 0x233A8Cu;
    // 0x233a8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x233a90: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233A90u;
    {
        const bool branch_taken_0x233a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x233A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A90u;
        // 0x233a94: 0x26510017  addiu       $s1, $s2, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a90) {
            ctx->pc = 0x233AB4u;
            goto label_233ab4;
        }
    }
    ctx->pc = 0x233A98u;
    // 0x233a98: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x233a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233a9c: 0x0  nop
    ctx->pc = 0x233a9cu;
    // NOP
label_233aa0:
    // 0x233aa0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x233AA0u;
    {
        const bool branch_taken_0x233aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233aa0) {
            ctx->pc = 0x233AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233AA0u;
            // 0x233aa4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233ACCu;
            goto label_233acc;
        }
    }
    ctx->pc = 0x233AA8u;
    // 0x233aa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x233aac: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x233AACu;
    {
        const bool branch_taken_0x233aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x233aac) {
            ctx->pc = 0x233AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233AACu;
            // 0x233ab0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233aa0;
        }
    }
    ctx->pc = 0x233AB4u;
label_233ab4:
    // 0x233ab4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233AB4u;
    {
        const bool branch_taken_0x233ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233ab4) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233ABCu;
    // 0x233abc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233ABCu;
    {
        const bool branch_taken_0x233abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233ABCu;
        // 0x233ac0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233abc) {
            ctx->pc = 0x233ACCu;
            goto label_233acc;
        }
    }
    ctx->pc = 0x233AC4u;
label_233ac4:
    // 0x233ac4: 0x26510017  addiu       $s1, $s2, 0x17
    ctx->pc = 0x233ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 23));
    // 0x233ac8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x233ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_233acc:
    // 0x233acc: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x233ACCu;
    SET_GPR_U32(ctx, 31, 0x233AD4u);
    ctx->pc = 0x233AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233ACCu;
    // 0x233ad0: 0x24844800  addiu       $a0, $a0, 0x4800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x233ACCu, 0x233AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AD4u;
label_233ad4:
    // 0x233ad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233ad8: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x233ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x233adc: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x233ae0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233ae4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x233ae8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233aec: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x233aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x233af0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233af4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x233af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x233af8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233b00: 0x3e00008  jr          $ra
    ctx->pc = 0x233B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B00u;
        // 0x233b04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B08u;
}
