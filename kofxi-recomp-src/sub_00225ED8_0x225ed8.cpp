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

// Function: sub_00225ED8
// Address: 0x225ed8 - 0x225ee8
void sub_00225ED8_0x225ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225ED8_0x225ed8");
#endif

    ctx->pc = 0x225ed8u;

    // 0x225ed8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225edc: 0x3e00008  jr          $ra
    ctx->pc = 0x225EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EDCu;
        // 0x225ee0: 0xade0f1c0  sw          $zero, -0xE40($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225EE4u;
    // 0x225ee4: 0x0  nop
    ctx->pc = 0x225ee4u;
    // NOP
    if (ctx->pc == 0x225ee4u) { ctx->pc = 0x225ee8u; }
}
