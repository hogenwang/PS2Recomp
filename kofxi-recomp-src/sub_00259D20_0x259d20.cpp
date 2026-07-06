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

// Function: sub_00259D20
// Address: 0x259d20 - 0x25a1e8
void sub_00259D20_0x259d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259D20_0x259d20");
#endif

    switch (ctx->pc) {
        case 0x259d40u: goto label_259d40;
        case 0x259d84u: goto label_259d84;
        case 0x259d8cu: goto label_259d8c;
        case 0x259df0u: goto label_259df0;
        case 0x259e00u: goto label_259e00;
        case 0x259e1cu: goto label_259e1c;
        case 0x259e2cu: goto label_259e2c;
        case 0x259e40u: goto label_259e40;
        case 0x259e5cu: goto label_259e5c;
        case 0x259ef8u: goto label_259ef8;
        case 0x259f10u: goto label_259f10;
        case 0x259f28u: goto label_259f28;
        case 0x25a050u: goto label_25a050;
        case 0x25a068u: goto label_25a068;
        case 0x25a104u: goto label_25a104;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a194u: goto label_25a194;
        case 0x25a1c4u: goto label_25a1c4;
        default: break;
    }

    ctx->pc = 0x259d20u;

label_259d20:
    // 0x259d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259d24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x259d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x259d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259d34: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x259d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d38: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x259D38u;
    {
        const bool branch_taken_0x259d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D38u;
        // 0x259d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d38) {
            ctx->pc = 0x259D98u;
            goto label_259d98;
        }
    }
    ctx->pc = 0x259D40u;
label_259d40:
    // 0x259d40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x259d44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259D44u;
    {
        const bool branch_taken_0x259d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D44u;
        // 0x259d48: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d44) {
            ctx->pc = 0x259D58u;
            goto label_259d58;
        }
    }
    ctx->pc = 0x259D4Cu;
    // 0x259d4c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x259d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x259d50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x259d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x259d54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_259d58:
    // 0x259d58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259d5c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x259d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x259d60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259D60u;
    {
        const bool branch_taken_0x259d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D60u;
        // 0x259d64: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d60) {
            ctx->pc = 0x259D78u;
            goto label_259d78;
        }
    }
    ctx->pc = 0x259D68u;
    // 0x259d68: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x259d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x259d6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x259d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x259d70: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x259d74: 0x0  nop
    ctx->pc = 0x259d74u;
    // NOP
label_259d78:
    // 0x259d78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259d7c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x259D7Cu;
    SET_GPR_U32(ctx, 31, 0x259D84u);
    ctx->pc = 0x259D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D7Cu;
    // 0x259d80: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x259D7Cu, 0x259D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D84u;
label_259d84:
    // 0x259d84: 0xc098560  jal         func_261580
    ctx->pc = 0x259D84u;
    SET_GPR_U32(ctx, 31, 0x259D8Cu);
    ctx->pc = 0x259D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D84u;
    // 0x259d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x259D84u, 0x259D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D8Cu;
label_259d8c:
    // 0x259d8c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x259d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x259d90: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x259D90u;
    {
        const bool branch_taken_0x259d90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D90u;
        // 0x259d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d90) {
            ctx->pc = 0x259D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259d40;
        }
    }
    ctx->pc = 0x259D98u;
label_259d98:
    // 0x259d98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x259d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259d9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x259d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259da4: 0x3e00008  jr          $ra
    ctx->pc = 0x259DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DA4u;
        // 0x259da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259DACu;
    // 0x259dac: 0x0  nop
    ctx->pc = 0x259dacu;
    // NOP
    // 0x259db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x259db4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x259db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x259db8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x259db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x259dbc: 0x244312e0  addiu       $v1, $v0, 0x12E0
    ctx->pc = 0x259dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4832));
    // 0x259dc0: 0x8c5112e0  lw          $s1, 0x12E0($v0)
    ctx->pc = 0x259dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4832)));
    // 0x259dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x259dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x259dc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x259dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x259dcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x259dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x259dd0: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x259DD0u;
    {
        const bool branch_taken_0x259dd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DD0u;
        // 0x259dd4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dd0) {
            ctx->pc = 0x259E68u;
            goto label_259e68;
        }
    }
    ctx->pc = 0x259DD8u;
    // 0x259dd8: 0x12230023  beq         $s1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x259DD8u;
    {
        const bool branch_taken_0x259dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x259DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DD8u;
        // 0x259ddc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dd8) {
            ctx->pc = 0x259E68u;
            goto label_259e68;
        }
    }
    ctx->pc = 0x259DE0u;
    // 0x259de0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x259de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259de4: 0x24521308  addiu       $s2, $v0, 0x1308
    ctx->pc = 0x259de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x259de8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x259de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x259dec: 0x0  nop
    ctx->pc = 0x259decu;
    // NOP
