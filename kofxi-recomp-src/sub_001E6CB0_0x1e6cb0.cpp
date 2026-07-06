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

// Function: sub_001E6CB0
// Address: 0x1e6cb0 - 0x1e6d90
void sub_001E6CB0_0x1e6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6CB0_0x1e6cb0");
#endif

    switch (ctx->pc) {
        case 0x1e6cd8u: goto label_1e6cd8;
        case 0x1e6cf0u: goto label_1e6cf0;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d68u: goto label_1e6d68;
        default: break;
    }

    ctx->pc = 0x1e6cb0u;

    // 0x1e6cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6cbc: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1E6CBCu;
    ctx->pc = 0x1E6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CBCu;
    // 0x1e6cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    ctx->pc = 0x1E6CC4u;
    // 0x1e6cc4: 0x0  nop
    ctx->pc = 0x1e6cc4u;
    // NOP
    // 0x1e6cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6cd0: 0xc07eb2a  jal         func_1FACA8
    ctx->pc = 0x1E6CD0u;
    SET_GPR_U32(ctx, 31, 0x1E6CD8u);
    ctx->pc = 0x1FACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACA8u, 0x1E6CD0u, 0x1E6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CD8u;
label_1e6cd8:
    // 0x1e6cd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e6cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e6cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e6ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CE4u;
        // 0x1e6ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6CECu;
    // 0x1e6cec: 0x0  nop
    ctx->pc = 0x1e6cecu;
    // NOP
label_1e6cf0:
    // 0x1e6cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6cfc: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1e6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1e6d00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6D00u;
    {
        const bool branch_taken_0x1e6d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D00u;
        // 0x1e6d04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d00) {
            ctx->pc = 0x1E6D10u;
            goto label_1e6d10;
        }
    }
    ctx->pc = 0x1E6D08u;
    // 0x1e6d08: 0x8079b46  j           func_1E6D18
    ctx->pc = 0x1E6D08u;
    ctx->pc = 0x1E6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D08u;
    // 0x1e6d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D18u;
    goto label_1e6d18;
    ctx->pc = 0x1E6D10u;
label_1e6d10:
    // 0x1e6d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D10u;
        // 0x1e6d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6D18u;
label_1e6d18:
    // 0x1e6d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6d1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e6d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e6d2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e6d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e6d34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e6d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6d38: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1e6d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1e6d3c: 0x0  nop
    ctx->pc = 0x1e6d3cu;
    // NOP
label_1e6d40:
    // 0x1e6d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E6D40u;
    {
        const bool branch_taken_0x1e6d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D40u;
        // 0x1e6d44: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d40) {
            ctx->pc = 0x1E6D74u;
            goto label_1e6d74;
        }
    }
    ctx->pc = 0x1E6D48u;
    // 0x1e6d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6d4c: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D54u);
    ctx->pc = 0x1E6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D4Cu;
    // 0x1e6d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7900u, 0x1E6D4Cu, 0x1E6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D54u;
label_1e6d54:
    // 0x1e6d54: 0xc06d03c  jal         func_1B40F0
    ctx->pc = 0x1E6D54u;
    SET_GPR_U32(ctx, 31, 0x1E6D5Cu);
    ctx->pc = 0x1B40F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40F0u, 0x1E6D54u, 0x1E6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D5Cu;
label_1e6d5c:
    // 0x1e6d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d60: 0xc079e40  jal         func_1E7900
    ctx->pc = 0x1E6D60u;
    SET_GPR_U32(ctx, 31, 0x1E6D68u);
    ctx->pc = 0x1E6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D60u;
    // 0x1e6d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7900u, 0x1E6D60u, 0x1E6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D68u;
label_1e6d68:
    // 0x1e6d68: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1e6d6c: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E6D6Cu;
    {
        const bool branch_taken_0x1e6d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1E6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D6Cu;
        // 0x1e6d70: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d6c) {
            ctx->pc = 0x1E6D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e6d40;
        }
    }
    ctx->pc = 0x1E6D74u;
label_1e6d74:
    // 0x1e6d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e6d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6d80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e6d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D84u;
        // 0x1e6d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6D8Cu;
    // 0x1e6d8c: 0x0  nop
    ctx->pc = 0x1e6d8cu;
    // NOP
}
