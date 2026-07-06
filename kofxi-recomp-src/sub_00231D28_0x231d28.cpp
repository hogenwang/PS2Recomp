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

// Function: sub_00231D28
// Address: 0x231d28 - 0x2320c8
void sub_00231D28_0x231d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231D28_0x231d28");
#endif

    switch (ctx->pc) {
        case 0x231d84u: goto label_231d84;
        case 0x231e04u: goto label_231e04;
        case 0x231e18u: goto label_231e18;
        case 0x231e8cu: goto label_231e8c;
        case 0x231f00u: goto label_231f00;
        case 0x231f38u: goto label_231f38;
        case 0x231f54u: goto label_231f54;
        case 0x231fd4u: goto label_231fd4;
        case 0x23200cu: goto label_23200c;
        case 0x232094u: goto label_232094;
        case 0x2320a8u: goto label_2320a8;
        default: break;
    }

    ctx->pc = 0x231d28u;

    // 0x231d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231d2c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x231d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231d34: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x231D34u;
    {
        const bool branch_taken_0x231d34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D34u;
        // 0x231d38: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d34) {
            ctx->pc = 0x231D44u;
            goto label_231d44;
        }
    }
    ctx->pc = 0x231D3Cu;
    // 0x231d3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x231D3Cu;
    {
        const bool branch_taken_0x231d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D3Cu;
        // 0x231d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d3c) {
            ctx->pc = 0x231D88u;
            goto label_231d88;
        }
    }
    ctx->pc = 0x231D44u;
label_231d44:
    // 0x231d44: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x231D44u;
    {
        const bool branch_taken_0x231d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D44u;
        // 0x231d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d44) {
            ctx->pc = 0x231D88u;
            goto label_231d88;
        }
    }
    ctx->pc = 0x231D4Cu;
    // 0x231d4c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231D4Cu;
    {
        const bool branch_taken_0x231d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d4c) {
            ctx->pc = 0x231D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231D4Cu;
            // 0x231d50: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231D60u;
            goto label_231d60;
        }
    }
    ctx->pc = 0x231D54u;
    // 0x231d54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231d58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231D58u;
    {
        const bool branch_taken_0x231d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D58u;
        // 0x231d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d58) {
            ctx->pc = 0x231D84u;
            goto label_231d84;
        }
    }
    ctx->pc = 0x231D60u;
label_231d60:
    // 0x231d60: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x231d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x231d64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231D64u;
    {
        const bool branch_taken_0x231d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D64u;
        // 0x231d68: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d64) {
            ctx->pc = 0x231D88u;
            goto label_231d88;
        }
    }
    ctx->pc = 0x231D6Cu;
    // 0x231d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231d70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x231d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x231d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d7c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231D7Cu;
    SET_GPR_U32(ctx, 31, 0x231D84u);
    ctx->pc = 0x231D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D7Cu;
    // 0x231d80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231D7Cu, 0x231D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D84u;
label_231d84:
    // 0x231d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231d88:
    // 0x231d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x231D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D8Cu;
        // 0x231d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D94u;
    // 0x231d94: 0x0  nop
    ctx->pc = 0x231d94u;
    // NOP
    // 0x231d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231d9c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x231d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231da0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231da8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x231da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231dac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x231dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231db0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231DB0u;
    {
        const bool branch_taken_0x231db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DB0u;
        // 0x231db4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231db0) {
            ctx->pc = 0x231DC4u;
            goto label_231dc4;
        }
    }
    ctx->pc = 0x231DB8u;
    // 0x231db8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231dbc: 0x14e20017  bne         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x231DBCu;
    {
        const bool branch_taken_0x231dbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x231DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DBCu;
        // 0x231dc0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dbc) {
            ctx->pc = 0x231E1Cu;
            goto label_231e1c;
        }
    }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x231DC4u;
    {
        const bool branch_taken_0x231dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231dc4) {
            ctx->pc = 0x231E04u;
            goto label_231e04;
        }
    }
    ctx->pc = 0x231DCCu;
    // 0x231dcc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231DCCu;
    {
        const bool branch_taken_0x231dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x231dcc) {
            ctx->pc = 0x231DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231DCCu;
            // 0x231dd0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231DE0u;
            goto label_231de0;
        }
    }
    ctx->pc = 0x231DD4u;
    // 0x231dd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231dd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231DD8u;
    {
        const bool branch_taken_0x231dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DD8u;
        // 0x231ddc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231dd8) {
            ctx->pc = 0x231E04u;
            goto label_231e04;
        }
    }
    ctx->pc = 0x231DE0u;