label_259df0:
    // 0x259df0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x259DF0u;
    {
        const bool branch_taken_0x259df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259df0) {
            ctx->pc = 0x259DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259DF0u;
            // 0x259df4: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259E60u;
            goto label_259e60;
        }
    }
    ctx->pc = 0x259DF8u;
    // 0x259df8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259DF8u;
    SET_GPR_U32(ctx, 31, 0x259E00u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x259DF8u, 0x259E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E00u;
label_259e00:
    // 0x259e00: 0x96030028  lhu         $v1, 0x28($s0)
    ctx->pc = 0x259e00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x259e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e08: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x259e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x259e0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259E0Cu;
    {
        const bool branch_taken_0x259e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E0Cu;
        // 0x259e10: 0x34624000  ori         $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e0c) {
            ctx->pc = 0x259E24u;
            goto label_259e24;
        }
    }
    ctx->pc = 0x259E14u;
    // 0x259e14: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259E14u;
    SET_GPR_U32(ctx, 31, 0x259E1Cu);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259E14u, 0x259E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E1Cu;
label_259e1c:
    // 0x259e1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x259E1Cu;
    {
        const bool branch_taken_0x259e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E1Cu;
        // 0x259e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e1c) {
            ctx->pc = 0x259E30u;
            goto label_259e30;
        }
    }
    ctx->pc = 0x259E24u;
label_259e24:
    // 0x259e24: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259E24u;
    SET_GPR_U32(ctx, 31, 0x259E2Cu);
    ctx->pc = 0x259E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E24u;
    // 0x259e28: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x259E24u, 0x259E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E2Cu;
label_259e2c:
    // 0x259e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259e30:
    // 0x259e30: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x259E30u;
    {
        const bool branch_taken_0x259e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e30) {
            ctx->pc = 0x259E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259E30u;
            // 0x259e34: 0x8e310008  lw          $s1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259E60u;
            goto label_259e60;
        }
    }
    ctx->pc = 0x259E38u;
    // 0x259e38: 0xc096748  jal         func_259D20
    ctx->pc = 0x259E38u;
    SET_GPR_U32(ctx, 31, 0x259E40u);
    ctx->pc = 0x259E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E38u;
    // 0x259e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D20u;
    goto label_259d20;
    ctx->pc = 0x259E40u;
label_259e40:
    // 0x259e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259E40u;
    {
        const bool branch_taken_0x259e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e40) {
            ctx->pc = 0x259E54u;
            goto label_259e54;
        }
    }
    ctx->pc = 0x259E48u;
    // 0x259e48: 0xde420080  ld          $v0, 0x80($s2)
    ctx->pc = 0x259e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x259e4c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x259e4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x259e50: 0xfe420080  sd          $v0, 0x80($s2)
    ctx->pc = 0x259e50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 128), GPR_U64(ctx, 2));
label_259e54:
    // 0x259e54: 0xc0969ee  jal         func_25A7B8
    ctx->pc = 0x259E54u;
    SET_GPR_U32(ctx, 31, 0x259E5Cu);
    ctx->pc = 0x259E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E54u;
    // 0x259e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A7B8u, 0x259E54u, 0x259E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E5Cu;
label_259e5c:
    // 0x259e5c: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x259e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_259e60:
    // 0x259e60: 0x5633ffe3  bnel        $s1, $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x259E60u;
    {
        const bool branch_taken_0x259e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x259e60) {
            ctx->pc = 0x259E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259E60u;
            // 0x259e64: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_259df0;
        }
    }
    ctx->pc = 0x259E68u;
