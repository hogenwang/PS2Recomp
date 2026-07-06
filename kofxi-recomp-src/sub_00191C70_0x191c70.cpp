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

// Function: sub_00191C70
// Address: 0x191c70 - 0x191ca0
void sub_00191C70_0x191c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191C70_0x191c70");
#endif

    switch (ctx->pc) {
        case 0x191c84u: goto label_191c84;
        case 0x191c94u: goto label_191c94;
        default: break;
    }

    ctx->pc = 0x191c70u;

    // 0x191c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191c74: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x191c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191c7c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x191C7Cu;
    SET_GPR_U32(ctx, 31, 0x191C84u);
    ctx->pc = 0x191C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C7Cu;
    // 0x191c80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x191C7Cu, 0x191C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C84u;
label_191c84:
    // 0x191c84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x191c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191c8c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x191C8Cu;
    SET_GPR_U32(ctx, 31, 0x191C94u);
    ctx->pc = 0x191C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C8Cu;
    // 0x191c90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x191C8Cu, 0x191C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C94u;
label_191c94:
    // 0x191c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191c98: 0x3e00008  jr          $ra
    ctx->pc = 0x191C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C98u;
        // 0x191c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191CA0u;
}
