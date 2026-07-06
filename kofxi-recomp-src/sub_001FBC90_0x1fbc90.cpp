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

// Function: sub_001FBC90
// Address: 0x1fbc90 - 0x1fbca0
void sub_001FBC90_0x1fbc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBC90_0x1fbc90");
#endif

    ctx->pc = 0x1fbc90u;

    // 0x1fbc90: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x1fbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x1fbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC94u;
        // 0x1fbc98: 0xac850144  sw          $a1, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBC9Cu;
    // 0x1fbc9c: 0x0  nop
    ctx->pc = 0x1fbc9cu;
    // NOP
}