label_259e68:
    // 0x259e68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x259e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x259e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259e70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x259e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259e74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x259e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x259E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E7Cu;
        // 0x259e80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259E84u;
    // 0x259e84: 0x0  nop
    ctx->pc = 0x259e84u;
    // NOP
    // 0x259e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259e8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259e98: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x259e9c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x259ea0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x259ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x259ea4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x259EA4u;
    {
        const bool branch_taken_0x259ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x259EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EA4u;
        // 0x259ea8: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ea4) {
            ctx->pc = 0x259EC8u;
            goto label_259ec8;
        }
    }
    ctx->pc = 0x259EACu;
    // 0x259eac: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x259eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x259eb0: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x259EB0u;
    {
        const bool branch_taken_0x259eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x259EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EB0u;
        // 0x259eb4: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259eb0) {
            ctx->pc = 0x259F28u;
            goto label_259f28;
        }
    }
    ctx->pc = 0x259EB8u;
    // 0x259eb8: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x259EB8u;
    {
        const bool branch_taken_0x259eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x259EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EB8u;
        // 0x259ebc: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259eb8) {
            ctx->pc = 0x259F28u;
            goto label_259f28;
        }
    }
    ctx->pc = 0x259EC0u;
    // 0x259ec0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x259EC0u;
    {
        const bool branch_taken_0x259ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x259EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EC0u;
        // 0x259ec4: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ec0) {
            ctx->pc = 0x259F28u;
            goto label_259f28;
        }
    }
    ctx->pc = 0x259EC8u;
label_259ec8:
    // 0x259ec8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x259EC8u;
    {
        const bool branch_taken_0x259ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ec8) {
            ctx->pc = 0x259ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259EC8u;
            // 0x259ecc: 0xa46500b2  sh          $a1, 0xB2($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 178), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259EF0u;
            goto label_259ef0;
        }
    }
    ctx->pc = 0x259ED0u;
    // 0x259ed0: 0x8462001a  lh          $v0, 0x1A($v1)
    ctx->pc = 0x259ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x259ed4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x259ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x259ed8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259ED8u;
    {
        const bool branch_taken_0x259ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259ed8) {
            ctx->pc = 0x259EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259ED8u;
            // 0x259edc: 0xa46500b2  sh          $a1, 0xB2($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 178), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259EF0u;
            goto label_259ef0;
        }
    }
    ctx->pc = 0x259EE0u;
    // 0x259ee0: 0x846200b2  lh          $v0, 0xB2($v1)
    ctx->pc = 0x259ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 178)));
    // 0x259ee4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x259EE4u;
    {
        const bool branch_taken_0x259ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ee4) {
            ctx->pc = 0x259EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259EE4u;
            // 0x259ee8: 0xa46500b2  sh          $a1, 0xB2($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 178), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259EF0u;
            goto label_259ef0;
        }
    }
    ctx->pc = 0x259EECu;
    // 0x259eec: 0xa6050038  sh          $a1, 0x38($s0)
    ctx->pc = 0x259eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 5));
label_259ef0:
    // 0x259ef0: 0xc08b6f0  jal         func_22DBC0
    ctx->pc = 0x259EF0u;
    SET_GPR_U32(ctx, 31, 0x259EF8u);
    ctx->pc = 0x259EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EF0u;
    // 0x259ef4: 0x26040036  addiu       $a0, $s0, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBC0u, 0x259EF0u, 0x259EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EF8u;
label_259ef8:
    // 0x259ef8: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x259ef8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x259efc: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x259efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x259f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259F00u;
    {
        const bool branch_taken_0x259f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F00u;
        // 0x259f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f00) {
            ctx->pc = 0x259F10u;
            goto label_259f10;
        }
    }
    ctx->pc = 0x259F08u;
    // 0x259f08: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x259F08u;
    SET_GPR_U32(ctx, 31, 0x259F10u);
    ctx->pc = 0x259F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F08u;
    // 0x259f0c: 0x26050048  addiu       $a1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x259F08u, 0x259F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F10u;
label_259f10:
    // 0x259f10: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x259f10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x259f14: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x259f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x259f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259F18u;
    {
        const bool branch_taken_0x259f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F18u;
        // 0x259f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f18) {
            ctx->pc = 0x259F28u;
            goto label_259f28;
        }
    }
    ctx->pc = 0x259F20u;
    // 0x259f20: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x259F20u;
    SET_GPR_U32(ctx, 31, 0x259F28u);
    ctx->pc = 0x259F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F20u;
    // 0x259f24: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x259F20u, 0x259F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F28u;
