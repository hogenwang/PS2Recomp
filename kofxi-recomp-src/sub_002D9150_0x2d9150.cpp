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

// Function: sub_002D9150
// Address: 0x2d9150 - 0x2d9190
void sub_002D9150_0x2d9150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9150_0x2d9150");
#endif

    switch (ctx->pc) {
        case 0x2d9160u: goto label_2d9160;
        default: break;
    }

    ctx->pc = 0x2d9150u;

    // 0x2d9150: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9150u;
    {
        const bool branch_taken_0x2d9150 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9150u;
        // 0x2d9154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9150) {
            ctx->pc = 0x2D9184u;
            goto label_2d9184;
        }
    }
    ctx->pc = 0x2D9158u;
    // 0x2d9158: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d915c: 0x0  nop
    ctx->pc = 0x2d915cu;
    // NOP
label_2d9160:
    // 0x2d9160: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2d9160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2d9164: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9164u;
    {
        const bool branch_taken_0x2d9164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9164u;
        // 0x2d9168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9164) {
            ctx->pc = 0x2D9188u;
            goto label_2d9188;
        }
    }
    ctx->pc = 0x2D916Cu;
    // 0x2d916c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d9170: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2d9170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d9174: 0x0  nop
    ctx->pc = 0x2d9174u;
    // NOP
    // 0x2d9178: 0x0  nop
    ctx->pc = 0x2d9178u;
    // NOP
    // 0x2d917c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D917Cu;
    {
        const bool branch_taken_0x2d917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d917c) {
            ctx->pc = 0x2D9180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D917Cu;
            // 0x2d9180: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9160;
        }
    }
    ctx->pc = 0x2D9184u;
label_2d9184:
    // 0x2d9184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9188:
    // 0x2d9188: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9190u;
}
