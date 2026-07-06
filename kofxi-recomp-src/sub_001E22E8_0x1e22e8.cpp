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

// Function: sub_001E22E8
// Address: 0x1e22e8 - 0x1e2300
void sub_001E22E8_0x1e22e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E22E8_0x1e22e8");
#endif

    ctx->pc = 0x1e22e8u;

    // 0x1e22e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e22e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e22ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e22ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e22f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e22f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22f4: 0x80787c4  j           func_1E1F10
    ctx->pc = 0x1E22F4u;
    ctx->pc = 0x1E22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22F4u;
    // 0x1e22f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1F10u, 0x1E22F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E22FCu;
    // 0x1e22fc: 0x0  nop
    ctx->pc = 0x1e22fcu;
    // NOP
    if (ctx->pc == 0x1e22fcu) { ctx->pc = 0x1e2300u; }
}