label_259f28:
    // 0x259f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259f30: 0x3e00008  jr          $ra
    ctx->pc = 0x259F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F30u;
        // 0x259f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259F38u;
    // 0x259f38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x259f3c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x259f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x259f40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x259f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x259f44: 0x246a9e88  addiu       $t2, $v1, -0x6178
    ctx->pc = 0x259f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942344));
    // 0x259f48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x259f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x259f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f50: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x259f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x259f54: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x259f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x259f58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x259f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259f5c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x259f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x259f60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x259f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x259f64: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x259f64u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x259f68: 0x14e20096  bne         $a3, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x259F68u;
    {
        const bool branch_taken_0x259f68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x259F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F68u;
        // 0x259f6c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f68) {
            ctx->pc = 0x25A1C4u;
            goto label_25a1c4;
        }
    }
    ctx->pc = 0x259F70u;
    // 0x259f70: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x259f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x259f74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x259f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x259f78: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x259F78u;
    {
        const bool branch_taken_0x259f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F78u;
        // 0x259f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f78) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x259F80u;
    // 0x259f80: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x259f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x259f84: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x259F84u;
    {
        const bool branch_taken_0x259f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F84u;
        // 0x259f88: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f84) {
            ctx->pc = 0x25A1C4u;
            goto label_25a1c4;
        }
    }
    ctx->pc = 0x259F8Cu;
    // 0x259f8c: 0x49880  sll         $s3, $a0, 2
    ctx->pc = 0x259f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x259f90: 0x26821050  addiu       $v0, $s4, 0x1050
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4176));
    // 0x259f94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x259f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259f98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x259f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x259f9c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259F9Cu;
    {
        const bool branch_taken_0x259f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x259FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F9Cu;
        // 0x259fa0: 0x8c4b0000  lw          $t3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f9c) {
            ctx->pc = 0x259FB0u;
            goto label_259fb0;
        }
    }
    ctx->pc = 0x259FA4u;
    // 0x259fa4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x259fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x259fa8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x259FA8u;
    {
        const bool branch_taken_0x259fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FA8u;
        // 0x259fac: 0x244aa1e8  addiu       $t2, $v0, -0x5E18 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fa8) {
            ctx->pc = 0x25A080u;
            goto label_25a080;
        }
    }
    ctx->pc = 0x259FB0u;
label_259fb0:
    // 0x259fb0: 0x2482fff2  addiu       $v0, $a0, -0xE
    ctx->pc = 0x259fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967282));
    // 0x259fb4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x259fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x259fb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259FB8u;
    {
        const bool branch_taken_0x259fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FB8u;
        // 0x259fbc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fb8) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259FC0u;
    // 0x259fc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x259fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fc4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x259FC4u;
    {
        const bool branch_taken_0x259fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FC4u;
        // 0x259fc8: 0x244ac4c0  addiu       $t2, $v0, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fc4) {
            ctx->pc = 0x25A080u;
            goto label_25a080;
        }
    }
    ctx->pc = 0x259FCCu;
