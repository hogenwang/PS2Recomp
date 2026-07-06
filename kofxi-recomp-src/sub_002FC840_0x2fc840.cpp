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

// Function: sub_002FC840
// Address: 0x2fc840 - 0x2fc880
void sub_002FC840_0x2fc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC840_0x2fc840");
#endif

    switch (ctx->pc) {
        case 0x2fc850u: goto label_2fc850;
        case 0x2fc870u: goto label_2fc870;
        default: break;
    }

    ctx->pc = 0x2fc840u;

    // 0x2fc840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc848: 0xc09765c  jal         func_25D970
    ctx->pc = 0x2FC848u;
    SET_GPR_U32(ctx, 31, 0x2FC850u);
    ctx->pc = 0x25D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D970u, 0x2FC848u, 0x2FC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC850u;
label_2fc850:
    // 0x2fc850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc854: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC854u;
        // 0x2fc858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC85Cu;
    // 0x2fc85c: 0x0  nop
    ctx->pc = 0x2fc85cu;
    // NOP
    // 0x2fc860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc868: 0xc097688  jal         func_25DA20
    ctx->pc = 0x2FC868u;
    SET_GPR_U32(ctx, 31, 0x2FC870u);
    ctx->pc = 0x25DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA20u, 0x2FC868u, 0x2FC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC870u;
label_2fc870:
    // 0x2fc870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc874: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC874u;
        // 0x2fc878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC87Cu;
    // 0x2fc87c: 0x0  nop
    ctx->pc = 0x2fc87cu;
    // NOP
}
