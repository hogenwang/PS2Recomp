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

// Function: sub_001E6C80
// Address: 0x1e6c80 - 0x1e6cb0
void sub_001E6C80_0x1e6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6C80_0x1e6c80");
#endif

    ctx->pc = 0x1e6c80u;

    // 0x1e6c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6c84: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6c90: 0x80738ea  j           func_1CE3A8
    ctx->pc = 0x1E6C90u;
    ctx->pc = 0x1E6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C90u;
    // 0x1e6c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE3A8u, 0x1E6C90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E6C98u;
    // 0x1e6c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6ca4: 0x806cd96  j           func_1B3658
    ctx->pc = 0x1E6CA4u;
    ctx->pc = 0x1E6CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CA4u;
    // 0x1e6ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3658u;
    kofxiInstallGlobalDeferredCallbackSlot_0x1b3658(rdram, ctx, runtime); return;
    ctx->pc = 0x1E6CACu;
    // 0x1e6cac: 0x0  nop
    ctx->pc = 0x1e6cacu;
    // NOP
    if (ctx->pc == 0x1e6cacu) { ctx->pc = 0x1e6cb0u; }
}
