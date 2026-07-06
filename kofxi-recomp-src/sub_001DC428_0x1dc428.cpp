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

// Function: sub_001DC428
// Address: 0x1dc428 - 0x1dc440
void sub_001DC428_0x1dc428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC428_0x1dc428");
#endif

    ctx->pc = 0x1dc428u;

    // 0x1dc428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc434: 0x8074026  j           func_1D0098
    ctx->pc = 0x1DC434u;
    ctx->pc = 0x1DC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC434u;
    // 0x1dc438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0098u, 0x1DC434u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC43Cu;
    // 0x1dc43c: 0x0  nop
    ctx->pc = 0x1dc43cu;
    // NOP
    if (ctx->pc == 0x1dc43cu) { ctx->pc = 0x1dc440u; }
}
