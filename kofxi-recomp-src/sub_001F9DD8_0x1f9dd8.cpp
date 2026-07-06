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

// Function: sub_001F9DD8
// Address: 0x1f9dd8 - 0x1f9ea0
void sub_001F9DD8_0x1f9dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9DD8_0x1f9dd8");
#endif

    switch (ctx->pc) {
        case 0x1f9e08u: goto label_1f9e08;
        case 0x1f9e3cu: goto label_1f9e3c;
        default: break;
    }

    ctx->pc = 0x1f9dd8u;

    // 0x1f9dd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9ddc: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f9de0: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f9de4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f9de4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9de8: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F9DE8u;
    {
        const bool branch_taken_0x1f9de8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DE8u;
        // 0x1f9dec: 0x8c890010  lw          $t1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9de8) {
            ctx->pc = 0x1F9E98u;
            goto label_1f9e98;
        }
    }
    ctx->pc = 0x1F9DF0u;
    // 0x1f9df0: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9df4: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x1f9df4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f9df8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1f9df8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9dfc: 0xac682b  sltu        $t5, $a1, $t4
    ctx->pc = 0x1f9dfcu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x1f9e00: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1f9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1f9e04: 0x0  nop
    ctx->pc = 0x1f9e04u;
    // NOP
label_1f9e08:
    // 0x1f9e08: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1f9e0c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f9e10: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1f9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f9e14: 0xa3402b  sltu        $t0, $a1, $v1
    ctx->pc = 0x1f9e14u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f9e18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1f9e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9e1c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x1f9e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f9e20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9E20u;
    {
        const bool branch_taken_0x1f9e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E20u;
        // 0x1f9e24: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e20) {
            ctx->pc = 0x1F9E48u;
            goto label_1f9e48;
        }
    }
    ctx->pc = 0x1F9E28u;
    // 0x1f9e28: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F9E28u;
    {
        const bool branch_taken_0x1f9e28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E28u;
        // 0x1f9e2c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e28) {
            ctx->pc = 0x1F9E74u;
            goto label_1f9e74;
        }
    }
    ctx->pc = 0x1F9E30u;
    // 0x1f9e30: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1f9e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f9e34: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9E34u;
    {
        const bool branch_taken_0x1f9e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e34) {
            ctx->pc = 0x1F9E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9E34u;
            // 0x1f9e38: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9E74u;
            goto label_1f9e74;
        }
    }
    ctx->pc = 0x1F9E3Cu;
label_1f9e3c:
    // 0x1f9e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E3Cu;
        // 0x1f9e40: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9E44u;
    // 0x1f9e44: 0x0  nop
    ctx->pc = 0x1f9e44u;
    // NOP
label_1f9e48:
    // 0x1f9e48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9E48u;
    {
        const bool branch_taken_0x1f9e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e48) {
            ctx->pc = 0x1F9E58u;
            goto label_1f9e58;
        }
    }
    ctx->pc = 0x1F9E50u;
    // 0x1f9e50: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F9E50u;
    {
        const bool branch_taken_0x1f9e50 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e50) {
            ctx->pc = 0x1F9E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9e3c;
        }
    }
    ctx->pc = 0x1F9E58u;
label_1f9e58:
    // 0x1f9e58: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9E58u;
    {
        const bool branch_taken_0x1f9e58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E58u;
        // 0x1f9e5c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e58) {
            ctx->pc = 0x1F9E74u;
            goto label_1f9e74;
        }
    }
    ctx->pc = 0x1F9E60u;
    // 0x1f9e60: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x1f9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f9e64: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1f9e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9e68: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F9E68u;
    {
        const bool branch_taken_0x1f9e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e68) {
            ctx->pc = 0x1F9E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9e3c;
        }
    }
    ctx->pc = 0x1F9E70u;
    // 0x1f9e70: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1f9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1f9e74:
    // 0x1f9e74: 0x4b182a  slt         $v1, $v0, $t3
    ctx->pc = 0x1f9e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1f9e78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9E78u;
    {
        const bool branch_taken_0x1f9e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E78u;
        // 0x1f9e7c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e78) {
            ctx->pc = 0x1F9E88u;
            goto label_1f9e88;
        }
    }
    ctx->pc = 0x1F9E80u;
    // 0x1f9e80: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1f9e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f9e88:
    // 0x1f9e88: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1f9e88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e8c: 0x14e102a  slt         $v0, $t2, $t6
    ctx->pc = 0x1f9e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1f9e90: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1F9E90u;
    {
        const bool branch_taken_0x1f9e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e90) {
            ctx->pc = 0x1F9E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9E90u;
            // 0x1f9e94: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f9e08;
        }
    }
    ctx->pc = 0x1F9E98u;
label_1f9e98:
    // 0x1f9e98: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E98u;
        // 0x1f9e9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9EA0u;
}