label_231de0:
    // 0x231de0: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x231de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x231de4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x231DE4u;
    {
        const bool branch_taken_0x231de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DE4u;
        // 0x231de8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231de4) {
            ctx->pc = 0x231E1Cu;
            goto label_231e1c;
        }
    }
    ctx->pc = 0x231DECu;
    // 0x231dec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231df4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x231df4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x231df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231dfc: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231DFCu;
    SET_GPR_U32(ctx, 31, 0x231E04u);
    ctx->pc = 0x231E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DFCu;
    // 0x231e00: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231DFCu, 0x231E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E04u;
label_231e04:
    // 0x231e04: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231E04u;
    {
        const bool branch_taken_0x231e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E04u;
        // 0x231e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e04) {
            ctx->pc = 0x231E18u;
            goto label_231e18;
        }
    }
    ctx->pc = 0x231E0Cu;
    // 0x231e0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e10: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231E10u;
    SET_GPR_U32(ctx, 31, 0x231E18u);
    ctx->pc = 0x231E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E10u;
    // 0x231e14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231E10u, 0x231E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E18u;
label_231e18:
    // 0x231e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231e1c:
    // 0x231e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231e28: 0x3e00008  jr          $ra
    ctx->pc = 0x231E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E28u;
        // 0x231e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E30u;
    // 0x231e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231e34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x231e34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231e3c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x231E3Cu;
    {
        const bool branch_taken_0x231e3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E3Cu;
        // 0x231e40: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e3c) {
            ctx->pc = 0x231E4Cu;
            goto label_231e4c;
        }
    }
    ctx->pc = 0x231E44u;
    // 0x231e44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x231E44u;
    {
        const bool branch_taken_0x231e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E44u;
        // 0x231e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e44) {
            ctx->pc = 0x231E90u;
            goto label_231e90;
        }
    }
    ctx->pc = 0x231E4Cu;
label_231e4c:
    // 0x231e4c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x231E4Cu;
    {
        const bool branch_taken_0x231e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E4Cu;
        // 0x231e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e4c) {
            ctx->pc = 0x231E90u;
            goto label_231e90;
        }
    }
    ctx->pc = 0x231E54u;
    // 0x231e54: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x231E54u;
    {
        const bool branch_taken_0x231e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x231e54) {
            ctx->pc = 0x231E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231E54u;
            // 0x231e58: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231E68u;
            goto label_231e68;
        }
    }
    ctx->pc = 0x231E5Cu;
    // 0x231e5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231e60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x231E60u;
    {
        const bool branch_taken_0x231e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E60u;
        // 0x231e64: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e60) {
            ctx->pc = 0x231E8Cu;
            goto label_231e8c;
        }
    }
    ctx->pc = 0x231E68u;
label_231e68:
    // 0x231e68: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x231e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x231e6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x231E6Cu;
    {
        const bool branch_taken_0x231e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E6Cu;
        // 0x231e70: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231e6c) {
            ctx->pc = 0x231E90u;
            goto label_231e90;
        }
    }
    ctx->pc = 0x231E74u;
    // 0x231e74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231e78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x231e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x231e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e84: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231E84u;
    SET_GPR_U32(ctx, 31, 0x231E8Cu);
    ctx->pc = 0x231E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E84u;
    // 0x231e88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231E84u, 0x231E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E8Cu;
label_231e8c:
    // 0x231e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231e90:
    // 0x231e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e94: 0x3e00008  jr          $ra
    ctx->pc = 0x231E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E94u;
        // 0x231e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E9Cu;
    // 0x231e9c: 0x0  nop
    ctx->pc = 0x231e9cu;
    // NOP
    // 0x231ea0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x231ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x231ea4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x231ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x231ea8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x231ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x231eac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x231eacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231eb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x231eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x231eb4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x231eb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231eb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x231eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x231ebc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x231ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ec0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231ec4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x231ec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ec8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231ecc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x231eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231ed4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x231ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ed8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x231ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x231edc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x231EDCu;
    {
        const bool branch_taken_0x231edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EDCu;
        // 0x231ee0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231edc) {
            ctx->pc = 0x231EF0u;
            goto label_231ef0;
        }
    }
    ctx->pc = 0x231EE4u;
    // 0x231ee4: 0x269102b  sltu        $v0, $s3, $t1
    ctx->pc = 0x231ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x231ee8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x231EE8u;
    {
        const bool branch_taken_0x231ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231EE8u;
        // 0x231eec: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231ee8) {
            ctx->pc = 0x231F60u;
            goto label_231f60;
        }
    }
    ctx->pc = 0x231EF0u;
