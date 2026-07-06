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

// Function: sub_00262808
// Address: 0x262808 - 0x262830
void sub_00262808_0x262808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262808_0x262808");
#endif

    switch (ctx->pc) {
        case 0x262810u: goto label_262810;
        default: break;
    }

    ctx->pc = 0x262808u;

    // 0x262808: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x26280c: 0x8c43d778  lw          $v1, -0x2888($v0)
    ctx->pc = 0x26280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956920)));
label_262810:
    // 0x262810: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262810u;
    {
        const bool branch_taken_0x262810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262810) {
            ctx->pc = 0x262824u;
            goto label_262824;
        }
    }
    ctx->pc = 0x262818u;
    // 0x262818: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26281c: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x26281Cu;
    {
        const bool branch_taken_0x26281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x26281c) {
            ctx->pc = 0x262820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26281Cu;
            // 0x262820: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262810;
        }
    }
    ctx->pc = 0x262824u;
label_262824:
    // 0x262824: 0x3e00008  jr          $ra
    ctx->pc = 0x262824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262824u;
        // 0x262828: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26282Cu;
    // 0x26282c: 0x0  nop
    ctx->pc = 0x26282cu;
    // NOP
}
