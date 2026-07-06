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

// Function: kofxiGetFrameCallbackState
// Address: 0x1ce9c0 - 0x1ce9d0
void kofxiGetFrameCallbackState_0x1ce9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiGetFrameCallbackState_0x1ce9c0");
#endif

    ctx->pc = 0x1ce9c0u;

    // 0x1ce9c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9C4u;
        // 0x1ce9c8: 0x2442e630  addiu       $v0, $v0, -0x19D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE9CCu;
    // 0x1ce9cc: 0x0  nop
    ctx->pc = 0x1ce9ccu;
    // NOP
    if (ctx->pc == 0x1ce9ccu) { ctx->pc = 0x1ce9d0u; }
}
