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

// Function: sub_002BF418
// Address: 0x2bf418 - 0x2bf438
void sub_002BF418_0x2bf418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF418_0x2bf418");
#endif

    switch (ctx->pc) {
        case 0x2bf42cu: goto label_2bf42c;
        default: break;
    }

    ctx->pc = 0x2bf418u;

    // 0x2bf418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf420: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2bf420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bf424: 0xc0b0340  jal         func_2C0D00
    ctx->pc = 0x2BF424u;
    SET_GPR_U32(ctx, 31, 0x2BF42Cu);
    ctx->pc = 0x2BF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF424u;
    // 0x2bf428: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D00u, 0x2BF424u, 0x2BF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF42Cu;
label_2bf42c:
    // 0x2bf42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf430: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF430u;
        // 0x2bf434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF438u;
}
