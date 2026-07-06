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

// Function: sub_0012E920
// Address: 0x12e920 - 0x12e930
void sub_0012E920_0x12e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E920_0x12e920");
#endif

    ctx->pc = 0x12e920u;

    // 0x12e920: 0x3e00008  jr          $ra
    ctx->pc = 0x12E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E920u;
        // 0x12e924: 0xa4800292  sh          $zero, 0x292($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E928u;
    // 0x12e928: 0x0  nop
    ctx->pc = 0x12e928u;
    // NOP
    // 0x12e92c: 0x0  nop
    ctx->pc = 0x12e92cu;
    // NOP
    if (ctx->pc == 0x12e92cu) { ctx->pc = 0x12e930u; }
}
