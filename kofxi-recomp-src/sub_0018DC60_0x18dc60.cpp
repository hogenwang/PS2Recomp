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

// Function: sub_0018DC60
// Address: 0x18dc60 - 0x18dc70
void sub_0018DC60_0x18dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DC60_0x18dc60");
#endif

    ctx->pc = 0x18dc60u;

    // 0x18dc60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18dc64: 0x3e00008  jr          $ra
    ctx->pc = 0x18DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC64u;
        // 0x18dc68: 0x8c42bbf8  lw          $v0, -0x4408($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949880)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DC6Cu;
    // 0x18dc6c: 0x0  nop
    ctx->pc = 0x18dc6cu;
    // NOP
}
