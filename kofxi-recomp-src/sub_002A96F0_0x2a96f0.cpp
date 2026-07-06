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

// Function: sub_002A96F0
// Address: 0x2a96f0 - 0x2a9700
void sub_002A96F0_0x2a96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A96F0_0x2a96f0");
#endif

    ctx->pc = 0x2a96f0u;

    // 0x2a96f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a96f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96F4u;
        // 0x2a96f8: 0xac446aac  sw          $a0, 0x6AAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27308), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A96F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A96FCu;
    // 0x2a96fc: 0x0  nop
    ctx->pc = 0x2a96fcu;
    // NOP
}
