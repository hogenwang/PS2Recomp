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

// Function: sub_001E0CA0
// Address: 0x1e0ca0 - 0x1e0cf0
void sub_001E0CA0_0x1e0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0CA0_0x1e0ca0");
#endif

    switch (ctx->pc) {
        case 0x1e0cb4u: goto label_1e0cb4;
        case 0x1e0ce0u: goto label_1e0ce0;
        default: break;
    }

    ctx->pc = 0x1e0ca0u;

    // 0x1e0ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0cac: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0CACu;
    SET_GPR_U32(ctx, 31, 0x1E0CB4u);
    ctx->pc = 0x1E0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0CACu;
    // 0x1e0cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E0CACu, 0x1E0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0CB4u;
label_1e0cb4:
    // 0x1e0cb4: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x1e0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x1e0cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC4u;
        // 0x1e0cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CCCu;
    // 0x1e0ccc: 0x0  nop
    ctx->pc = 0x1e0cccu;
    // NOP
    // 0x1e0cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0cd8: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0CD8u;
    SET_GPR_U32(ctx, 31, 0x1E0CE0u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E0CD8u, 0x1E0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0CE0u;
label_1e0ce0:
    // 0x1e0ce0: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e0ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE8u;
        // 0x1e0cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0CF0u;
}
