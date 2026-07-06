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

// Function: kofxiServiceDeferredCallbackSlots
// Address: 0x1c63f0 - 0x1c6418
void kofxiServiceDeferredCallbackSlots_0x1c63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiServiceDeferredCallbackSlots_0x1c63f0");
#endif

    switch (ctx->pc) {
        case 0x1c6400u: goto label_1c6400;
        case 0x1c6408u: goto label_1c6408;
        default: break;
    }

    ctx->pc = 0x1c63f0u;

    // 0x1c63f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c63f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c63f8: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C63F8u;
    SET_GPR_U32(ctx, 31, 0x1C6400u);
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C63F8u, 0x1C6400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6400u;
label_1c6400:
    // 0x1c6400: 0xc071906  jal         func_1C6418
    ctx->pc = 0x1C6400u;
    SET_GPR_U32(ctx, 31, 0x1C6408u);
    ctx->pc = 0x1C6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6418u, 0x1C6400u, 0x1C6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c640c: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C640Cu;
    ctx->pc = 0x1C6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C640Cu;
    // 0x1c6410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6414u;
    // 0x1c6414: 0x0  nop
    ctx->pc = 0x1c6414u;
    // NOP
    if (ctx->pc == 0x1c6414u) { ctx->pc = 0x1c6418u; }
}