label_231ef0:
    // 0x231ef0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x231EF0u;
    {
        const bool branch_taken_0x231ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ef0) {
            ctx->pc = 0x231F38u;
            goto label_231f38;
        }
    }
    ctx->pc = 0x231EF8u;
    // 0x231ef8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x231EF8u;
    SET_GPR_U32(ctx, 31, 0x231F00u);
    ctx->pc = 0x231EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231EF8u;
    // 0x231efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x231EF8u, 0x231F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F00u;
label_231f00:
    // 0x231f00: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x231F00u;
    {
        const bool branch_taken_0x231f00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x231F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F00u;
        // 0x231f04: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f00) {
            ctx->pc = 0x231F10u;
            goto label_231f10;
        }
    }
    ctx->pc = 0x231F08u;
    // 0x231f08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x231F08u;
    {
        const bool branch_taken_0x231f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F08u;
        // 0x231f0c: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f08) {
            ctx->pc = 0x231F38u;
            goto label_231f38;
        }
    }
    ctx->pc = 0x231F10u;
label_231f10:
    // 0x231f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x231f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231f14: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x231f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x231f18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x231F18u;
    {
        const bool branch_taken_0x231f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f18) {
            ctx->pc = 0x231F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231F18u;
            // 0x231f1c: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231F28u;
            goto label_231f28;
        }
    }
    ctx->pc = 0x231F20u;
    // 0x231f20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x231f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f24: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_231f28:
    // 0x231f28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x231f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f30: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231F30u;
    SET_GPR_U32(ctx, 31, 0x231F38u);
    ctx->pc = 0x231F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F30u;
    // 0x231f34: 0x2d4a00a  movz        $s4, $s6, $s4 (Delay Slot)
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231F30u, 0x231F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F38u;
label_231f38:
    // 0x231f38: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x231F38u;
    {
        const bool branch_taken_0x231f38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x231F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F38u;
        // 0x231f3c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f38) {
            ctx->pc = 0x231F60u;
            goto label_231f60;
        }
    }
    ctx->pc = 0x231F40u;
    // 0x231f40: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x231F40u;
    {
        const bool branch_taken_0x231f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F40u;
        // 0x231f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f40) {
            ctx->pc = 0x231F60u;
            goto label_231f60;
        }
    }
    ctx->pc = 0x231F48u;
    // 0x231f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x231f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f4c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x231F4Cu;
    SET_GPR_U32(ctx, 31, 0x231F54u);
    ctx->pc = 0x231F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F4Cu;
    // 0x231f50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x231F4Cu, 0x231F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F54u;
label_231f54:
    // 0x231f54: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x231f58: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x231f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x231f5c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x231f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231f60:
    // 0x231f60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x231f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x231f64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x231f64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231f68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x231f68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231f6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x231f6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231f70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x231f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231f74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231f78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231f80: 0x3e00008  jr          $ra
    ctx->pc = 0x231F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F80u;
        // 0x231f84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F88u;
    // 0x231f88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x231f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x231f8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x231f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x231f90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x231f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x231f94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x231f94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x231f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x231f9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x231f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231fa4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x231fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231fac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x231facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fb0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x231fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x231fb4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x231FB4u;
    {
        const bool branch_taken_0x231fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FB4u;
        // 0x231fb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fb4) {
            ctx->pc = 0x231FC4u;
            goto label_231fc4;
        }
    }
    ctx->pc = 0x231FBCu;
    // 0x231fbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x231FBCu;
    {
        const bool branch_taken_0x231fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FBCu;
        // 0x231fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fbc) {
            ctx->pc = 0x232010u;
            goto label_232010;
        }
    }
    ctx->pc = 0x231FC4u;
label_231fc4:
    // 0x231fc4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x231FC4u;
    {
        const bool branch_taken_0x231fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FC4u;
        // 0x231fc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fc4) {
            ctx->pc = 0x232010u;
            goto label_232010;
        }
    }
    ctx->pc = 0x231FCCu;
    // 0x231fcc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x231FCCu;
    SET_GPR_U32(ctx, 31, 0x231FD4u);
    ctx->pc = 0x231FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231FCCu;
    // 0x231fd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x231FCCu, 0x231FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231FD4u;
