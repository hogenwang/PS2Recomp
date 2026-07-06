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

// Function: sub_002A2940
// Address: 0x2a2940 - 0x2a2950
void sub_002A2940_0x2a2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2940_0x2a2940");
#endif

    ctx->pc = 0x2a2940u;

    // 0x2a2940: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a2944: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2944u;
        // 0x2a2948: 0xac446980  sw          $a0, 0x6980($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27008), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A294Cu;
    // 0x2a294c: 0x0  nop
    ctx->pc = 0x2a294cu;
    // NOP
    if (ctx->pc == 0x2a294cu) { ctx->pc = 0x2a2950u; }
}
