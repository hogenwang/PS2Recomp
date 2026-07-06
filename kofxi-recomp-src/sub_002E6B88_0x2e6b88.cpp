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

// Function: sub_002E6B88
// Address: 0x2e6b88 - 0x2e6bb8
void sub_002E6B88_0x2e6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6B88_0x2e6b88");
#endif

    switch (ctx->pc) {
        case 0x2e6b98u: goto label_2e6b98;
        default: break;
    }

    ctx->pc = 0x2e6b88u;

    // 0x2e6b88: 0x24840038  addiu       $a0, $a0, 0x38
    ctx->pc = 0x2e6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2e6b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e6b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b94: 0x0  nop
    ctx->pc = 0x2e6b94u;
    // NOP
label_2e6b98:
    // 0x2e6b98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e6b9c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6B9Cu;
    {
        const bool branch_taken_0x2e6b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6B9Cu;
        // 0x2e6ba0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b9c) {
            ctx->pc = 0x2E6BB0u;
            goto label_2e6bb0;
        }
    }
    ctx->pc = 0x2E6BA4u;
    // 0x2e6ba4: 0x1860fffc  blez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E6BA4u;
    {
        const bool branch_taken_0x2e6ba4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2E6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BA4u;
        // 0x2e6ba8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ba4) {
            ctx->pc = 0x2E6B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6b98;
        }
    }
    ctx->pc = 0x2E6BACu;
    // 0x2e6bac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e6bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6bb0:
    // 0x2e6bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BB0u;
        // 0x2e6bb4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6BB8u;
}
