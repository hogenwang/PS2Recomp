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

// Function: sub_002F1E20
// Address: 0x2f1e20 - 0x2f1e70
void sub_002F1E20_0x2f1e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1E20_0x2f1e20");
#endif

    switch (ctx->pc) {
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e48u: goto label_2f1e48;
        default: break;
    }

    ctx->pc = 0x2f1e20u;

    // 0x2f1e20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1E20u;
    {
        const bool branch_taken_0x2f1e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e20) {
            ctx->pc = 0x2F1E34u;
            goto label_2f1e34;
        }
    }
    ctx->pc = 0x2F1E28u;
    // 0x2f1e28: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f1e28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1e2c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1E2Cu;
    {
        const bool branch_taken_0x2f1e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E2Cu;
        // 0x2f1e30: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e2c) {
            ctx->pc = 0x2F1E3Cu;
            goto label_2f1e3c;
        }
    }
    ctx->pc = 0x2F1E34u;
label_2f1e34:
    // 0x2f1e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E34u;
        // 0x2f1e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1E3Cu;
label_2f1e3c:
    // 0x2f1e3c: 0x244502e0  addiu       $a1, $v0, 0x2E0
    ctx->pc = 0x2f1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x2f1e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f1e44: 0x0  nop
    ctx->pc = 0x2f1e44u;
    // NOP
label_2f1e48:
    // 0x2f1e48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f1e48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f1e4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f1e50: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1E50u;
    {
        const bool branch_taken_0x2f1e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E50u;
        // 0x2f1e54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e50) {
            ctx->pc = 0x2F1E34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e34;
        }
    }
    ctx->pc = 0x2F1E58u;
    // 0x2f1e58: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f1e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1e5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F1E5Cu;
    {
        const bool branch_taken_0x2f1e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E5Cu;
        // 0x2f1e60: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e5c) {
            ctx->pc = 0x2F1E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e48;
        }
    }
    ctx->pc = 0x2F1E64u;
    // 0x2f1e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E64u;
        // 0x2f1e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1E6Cu;
    // 0x2f1e6c: 0x0  nop
    ctx->pc = 0x2f1e6cu;
    // NOP
}
