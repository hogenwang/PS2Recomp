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

// Function: kofxiInitDeferredCallbackQueueBase
// Address: 0x1ce928 - 0x1ce950
void kofxiInitDeferredCallbackQueueBase_0x1ce928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiInitDeferredCallbackQueueBase_0x1ce928");
#endif

    ctx->pc = 0x1ce928u;

    // 0x1ce928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce92c: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1ce930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce934: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ce938: 0x24638010  addiu       $v1, $v1, -0x7FF0
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934544));
    // 0x1ce93c: 0x2442bfe8  addiu       $v0, $v0, -0x4018
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950888));
    // 0x1ce940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce944: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ce944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ce948: 0x8073a66  j           func_1CE998
    ctx->pc = 0x1CE948u;
    ctx->pc = 0x1CE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE948u;
    // 0x1ce94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE998u, 0x1CE948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CE950u;
}
