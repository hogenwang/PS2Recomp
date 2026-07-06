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

// Function: sub_001E7858
// Address: 0x1e7858 - 0x1e7878
void sub_001E7858_0x1e7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7858_0x1e7858");
#endif

    switch (ctx->pc) {
        case 0x1e7868u: goto label_1e7868;
        default: break;
    }

    ctx->pc = 0x1e7858u;

    // 0x1e7858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e785c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7860: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7860u;
    SET_GPR_U32(ctx, 31, 0x1E7868u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E7860u, 0x1E7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7868u;
label_1e7868:
    // 0x1e7868: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1e7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1e786c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7870: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7870u;
        // 0x1e7874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7878u;
}
