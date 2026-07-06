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

// Function: sub_001B6300
// Address: 0x1b6300 - 0x1b6330
void sub_001B6300_0x1b6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6300_0x1b6300");
#endif

    ctx->pc = 0x1b6300u;

    // 0x1b6300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6308: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b630c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6310: 0x806ae88  j           func_1ABA20
    ctx->pc = 0x1B6310u;
    ctx->pc = 0x1B6314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6310u;
    // 0x1b6314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA20u, 0x1B6310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6318u;
    // 0x1b6318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b631c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6320: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6328: 0x806ae86  j           func_1ABA18
    ctx->pc = 0x1B6328u;
    ctx->pc = 0x1B632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6328u;
    // 0x1b632c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA18u, 0x1B6328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6330u;
}
