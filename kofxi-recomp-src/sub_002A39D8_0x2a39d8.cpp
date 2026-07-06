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

// Function: sub_002A39D8
// Address: 0x2a39d8 - 0x2a39e8
void sub_002A39D8_0x2a39d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A39D8_0x2a39d8");
#endif

    ctx->pc = 0x2a39d8u;

    // 0x2a39d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a39dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A39DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39DCu;
        // 0x2a39e0: 0xac446a48  sw          $a0, 0x6A48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A39DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A39E4u;
    // 0x2a39e4: 0x0  nop
    ctx->pc = 0x2a39e4u;
    // NOP
}
