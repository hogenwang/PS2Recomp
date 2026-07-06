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

// Function: sub_001CC060
// Address: 0x1cc060 - 0x1cc090
void sub_001CC060_0x1cc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC060_0x1cc060");
#endif

    switch (ctx->pc) {
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc080u: goto label_1cc080;
        default: break;
    }

    ctx->pc = 0x1cc060u;

    // 0x1cc060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc068: 0xc0729e0  jal         func_1CA780
    ctx->pc = 0x1CC068u;
    SET_GPR_U32(ctx, 31, 0x1CC070u);
    ctx->pc = 0x1CA780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA780u, 0x1CC068u, 0x1CC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC070u;
label_1cc070:
    // 0x1cc070: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC070u;
    SET_GPR_U32(ctx, 31, 0x1CC078u);
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC070u, 0x1CC078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC078u;
label_1cc078:
    // 0x1cc078: 0xc073024  jal         func_1CC090
    ctx->pc = 0x1CC078u;
    SET_GPR_U32(ctx, 31, 0x1CC080u);
    ctx->pc = 0x1CC090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC090u, 0x1CC078u, 0x1CC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC080u;
label_1cc080:
    // 0x1cc080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc084: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CC084u;
    ctx->pc = 0x1CC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC084u;
    // 0x1cc088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC08Cu;
    // 0x1cc08c: 0x0  nop
    ctx->pc = 0x1cc08cu;
    // NOP
    if (ctx->pc == 0x1cc08cu) { ctx->pc = 0x1cc090u; }
}
