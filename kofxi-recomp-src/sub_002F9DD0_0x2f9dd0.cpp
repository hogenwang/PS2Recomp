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

// Function: sub_002F9DD0
// Address: 0x2f9dd0 - 0x2f9e90
void sub_002F9DD0_0x2f9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9DD0_0x2f9dd0");
#endif

    switch (ctx->pc) {
        case 0x2f9e2cu: goto label_2f9e2c;
        case 0x2f9e58u: goto label_2f9e58;
        default: break;
    }

    ctx->pc = 0x2f9dd0u;

    // 0x2f9dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f9dd4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9dd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f9ddc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2f9de0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f9de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f9de4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f9de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9de8: 0x8c46065c  lw          $a2, 0x65C($v0)
    ctx->pc = 0x2f9de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2f9dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9df0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f9df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f9df4: 0x24639360  addiu       $v1, $v1, -0x6CA0
    ctx->pc = 0x2f9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939488));
    // 0x2f9df8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9DF8u;
    {
        const bool branch_taken_0x2f9df8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DF8u;
        // 0x2f9dfc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9df8) {
            ctx->pc = 0x2F9E10u;
            goto label_2f9e10;
        }
    }
    ctx->pc = 0x2F9E00u;
    // 0x2f9e00: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F9E00u;
    {
        const bool branch_taken_0x2f9e00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E00u;
        // 0x2f9e04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e00) {
            ctx->pc = 0x2F9E60u;
            goto label_2f9e60;
        }
    }
    ctx->pc = 0x2F9E08u;
    // 0x2f9e08: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9E08u;
    {
        const bool branch_taken_0x2f9e08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E08u;
        // 0x2f9e0c: 0x3c1001cb  lui         $s0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e08) {
            ctx->pc = 0x2F9E18u;
            goto label_2f9e18;
        }
    }
    ctx->pc = 0x2F9E10u;
label_2f9e10:
    // 0x2f9e10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9E10u;
    {
        const bool branch_taken_0x2f9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E10u;
        // 0x2f9e14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e10) {
            ctx->pc = 0x2F9E60u;
            goto label_2f9e60;
        }
    }
    ctx->pc = 0x2F9E18u;
label_2f9e18:
    // 0x2f9e18: 0x8e0406c0  lw          $a0, 0x6C0($s0)
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1728)));
    // 0x2f9e1c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9E1Cu;
    {
        const bool branch_taken_0x2f9e1c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E1Cu;
        // 0x2f9e20: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e1c) {
            ctx->pc = 0x2F9E30u;
            goto label_2f9e30;
        }
    }
    ctx->pc = 0x2F9E24u;
    // 0x2f9e24: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F9E24u;
    SET_GPR_U32(ctx, 31, 0x2F9E2Cu);
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F9E24u, 0x2F9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E2Cu;
label_2f9e2c:
    // 0x2f9e2c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
label_2f9e30:
    // 0x2f9e30: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9e34: 0x8c6206c4  lw          $v0, 0x6C4($v1)
    ctx->pc = 0x2f9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1732)));
    // 0x2f9e38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f9e3c: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x2f9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2f9e40: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2f9e44: 0x8e0406c0  lw          $a0, 0x6C0($s0)
    ctx->pc = 0x2f9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1728)));
    // 0x2f9e48: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9E48u;
    {
        const bool branch_taken_0x2f9e48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E48u;
        // 0x2f9e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e48) {
            ctx->pc = 0x2F9E60u;
            goto label_2f9e60;
        }
    }
    ctx->pc = 0x2F9E50u;
    // 0x2f9e50: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F9E50u;
    SET_GPR_U32(ctx, 31, 0x2F9E58u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F9E50u, 0x2F9E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E58u;
label_2f9e58:
    // 0x2f9e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e5c: 0x0  nop
    ctx->pc = 0x2f9e5cu;
    // NOP
label_2f9e60:
    // 0x2f9e60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f9e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9e64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f9e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9e68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f9e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E70u;
        // 0x2f9e74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9E78u;
    // 0x2f9e78: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2f9e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E7Cu;
        // 0x2f9e80: 0x8c620690  lw          $v0, 0x690($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9E84u;
    // 0x2f9e84: 0x0  nop
    ctx->pc = 0x2f9e84u;
    // NOP
    // 0x2f9e88: 0x80be45e  j           func_2F9178
    ctx->pc = 0x2F9E88u;
    ctx->pc = 0x2F9178u;
    sub_002F9178_0x2f9178(rdram, ctx, runtime); return;
    ctx->pc = 0x2F9E90u;
}
