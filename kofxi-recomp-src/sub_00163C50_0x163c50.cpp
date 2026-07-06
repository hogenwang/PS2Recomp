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

// Function: sub_00163C50
// Address: 0x163c50 - 0x163c80
void sub_00163C50_0x163c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C50_0x163c50");
#endif

    switch (ctx->pc) {
        case 0x163c60u: goto label_163c60;
        case 0x163c68u: goto label_163c68;
        default: break;
    }

    ctx->pc = 0x163c50u;

    // 0x163c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163c58: 0xc058f20  jal         func_163C80
    ctx->pc = 0x163C58u;
    SET_GPR_U32(ctx, 31, 0x163C60u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x163C58u, 0x163C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C60u;
label_163c60:
    // 0x163c60: 0xc058f38  jal         func_163CE0
    ctx->pc = 0x163C60u;
    SET_GPR_U32(ctx, 31, 0x163C68u);
    ctx->pc = 0x163CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CE0u, 0x163C60u, 0x163C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C68u;
label_163c68:
    // 0x163c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x163C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C6Cu;
        // 0x163c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C74u;
    // 0x163c74: 0x0  nop
    ctx->pc = 0x163c74u;
    // NOP
    // 0x163c78: 0x0  nop
    ctx->pc = 0x163c78u;
    // NOP
    // 0x163c7c: 0x0  nop
    ctx->pc = 0x163c7cu;
    // NOP
}
