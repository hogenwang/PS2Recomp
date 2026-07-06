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

// Function: sub_002F1E70
// Address: 0x2f1e70 - 0x2f1ec8
void sub_002F1E70_0x2f1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E70_0x2f1e70");
#endif

    switch (ctx->pc) {
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e98u: goto label_2f1e98;
        default: break;
    }

    ctx->pc = 0x2f1e70u;

    // 0x2f1e70: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1E70u;
    {
        const bool branch_taken_0x2f1e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e70) {
            ctx->pc = 0x2F1E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1E70u;
            // 0x2f1e74: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1E88u;
            goto label_2f1e88;
        }
    }
    ctx->pc = 0x2F1E78u;
    // 0x2f1e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E78u;
        // 0x2f1e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1E80u;
label_2f1e80:
    // 0x2f1e80: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E80u;
        // 0x2f1e84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1E88u;
label_2f1e88:
    // 0x2f1e88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F1E88u;
    {
        const bool branch_taken_0x2f1e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E88u;
        // 0x2f1e8c: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e88) {
            ctx->pc = 0x2F1EBCu;
            goto label_2f1ebc;
        }
    }
    ctx->pc = 0x2F1E90u;
    // 0x2f1e90: 0x24a202e0  addiu       $v0, $a1, 0x2E0
    ctx->pc = 0x2f1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    // 0x2f1e94: 0x0  nop
    ctx->pc = 0x2f1e94u;
    // NOP
label_2f1e98:
    // 0x2f1e98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1e9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f1e9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1ea0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2f1ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f1ea4: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F1EA4u;
    {
        const bool branch_taken_0x2f1ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ea4) {
            ctx->pc = 0x2F1E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e80;
        }
    }
    ctx->pc = 0x2F1EACu;
    // 0x2f1eac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f1eb0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f1eb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1eb4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1EB4u;
    {
        const bool branch_taken_0x2f1eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EB4u;
        // 0x2f1eb8: 0x24a202e0  addiu       $v0, $a1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1eb4) {
            ctx->pc = 0x2F1E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e98;
        }
    }
    ctx->pc = 0x2F1EBCu;
label_2f1ebc:
    // 0x2f1ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EBCu;
        // 0x2f1ec0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1EC4u;
    // 0x2f1ec4: 0x0  nop
    ctx->pc = 0x2f1ec4u;
    // NOP
}
