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

// Function: sub_001B77F8
// Address: 0x1b77f8 - 0x1b7820
void sub_001B77F8_0x1b77f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B77F8_0x1b77f8");
#endif

    switch (ctx->pc) {
        case 0x1b7808u: goto label_1b7808;
        case 0x1b7810u: goto label_1b7810;
        default: break;
    }

    ctx->pc = 0x1b77f8u;

    // 0x1b77f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b77f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b77fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b77fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7800: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7800u;
    SET_GPR_U32(ctx, 31, 0x1B7808u);
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7800u, 0x1B7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7808u;
label_1b7808:
    // 0x1b7808: 0xc06de08  jal         func_1B7820
    ctx->pc = 0x1B7808u;
    SET_GPR_U32(ctx, 31, 0x1B7810u);
    ctx->pc = 0x1B7820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7820u, 0x1B7808u, 0x1B7810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7810u;
label_1b7810:
    // 0x1b7810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7814: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B7814u;
    ctx->pc = 0x1B7818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7814u;
    // 0x1b7818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B781Cu;
    // 0x1b781c: 0x0  nop
    ctx->pc = 0x1b781cu;
    // NOP
    if (ctx->pc == 0x1b781cu) { ctx->pc = 0x1b7820u; }
}