label_259fcc:
    // 0x259fcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x259fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259fd0: 0x14820027  bne         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x259FD0u;
    {
        const bool branch_taken_0x259fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x259FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FD0u;
        // 0x259fd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fd0) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259FD8u;
    // 0x259fd8: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x259FD8u;
    {
        const bool branch_taken_0x259fd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FD8u;
        // 0x259fdc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fd8) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259FE0u;
    // 0x259fe0: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x259fe0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x259fe4: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x259fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x259fe8: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x259FE8u;
    {
        const bool branch_taken_0x259fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x259FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FE8u;
        // 0x259fec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fe8) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259FF0u;
    // 0x259ff0: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x259ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x259ff4: 0x8a27000f  lwl         $a3, 0xF($s1)
    ctx->pc = 0x259ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x259ff8: 0x9a27000c  lwr         $a3, 0xC($s1)
    ctx->pc = 0x259ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x259ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a000: 0x8a250013  lwl         $a1, 0x13($s1)
    ctx->pc = 0x25a000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25a004: 0x9a250010  lwr         $a1, 0x10($s1)
    ctx->pc = 0x25a004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25a008: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25a00c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x25a00cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x25a010: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x25a010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x25a014: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x25a014u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x25a018: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a01c: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x25a01cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x25a020: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x25a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x25a024: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25a024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25a028: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x25a028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x25a02c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25a02cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a030: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x25a030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x25a034: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x25a034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x25a038: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x25a038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x25a03c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x25a03cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x25a040: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x25a040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25a044: 0xf23824  and         $a3, $a3, $s2
    ctx->pc = 0x25a044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 18));
    // 0x25a048: 0xc093182  jal         func_24C608
    ctx->pc = 0x25A048u;
    SET_GPR_U32(ctx, 31, 0x25A050u);
    ctx->pc = 0x25A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A048u;
    // 0x25a04c: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C608u, 0x25A048u, 0x25A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A050u;
label_25a050:
    // 0x25a050: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x25A050u;
    {
        const bool branch_taken_0x25a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A050u;
        // 0x25a054: 0x2624fff8  addiu       $a0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a050) {
            ctx->pc = 0x25A1C4u;
            goto label_25a1c4;
        }
    }
    ctx->pc = 0x25A058u;
    // 0x25a058: 0x8a250013  lwl         $a1, 0x13($s1)
    ctx->pc = 0x25a058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25a05c: 0x9a250010  lwr         $a1, 0x10($s1)
    ctx->pc = 0x25a05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25a060: 0xc093830  jal         func_24E0C0
    ctx->pc = 0x25A060u;
    SET_GPR_U32(ctx, 31, 0x25A068u);
    ctx->pc = 0x25A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A060u;
    // 0x25a064: 0xb22824  and         $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E0C0u, 0x25A060u, 0x25A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A068u;
label_25a068:
    // 0x25a068: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x25A068u;
    {
        const bool branch_taken_0x25a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A068u;
        // 0x25a06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a068) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x25A070u;
label_25a070:
    // 0x25a070: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A070u;
    {
        const bool branch_taken_0x25a070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a070) {
            ctx->pc = 0x25A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A070u;
            // 0x25a074: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A080u;
            goto label_25a080;
        }
    }
    ctx->pc = 0x25A078u;
    // 0x25a078: 0x11600053  beqz        $t3, . + 4 + (0x53 << 2)
    ctx->pc = 0x25A078u;
    {
        const bool branch_taken_0x25a078 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A078u;
        // 0x25a07c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a078) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x25A080u;
label_25a080:
    // 0x25a080: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A080u;
        // 0x25a084: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A19Cu;
            goto label_25a19c;
        }
    }
    ctx->pc = 0x25A088u;
    // 0x25a088: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x25a088u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25a08c: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x25a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x25a090: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x25A090u;
    {
        const bool branch_taken_0x25a090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A090u;
        // 0x25a094: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a090) {
            ctx->pc = 0x25A19Cu;
            goto label_25a19c;
        }
    }
    ctx->pc = 0x25A098u;
    // 0x25a098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a09c: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x25A09Cu;
    {
        const bool branch_taken_0x25a09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A09Cu;
        // 0x25a0a0: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a09c) {
            ctx->pc = 0x25A19Cu;
            goto label_25a19c;
        }
    }
    ctx->pc = 0x25A0A4u;
    // 0x25a0a4: 0x8a450007  lwl         $a1, 0x7($s2)
    ctx->pc = 0x25a0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25a0a8: 0x9a450004  lwr         $a1, 0x4($s2)
    ctx->pc = 0x25a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25a0ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a0b0: 0x8a27000f  lwl         $a3, 0xF($s1)
    ctx->pc = 0x25a0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x25a0b4: 0x9a27000c  lwr         $a3, 0xC($s1)
    ctx->pc = 0x25a0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x25a0b8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x25a0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25a0bc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x25a0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25a0c0: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x25a0c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x25a0c4: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x25a0c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x25a0c8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a0cc: 0x92080001  lbu         $t0, 0x1($s0)
    ctx->pc = 0x25a0ccu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x25a0d0: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x25a0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x25a0d4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25a0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25a0d8: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x25a0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x25a0dc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25a0dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a0e0: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x25a0e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
    // 0x25a0e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x25a0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x25a0e8: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x25a0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x25a0ec: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x25a0ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x25a0f0: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x25a0f4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x25a0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25a0f8: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x25a0f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x25a0fc: 0xc093044  jal         func_24C110
    ctx->pc = 0x25A0FCu;
    SET_GPR_U32(ctx, 31, 0x25A104u);
    ctx->pc = 0x25A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0FCu;
    // 0x25a100: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C110u, 0x25A0FCu, 0x25A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A104u;
