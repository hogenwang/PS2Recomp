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

// Function: sub_001DC440
// Address: 0x1dc440 - 0x1dc458
void sub_001DC440_0x1dc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC440_0x1dc440");
#endif

    ctx->pc = 0x1dc440u;

    // 0x1dc440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc44c: 0x8074030  j           func_1D00C0
    ctx->pc = 0x1DC44Cu;
    ctx->pc = 0x1DC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC44Cu;
    // 0x1dc450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00C0u, 0x1DC44Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC454u;
    // 0x1dc454: 0x0  nop
    ctx->pc = 0x1dc454u;
    // NOP
    if (ctx->pc == 0x1dc454u) { ctx->pc = 0x1dc458u; }
}
