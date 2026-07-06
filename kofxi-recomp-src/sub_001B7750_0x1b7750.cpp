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

// Function: sub_001B7750
// Address: 0x1b7750 - 0x1b7778
void sub_001B7750_0x1b7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7750_0x1b7750");
#endif

    switch (ctx->pc) {
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7768u: goto label_1b7768;
        default: break;
    }

    ctx->pc = 0x1b7750u;

    // 0x1b7750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7758: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7758u;
    SET_GPR_U32(ctx, 31, 0x1B7760u);
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7758u, 0x1B7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7760u;
label_1b7760:
    // 0x1b7760: 0xc06ddde  jal         func_1B7778
    ctx->pc = 0x1B7760u;
    SET_GPR_U32(ctx, 31, 0x1B7768u);
    ctx->pc = 0x1B7778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7778u, 0x1B7760u, 0x1B7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7768u;
label_1b7768:
    // 0x1b7768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b776c: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B776Cu;
    ctx->pc = 0x1B7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B776Cu;
    // 0x1b7770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7774u;
    // 0x1b7774: 0x0  nop
    ctx->pc = 0x1b7774u;
    // NOP
}
