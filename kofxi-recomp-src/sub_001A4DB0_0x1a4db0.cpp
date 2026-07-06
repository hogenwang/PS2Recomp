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

// Function: sub_001A4DB0
// Address: 0x1a4db0 - 0x1a4e80
void sub_001A4DB0_0x1a4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4DB0_0x1a4db0");
#endif

    switch (ctx->pc) {
        case 0x1a4dc4u: goto label_1a4dc4;
        default: break;
    }

    ctx->pc = 0x1a4db0u;

    // 0x1a4db0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a4db4: 0x8c67b8f0  lw          $a3, -0x4710($v1)
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949104)));
    // 0x1a4db8: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A4DB8u;
    {
        const bool branch_taken_0x1a4db8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4db8) {
            ctx->pc = 0x1A4E70u;
            goto label_1a4e70;
        }
    }
    ctx->pc = 0x1A4DC0u;
    // 0x1a4dc0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1a4dc4:
    // 0x1a4dc4: 0x54640027  bnel        $v1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4DC4u;
    {
        const bool branch_taken_0x1a4dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a4dc4) {
            ctx->pc = 0x1A4DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4DC4u;
            // 0x1a4dc8: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E64u;
            goto label_1a4e64;
        }
    }
    ctx->pc = 0x1A4DCCu;
    // 0x1a4dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4dd0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x1a4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x1a4dd4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1a4dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a4dd8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4DD8u;
    {
        const bool branch_taken_0x1a4dd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DD8u;
        // 0x1a4ddc: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dd8) {
            ctx->pc = 0x1A4E14u;
            goto label_1a4e14;
        }
    }
    ctx->pc = 0x1A4DE0u;
    // 0x1a4de0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a4de4: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4E14u;
            goto label_1a4e14;
        }
    }
    ctx->pc = 0x1A4DECu;
    // 0x1a4dec: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a4df0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a4df4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a4df8: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1a4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1a4dfc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a4e00: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4E00u;
    {
        const bool branch_taken_0x1a4e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E00u;
        // 0x1a4e04: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e00) {
            ctx->pc = 0x1A4E0Cu;
            goto label_1a4e0c;
        }
    }
    ctx->pc = 0x1A4E08u;
    // 0x1a4e08: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1a4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1a4e0c:
    // 0x1a4e0c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x1a4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x1a4e10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1a4e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e14:
    // 0x1a4e14: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A4E14u;
    {
        const bool branch_taken_0x1a4e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e14) {
            ctx->pc = 0x1A4E70u;
            goto label_1a4e70;
        }
    }
    ctx->pc = 0x1A4E1Cu;
    // 0x1a4e1c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a4e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4e24: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A4E24u;
    {
        const bool branch_taken_0x1a4e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4e24) {
            ctx->pc = 0x1A4E70u;
            goto label_1a4e70;
        }
    }
    ctx->pc = 0x1A4E2Cu;
    // 0x1a4e2c: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1a4e30: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a4e34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a4e38: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x1a4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x1a4e3c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4e40: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1a4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1a4e44: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4e48: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E48u;
    {
        const bool branch_taken_0x1a4e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e48) {
            ctx->pc = 0x1A4E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E48u;
            // 0x1a4e4c: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E58u;
            goto label_1a4e58;
        }
    }
    ctx->pc = 0x1A4E50u;
    // 0x1a4e50: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1a4e54: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1a4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1a4e58:
    // 0x1a4e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4E58u;
    {
        const bool branch_taken_0x1a4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e58) {
            ctx->pc = 0x1A4E70u;
            goto label_1a4e70;
        }
    }
    ctx->pc = 0x1A4E60u;
    // 0x1a4e60: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1a4e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1a4e64:
    // 0x1a4e64: 0x54e0ffd7  bnel        $a3, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A4E64u;
    {
        const bool branch_taken_0x1a4e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e64) {
            ctx->pc = 0x1A4E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E64u;
            // 0x1a4e68: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4dc4;
        }
    }
    ctx->pc = 0x1A4E6Cu;
    // 0x1a4e6c: 0x0  nop
    ctx->pc = 0x1a4e6cu;
    // NOP
label_1a4e70:
    // 0x1a4e70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E78u;
    // 0x1a4e78: 0x0  nop
    ctx->pc = 0x1a4e78u;
    // NOP
    // 0x1a4e7c: 0x0  nop
    ctx->pc = 0x1a4e7cu;
    // NOP
}
