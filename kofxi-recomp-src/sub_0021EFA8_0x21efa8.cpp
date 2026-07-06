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

// Function: sub_0021EFA8
// Address: 0x21efa8 - 0x21efb8
void sub_0021EFA8_0x21efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EFA8_0x21efa8");
#endif

    ctx->pc = 0x21efa8u;

    // 0x21efa8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21efa8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21efac: 0x3e00008  jr          $ra
    ctx->pc = 0x21EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFACu;
        // 0x21efb0: 0x8de2b7e8  lw          $v0, -0x4818($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294948840)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EFB4u;
    // 0x21efb4: 0x0  nop
    ctx->pc = 0x21efb4u;
    // NOP
    if (ctx->pc == 0x21efb4u) { ctx->pc = 0x21efb8u; }
}
