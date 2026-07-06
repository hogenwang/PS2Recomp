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

// Function: sub_001B6288
// Address: 0x1b6288 - 0x1b62a0
void sub_001B6288_0x1b6288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6288_0x1b6288");
#endif

    ctx->pc = 0x1b6288u;

    // 0x1b6288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b628c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6290: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6298: 0x806ae66  j           func_1AB998
    ctx->pc = 0x1B6298u;
    ctx->pc = 0x1B629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6298u;
    // 0x1b629c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB998u, 0x1B6298u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B62A0u;
}
