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

// Function: sub_002A3980
// Address: 0x2a3980 - 0x2a3990
void sub_002A3980_0x2a3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3980_0x2a3980");
#endif

    ctx->pc = 0x2a3980u;

    // 0x2a3980: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a3984: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3984u;
        // 0x2a3988: 0xac446a44  sw          $a0, 0x6A44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A398Cu;
    // 0x2a398c: 0x0  nop
    ctx->pc = 0x2a398cu;
    // NOP
    if (ctx->pc == 0x2a398cu) { ctx->pc = 0x2a3990u; }
}
