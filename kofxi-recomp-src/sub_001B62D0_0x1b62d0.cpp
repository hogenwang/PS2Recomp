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

// Function: sub_001B62D0
// Address: 0x1b62d0 - 0x1b6300
void sub_001B62D0_0x1b62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B62D0_0x1b62d0");
#endif

    ctx->pc = 0x1b62d0u;

    // 0x1b62d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b62d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b62d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b62d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b62d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b62dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b62dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62e0: 0x806ae82  j           func_1ABA08
    ctx->pc = 0x1B62E0u;
    ctx->pc = 0x1B62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62E0u;
    // 0x1b62e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA08u;
    sub_001ABA08_0x1aba08(rdram, ctx, runtime); return;
    ctx->pc = 0x1B62E8u;
    // 0x1b62e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b62ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b62ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b62f0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b62f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b62f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62f8: 0x806ae84  j           func_1ABA10
    ctx->pc = 0x1B62F8u;
    ctx->pc = 0x1B62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B62F8u;
    // 0x1b62fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABA10u, 0x1B62F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B6300u;
}
