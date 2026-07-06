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

// Function: sub_001E22D0
// Address: 0x1e22d0 - 0x1e22e8
void sub_001E22D0_0x1e22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E22D0_0x1e22d0");
#endif

    ctx->pc = 0x1e22d0u;

    // 0x1e22d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e22d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e22d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e22d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22dc: 0x80787a0  j           func_1E1E80
    ctx->pc = 0x1E22DCu;
    ctx->pc = 0x1E22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22DCu;
    // 0x1e22e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1E80u, 0x1E22DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E22E4u;
    // 0x1e22e4: 0x0  nop
    ctx->pc = 0x1e22e4u;
    // NOP
}
