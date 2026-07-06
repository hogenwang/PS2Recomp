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

// Function: sub_002BF4F8
// Address: 0x2bf4f8 - 0x2bf518
void sub_002BF4F8_0x2bf4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF4F8_0x2bf4f8");
#endif

    switch (ctx->pc) {
        case 0x2bf508u: goto label_2bf508;
        default: break;
    }

    ctx->pc = 0x2bf4f8u;

    // 0x2bf4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf500: 0xc0afd7a  jal         func_2BF5E8
    ctx->pc = 0x2BF500u;
    SET_GPR_U32(ctx, 31, 0x2BF508u);
    ctx->pc = 0x2BF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5E8u, 0x2BF500u, 0x2BF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF508u;
label_2bf508:
    // 0x2bf508: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bf508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bf50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf510: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF510u;
        // 0x2bf514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF518u;
}
