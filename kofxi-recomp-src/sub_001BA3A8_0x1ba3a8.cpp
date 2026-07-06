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

// Function: sub_001BA3A8
// Address: 0x1ba3a8 - 0x1ba3b0
void sub_001BA3A8_0x1ba3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA3A8_0x1ba3a8");
#endif

    ctx->pc = 0x1ba3a8u;

    // 0x1ba3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A8u;
        // 0x1ba3ac: 0xa08500ad  sb          $a1, 0xAD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 173), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA3B0u;
}
