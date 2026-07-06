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

// Function: sub_001B4D80
// Address: 0x1b4d80 - 0x1b4dd8
void sub_001B4D80_0x1b4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D80_0x1b4d80");
#endif

    switch (ctx->pc) {
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4dc0u: goto label_1b4dc0;
        default: break;
    }

    ctx->pc = 0x1b4d80u;

    // 0x1b4d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d8c: 0x8072976  j           func_1CA5D8
    ctx->pc = 0x1B4D8Cu;
    ctx->pc = 0x1B4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D8Cu;
    // 0x1b4d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA5D8u, 0x1B4D8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4D94u;
    // 0x1b4d94: 0x0  nop
    ctx->pc = 0x1b4d94u;
    // NOP
    // 0x1b4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4DA0u;
    // 0x1b4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4DA8u;
label_1b4da8:
    // 0x1b4da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4db4: 0x807274a  j           func_1C9D28
    ctx->pc = 0x1B4DB4u;
    ctx->pc = 0x1B4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DB4u;
    // 0x1b4db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9D28u, 0x1B4DB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4DBCu;
    // 0x1b4dbc: 0x0  nop
    ctx->pc = 0x1b4dbcu;
    // NOP
label_1b4dc0:
    // 0x1b4dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4dcc: 0x807276a  j           func_1C9DA8
    ctx->pc = 0x1B4DCCu;
    ctx->pc = 0x1B4DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DCCu;
    // 0x1b4dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9DA8u, 0x1B4DCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4DD4u;
    // 0x1b4dd4: 0x0  nop
    ctx->pc = 0x1b4dd4u;
    // NOP
    if (ctx->pc == 0x1b4dd4u) { ctx->pc = 0x1b4dd8u; }
}
