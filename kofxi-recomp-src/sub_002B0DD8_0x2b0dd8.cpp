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

// Function: sub_002B0DD8
// Address: 0x2b0dd8 - 0x2b0de8
void sub_002B0DD8_0x2b0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0DD8_0x2b0dd8");
#endif

    ctx->pc = 0x2b0dd8u;

    // 0x2b0dd8: 0xac86009c  sw          $a2, 0x9C($a0)
    ctx->pc = 0x2b0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 6));
    // 0x2b0ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DDCu;
        // 0x2b0de0: 0xac850098  sw          $a1, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0DE4u;
    // 0x2b0de4: 0x0  nop
    ctx->pc = 0x2b0de4u;
    // NOP
    if (ctx->pc == 0x2b0de4u) { ctx->pc = 0x2b0de8u; }
}
