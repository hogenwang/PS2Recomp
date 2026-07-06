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

// Function: sub_00122D78
// Address: 0x122d78 - 0x122e78
void sub_00122D78_0x122d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D78_0x122d78");
#endif

    switch (ctx->pc) {
        case 0x122dfcu: goto label_122dfc;
        case 0x122e00u: goto label_122e00;
        case 0x122e14u: goto label_122e14;
        default: break;
    }

    ctx->pc = 0x122d78u;

    // 0x122d78: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122d78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122d7c: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x122d7cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122d80: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122D80u;
    {
        const bool branch_taken_0x122d80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d80) {
            ctx->pc = 0x122D98u;
            goto label_122d98;
        }
    }
    ctx->pc = 0x122D88u;
    // 0x122d88: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x122d88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122d8c: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x122d8cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122d90: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x122D90u;
    {
        const bool branch_taken_0x122d90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D90u;
        // 0x122d94: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d90) {
            ctx->pc = 0x122DA0u;
            goto label_122da0;
        }
    }
    ctx->pc = 0x122D98u;
label_122d98:
    // 0x122d98: 0x3e00008  jr          $ra
    ctx->pc = 0x122D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D98u;
        // 0x122d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122DA0u;
label_122da0:
    // 0x122da0: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122DA0u;
    {
        const bool branch_taken_0x122da0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DA0u;
        // 0x122da4: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122da0) {
            ctx->pc = 0x122DC4u;
            goto label_122dc4;
        }
    }
    ctx->pc = 0x122DA8u;
    // 0x122da8: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x122da8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x122dac: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122DACu;
    {
        const bool branch_taken_0x122dac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DACu;
        // 0x122db0: 0x39cf0004  xori        $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dac) {
            ctx->pc = 0x122DC4u;
            goto label_122dc4;
        }
    }
    ctx->pc = 0x122DB4u;
    // 0x122db4: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x122db4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122db8: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x122db8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x122DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DBCu;
        // 0x122dc0: 0x1cf1023  subu        $v0, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122DC4u;
label_122dc4:
    // 0x122dc4: 0x51e00012  beql        $t7, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x122DC4u;
    {
        const bool branch_taken_0x122dc4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122dc4) {
            ctx->pc = 0x122DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122DC4u;
            // 0x122dc8: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122E10u;
            goto label_122e10;
        }
    }
    ctx->pc = 0x122DCCu;
    // 0x122dcc: 0x39af0004  xori        $t7, $t5, 0x4
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
    // 0x122dd0: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122DD0u;
    {
        const bool branch_taken_0x122dd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DD0u;
        // 0x122dd4: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dd0) {
            ctx->pc = 0x122DF4u;
            goto label_122df4;
        }
    }
    ctx->pc = 0x122DD8u;
    // 0x122dd8: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122DD8u;
    {
        const bool branch_taken_0x122dd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DD8u;
        // 0x122ddc: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dd8) {
            ctx->pc = 0x122E08u;
            goto label_122e08;
        }
    }
    ctx->pc = 0x122DE0u;
    // 0x122de0: 0x11e00022  beqz        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x122DE0u;
    {
        const bool branch_taken_0x122de0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DE0u;
        // 0x122de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122de0) {
            ctx->pc = 0x122E6Cu;
            goto label_122e6c;
        }
    }
    ctx->pc = 0x122DE8u;
    // 0x122de8: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x122de8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x122dec: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x122DECu;
    {
        const bool branch_taken_0x122dec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DECu;
        // 0x122df0: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dec) {
            ctx->pc = 0x122E08u;
            goto label_122e08;
        }
    }
    ctx->pc = 0x122DF4u;
label_122df4:
    // 0x122df4: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122dfc:
    // 0x122dfc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x122dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122e00:
    // 0x122e00: 0x3e00008  jr          $ra
    ctx->pc = 0x122E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E00u;
        // 0x122e04: 0x1ee100a  movz        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122E08u;
label_122e08:
    // 0x122e08: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x122E08u;
    {
        const bool branch_taken_0x122e08 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E08u;
        // 0x122e0c: 0x8c8e0004  lw          $t6, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e08) {
            ctx->pc = 0x122E1Cu;
            goto label_122e1c;
        }
    }
    ctx->pc = 0x122E10u;
label_122e10:
    // 0x122e10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122e14:
    // 0x122e14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x122E14u;
    {
        const bool branch_taken_0x122e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E14u;
        // 0x122e18: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e14) {
            ctx->pc = 0x122E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122e00;
        }
    }
    ctx->pc = 0x122E1Cu;
label_122e1c:
    // 0x122e1c: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x122e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122e20: 0x15cffffc  bne         $t6, $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x122E20u;
    {
        const bool branch_taken_0x122e20 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x122E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E20u;
        // 0x122e24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e20) {
            ctx->pc = 0x122E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122e14;
        }
    }
    ctx->pc = 0x122E28u;
    // 0x122e28: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x122e28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122e2c: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x122e2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x122e30: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x122e30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x122e34: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x122E34u;
    {
        const bool branch_taken_0x122e34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E34u;
        // 0x122e38: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e34) {
            ctx->pc = 0x122E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122e00;
        }
    }
    ctx->pc = 0x122E3Cu;
    // 0x122e3c: 0x18d782a  slt         $t7, $t4, $t5
    ctx->pc = 0x122e3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x122e40: 0x55e0ffee  bnel        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x122E40u;
    {
        const bool branch_taken_0x122e40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122e40) {
            ctx->pc = 0x122E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122E40u;
            // 0x122e44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122dfc;
        }
    }
    ctx->pc = 0x122E48u;
    // 0x122e48: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x122e48u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122e4c: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x122e4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x122e50: 0x8d782b  sltu        $t7, $a0, $t5
    ctx->pc = 0x122e50u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x122e54: 0x15e0ffea  bnez        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x122E54u;
    {
        const bool branch_taken_0x122e54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E54u;
        // 0x122e58: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e54) {
            ctx->pc = 0x122E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122e00;
        }
    }
    ctx->pc = 0x122E5Cu;
    // 0x122e5c: 0x1a4782b  sltu        $t7, $t5, $a0
    ctx->pc = 0x122e5cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x122e60: 0x55e0ffe6  bnel        $t7, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x122E60u;
    {
        const bool branch_taken_0x122e60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122e60) {
            ctx->pc = 0x122E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122E60u;
            // 0x122e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122dfc;
        }
    }
    ctx->pc = 0x122E68u;
    // 0x122e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122e6c:
    // 0x122e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x122E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122E74u;
    // 0x122e74: 0x0  nop
    ctx->pc = 0x122e74u;
    // NOP
}
