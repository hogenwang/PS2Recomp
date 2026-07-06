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

// Function: sub_00307FC0
// Address: 0x307fc0 - 0x3080a0
void sub_00307FC0_0x307fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307FC0_0x307fc0");
#endif

    switch (ctx->pc) {
        case 0x308028u: goto label_308028;
        default: break;
    }

    ctx->pc = 0x307fc0u;

    // 0x307fc0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x307fc4: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x307fc4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x307fc8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x307FC8u;
    {
        const bool branch_taken_0x307fc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x307FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FC8u;
        // 0x307fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fc8) {
            ctx->pc = 0x30800Cu;
            goto label_30800c;
        }
    }
    ctx->pc = 0x307FD0u;
    // 0x307fd0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x307fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x307fd4: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x307fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x307fd8: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x307fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x307fdc: 0xace347a8  sw          $v1, 0x47A8($a3)
    ctx->pc = 0x307fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18344), GPR_U32(ctx, 3));
    // 0x307fe0: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x307fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x307fe4: 0xace65998  sw          $a2, 0x5998($a3)
    ctx->pc = 0x307fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22936), GPR_U32(ctx, 6));
    // 0x307fe8: 0x8cc80050  lw          $t0, 0x50($a2)
    ctx->pc = 0x307fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x307fec: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x307fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x307ff0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x307ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x307ff4: 0xacc80050  sw          $t0, 0x50($a2)
    ctx->pc = 0x307ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 8));
    // 0x307ff8: 0x8ce75998  lw          $a3, 0x5998($a3)
    ctx->pc = 0x307ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 22936)));
    // 0x307ffc: 0x8ce7004c  lw          $a3, 0x4C($a3)
    ctx->pc = 0x307ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x308000: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x308004: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x308004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
    // 0x308008: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x308008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_30800c:
    // 0x30800c: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x30800cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308010: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x308010u;
    {
        const bool branch_taken_0x308010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x308010) {
            ctx->pc = 0x308078u;
            goto label_308078;
        }
    }
    ctx->pc = 0x308018u;
    // 0x308018: 0x3c0901d3  lui         $t1, 0x1D3
    ctx->pc = 0x308018u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)467 << 16));
    // 0x30801c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30801cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308020: 0x25295990  addiu       $t1, $t1, 0x5990
    ctx->pc = 0x308020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22928));
    // 0x308024: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x308024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_308028:
    // 0x308028: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x30802c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x308030: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x308030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x308034: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x308034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x308038: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x308038u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x30803c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308040: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308044: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x308044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x308048: 0x8cc70050  lw          $a3, 0x50($a2)
    ctx->pc = 0x308048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x30804c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x30804cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308050: 0xacc70050  sw          $a3, 0x50($a2)
    ctx->pc = 0x308050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 7));
    // 0x308054: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x308054u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x308058: 0x8ce7004c  lw          $a3, 0x4C($a3)
    ctx->pc = 0x308058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x30805c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x30805cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x308060: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x308060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
    // 0x308064: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x308064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308068: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x308068u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30806c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x30806Cu;
    {
        const bool branch_taken_0x30806c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x308070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30806Cu;
        // 0x308070: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30806c) {
            ctx->pc = 0x308028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308028;
        }
    }
    ctx->pc = 0x308074u;
    // 0x308074: 0x0  nop
    ctx->pc = 0x308074u;
    // NOP
label_308078:
    // 0x308078: 0x2ca300be  sltiu       $v1, $a1, 0xBE
    ctx->pc = 0x308078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)190) ? 1 : 0);
    // 0x30807c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30807Cu;
    {
        const bool branch_taken_0x30807c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30807c) {
            ctx->pc = 0x308080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30807Cu;
            // 0x308080: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308094u;
            goto label_308094;
        }
    }
    ctx->pc = 0x308084u;
    // 0x308084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308088: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x308088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30808c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x30808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x308090: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x308090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_308094:
    // 0x308094: 0x3e00008  jr          $ra
    ctx->pc = 0x308094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308094u;
        // 0x308098: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30809Cu;
    // 0x30809c: 0x0  nop
    ctx->pc = 0x30809cu;
    // NOP
}
