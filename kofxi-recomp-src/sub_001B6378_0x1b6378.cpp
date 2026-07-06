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

// Function: sub_001B6378
// Address: 0x1b6378 - 0x1b6390
void sub_001B6378_0x1b6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6378_0x1b6378");
#endif

    ctx->pc = 0x1b6378u;

    // 0x1b6378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b637c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6380: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6388: 0x806ae92  j           func_1ABA48
    ctx->pc = 0x1B6388u;
    ctx->pc = 0x1B638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6388u;
    // 0x1b638c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA48u, 0x1B6388u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6390u;
}
