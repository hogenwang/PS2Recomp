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

// Function: sub_00201E20
// Address: 0x201e20 - 0x201e38
void sub_00201E20_0x201e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E20_0x201e20");
#endif

    ctx->pc = 0x201e20u;

    // 0x201e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e2c: 0x8080b3c  j           func_202CF0
    ctx->pc = 0x201E2Cu;
    ctx->pc = 0x201E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E2Cu;
    // 0x201e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CF0u, 0x201E2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201E34u;
    // 0x201e34: 0x0  nop
    ctx->pc = 0x201e34u;
    // NOP
    if (ctx->pc == 0x201e34u) { ctx->pc = 0x201e38u; }
}
