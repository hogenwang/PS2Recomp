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

// Function: kofxiGetDeferredCallbackQueueBase
// Address: 0x1ce918 - 0x1ce928
void kofxiGetDeferredCallbackQueueBase_0x1ce918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiGetDeferredCallbackQueueBase_0x1ce918");
#endif

    ctx->pc = 0x1ce918u;

    // 0x1ce918: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1ce91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE91Cu;
        // 0x1ce920: 0x24427d60  addiu       $v0, $v0, 0x7D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE924u;
    // 0x1ce924: 0x0  nop
    ctx->pc = 0x1ce924u;
    // NOP
}