label_25a104:
    // 0x25a104: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x25A104u;
    {
        const bool branch_taken_0x25a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A104u;
        // 0x25a108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a104) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x25A10Cu;
    // 0x25a10c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25a110: 0xdc431218  ld          $v1, 0x1218($v0)
    ctx->pc = 0x25a110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x25a114: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x25A114u;
    {
        const bool branch_taken_0x25a114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A114u;
        // 0x25a118: 0x26821050  addiu       $v0, $s4, 0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a114) {
            ctx->pc = 0x25A1C4u;
            goto label_25a1c4;
        }
    }
    ctx->pc = 0x25A11Cu;
    // 0x25a11c: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x25a120: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25a124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a128: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A128u;
    {
        const bool branch_taken_0x25a128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A128u;
        // 0x25a12c: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a128) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x25A130u;
    // 0x25a130: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A130u;
    {
        const bool branch_taken_0x25a130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A130u;
        // 0x25a134: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a130) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x25A138u;
    // 0x25a138: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x25A138u;
    {
        const bool branch_taken_0x25a138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A138u;
        // 0x25a13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a138) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x25A140u;
label_25a140:
    // 0x25a140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a144: 0xc048c96  jal         func_123258
    ctx->pc = 0x25A144u;
    SET_GPR_U32(ctx, 31, 0x25A14Cu);
    ctx->pc = 0x25A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A144u;
    // 0x25a148: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x25A144u, 0x25A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A14Cu;
label_25a14c:
    // 0x25a14c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25a150: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a154: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x25a154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25a158: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a15c: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x25a15cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25a160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a164: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x25a164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x25a168: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x25a168u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a16c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25a170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a178: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x25a178u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a17c: 0x8a22000f  lwl         $v0, 0xF($s1)
    ctx->pc = 0x25a17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25a180: 0x9a22000c  lwr         $v0, 0xC($s1)
    ctx->pc = 0x25a180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25a184: 0xaba20007  swl         $v0, 0x7($sp)
    ctx->pc = 0x25a184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a188: 0xbba20004  swr         $v0, 0x4($sp)
    ctx->pc = 0x25a188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a18c: 0xc095d2a  jal         func_2574A8
    ctx->pc = 0x25A18Cu;
    SET_GPR_U32(ctx, 31, 0x25A194u);
    ctx->pc = 0x25A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A18Cu;
    // 0x25a190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2574A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2574A8u, 0x25A18Cu, 0x25A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A194u;
label_25a194:
    // 0x25a194: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25A194u;
    {
        const bool branch_taken_0x25a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A194u;
        // 0x25a198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a194) {
            ctx->pc = 0x25A1C8u;
            goto label_25a1c8;
        }
    }
    ctx->pc = 0x25A19Cu;
label_25a19c:
    // 0x25a19c: 0x8a450007  lwl         $a1, 0x7($s2)
    ctx->pc = 0x25a19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25a1a0: 0x9a450004  lwr         $a1, 0x4($s2)
    ctx->pc = 0x25a1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25a1a4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25a1a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25a1ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x25a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x25a1b0: 0x248412e0  addiu       $a0, $a0, 0x12E0
    ctx->pc = 0x25a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4832));
    // 0x25a1b4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x25a1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25a1b8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a1bc: 0xc093098  jal         func_24C260
    ctx->pc = 0x25A1BCu;
    SET_GPR_U32(ctx, 31, 0x25A1C4u);
    ctx->pc = 0x25A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1BCu;
    // 0x25a1c0: 0x140382d  daddu       $a3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C260u, 0x25A1BCu, 0x25A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1C4u;
label_25a1c4:
    // 0x25a1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25a1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a1c8:
    // 0x25a1c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25a1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a1cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25a1ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a1d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25a1d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a1d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a1d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25a1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a1dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25a1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1E0u;
        // 0x25a1e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A1E8u;
}
