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

// Function: sub_001B4BC8
// Address: 0x1b4bc8 - 0x1b4be0
void sub_001B4BC8_0x1b4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4BC8_0x1b4bc8");
#endif

    ctx->pc = 0x1b4bc8u;

    // 0x1b4bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4bd4: 0x80727a8  j           func_1C9EA0
    ctx->pc = 0x1B4BD4u;
    ctx->pc = 0x1B4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4BD4u;
    // 0x1b4bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9EA0u, 0x1B4BD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4BDCu;
    // 0x1b4bdc: 0x0  nop
    ctx->pc = 0x1b4bdcu;
    // NOP
}