label_231fd4:
    // 0x231fd4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x231FD4u;
    {
        const bool branch_taken_0x231fd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x231FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FD4u;
        // 0x231fd8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fd4) {
            ctx->pc = 0x231FE4u;
            goto label_231fe4;
        }
    }
    ctx->pc = 0x231FDCu;
    // 0x231fdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x231FDCu;
    {
        const bool branch_taken_0x231fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231FDCu;
        // 0x231fe0: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231fdc) {
            ctx->pc = 0x23200Cu;
            goto label_23200c;
        }
    }
    ctx->pc = 0x231FE4u;
label_231fe4:
    // 0x231fe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x231fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231fe8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x231fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x231fec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x231FECu;
    {
        const bool branch_taken_0x231fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231fec) {
            ctx->pc = 0x231FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231FECu;
            // 0x231ff0: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231FFCu;
            goto label_231ffc;
        }
    }
    ctx->pc = 0x231FF4u;
    // 0x231ff4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x231ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ff8: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x231ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_231ffc:
    // 0x231ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232000: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x232000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232004: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x232004u;
    SET_GPR_U32(ctx, 31, 0x23200Cu);
    ctx->pc = 0x232008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232004u;
    // 0x232008: 0x291880a  movz        $s1, $s4, $s1 (Delay Slot)
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x232004u, 0x23200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23200Cu;
label_23200c:
    // 0x23200c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23200cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232010:
    // 0x232010: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x232010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x232014: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x232014u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232018: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x232018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23201c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23201cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232028: 0x3e00008  jr          $ra
    ctx->pc = 0x232028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232028u;
        // 0x23202c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232030u;
    // 0x232030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232038: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23203c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x23203cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232044: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x232048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23204c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23204Cu;
    {
        const bool branch_taken_0x23204c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23204Cu;
        // 0x232050: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23204c) {
            ctx->pc = 0x23205Cu;
            goto label_23205c;
        }
    }
    ctx->pc = 0x232054u;
    // 0x232054: 0x14f00015  bne         $a3, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x232054u;
    {
        const bool branch_taken_0x232054 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        ctx->pc = 0x232058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232054u;
        // 0x232058: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232054) {
            ctx->pc = 0x2320ACu;
            goto label_2320ac;
        }
    }
    ctx->pc = 0x23205Cu;
label_23205c:
    // 0x23205c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x23205Cu;
    {
        const bool branch_taken_0x23205c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23205c) {
            ctx->pc = 0x232094u;
            goto label_232094;
        }
    }
    ctx->pc = 0x232064u;
    // 0x232064: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x232064u;
    {
        const bool branch_taken_0x232064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x232064) {
            ctx->pc = 0x232068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232064u;
            // 0x232068: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232074u;
            goto label_232074;
        }
    }
    ctx->pc = 0x23206Cu;
    // 0x23206c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23206Cu;
    {
        const bool branch_taken_0x23206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23206Cu;
        // 0x232070: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23206c) {
            ctx->pc = 0x232094u;
            goto label_232094;
        }
    }
    ctx->pc = 0x232074u;
label_232074:
    // 0x232074: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x232074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x232078: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232078u;
    {
        const bool branch_taken_0x232078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232078u;
        // 0x23207c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232078) {
            ctx->pc = 0x2320ACu;
            goto label_2320ac;
        }
    }
    ctx->pc = 0x232080u;
    // 0x232080: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x232080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x232084: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232088: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x232088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23208c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x23208Cu;
    SET_GPR_U32(ctx, 31, 0x232094u);
    ctx->pc = 0x232090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23208Cu;
    // 0x232090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23208Cu, 0x232094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232094u;
label_232094:
    // 0x232094: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x232094u;
    {
        const bool branch_taken_0x232094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232094u;
        // 0x232098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232094) {
            ctx->pc = 0x2320A8u;
            goto label_2320a8;
        }
    }
    ctx->pc = 0x23209Cu;
    // 0x23209c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320a0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2320A0u;
    SET_GPR_U32(ctx, 31, 0x2320A8u);
    ctx->pc = 0x2320A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320A0u;
    // 0x2320a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2320A0u, 0x2320A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320A8u;
label_2320a8:
    // 0x2320a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2320a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320ac:
    // 0x2320ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2320acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2320b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2320b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2320b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2320b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2320b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2320b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2320bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2320BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2320C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320BCu;
        // 0x2320c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2320BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2320C4u;
    // 0x2320c4: 0x0  nop
    ctx->pc = 0x2320c4u;
    // NOP
}
