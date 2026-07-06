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

// Function: sub_001B4C78
// Address: 0x1b4c78 - 0x1b4c90
void sub_001B4C78_0x1b4c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C78_0x1b4c78");
#endif

    ctx->pc = 0x1b4c78u;

    // 0x1b4c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c84: 0x8072894  j           func_1CA250
    ctx->pc = 0x1B4C84u;
    ctx->pc = 0x1B4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4C84u;
    // 0x1b4c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA250u, 0x1B4C84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4C8Cu;
    // 0x1b4c8c: 0x0  nop
    ctx->pc = 0x1b4c8cu;
    // NOP
    if (ctx->pc == 0x1b4c8cu) { ctx->pc = 0x1b4c90u; }
}
