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

// Function: sub_001E8FA8
// Address: 0x1e8fa8 - 0x1e8fd0
void sub_001E8FA8_0x1e8fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8FA8_0x1e8fa8");
#endif

    switch (ctx->pc) {
        case 0x1e8fb8u: goto label_1e8fb8;
        default: break;
    }

    ctx->pc = 0x1e8fa8u;

    // 0x1e8fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8fb0: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E8FB0u;
    SET_GPR_U32(ctx, 31, 0x1E8FB8u);
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E8FB0u, 0x1E8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FB8u;
label_1e8fb8:
    // 0x1e8fb8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1e8fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e8fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8fc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e8fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FC4u;
        // 0x1e8fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8FCCu;
    // 0x1e8fcc: 0x0  nop
    ctx->pc = 0x1e8fccu;
    // NOP
    if (ctx->pc == 0x1e8fccu) { ctx->pc = 0x1e8fd0u; }
}
