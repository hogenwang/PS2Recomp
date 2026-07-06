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

// Function: sub_001B4CC0
// Address: 0x1b4cc0 - 0x1b4cd8
void sub_001B4CC0_0x1b4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4CC0_0x1b4cc0");
#endif

    ctx->pc = 0x1b4cc0u;

    // 0x1b4cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ccc: 0x80728ce  j           func_1CA338
    ctx->pc = 0x1B4CCCu;
    ctx->pc = 0x1B4CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CCCu;
    // 0x1b4cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA338u, 0x1B4CCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4CD4u;
    // 0x1b4cd4: 0x0  nop
    ctx->pc = 0x1b4cd4u;
    // NOP
}
