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

// Function: sub_001B4C48
// Address: 0x1b4c48 - 0x1b4c78
void sub_001B4C48_0x1b4c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C48_0x1b4c48");
#endif

    ctx->pc = 0x1b4c48u;

    // 0x1b4c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c54: 0x8072858  j           func_1CA160
    ctx->pc = 0x1B4C54u;
    ctx->pc = 0x1B4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C54u;
    // 0x1b4c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA160u, 0x1B4C54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4C5Cu;
    // 0x1b4c5c: 0x0  nop
    ctx->pc = 0x1b4c5cu;
    // NOP
    // 0x1b4c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c6c: 0x8072882  j           func_1CA208
    ctx->pc = 0x1B4C6Cu;
    ctx->pc = 0x1B4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C6Cu;
    // 0x1b4c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA208u, 0x1B4C6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4C74u;
    // 0x1b4c74: 0x0  nop
    ctx->pc = 0x1b4c74u;
    // NOP
    if (ctx->pc == 0x1b4c74u) { ctx->pc = 0x1b4c78u; }
}
