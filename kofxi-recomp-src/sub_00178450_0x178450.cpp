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

// Function: sub_00178450
// Address: 0x178450 - 0x178460
void sub_00178450_0x178450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178450_0x178450");
#endif

    ctx->pc = 0x178450u;

    // 0x178450: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178454: 0x3e00008  jr          $ra
    ctx->pc = 0x178454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178454u;
        // 0x178458: 0xa060ace8  sb          $zero, -0x5318($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294946024), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17845Cu;
    // 0x17845c: 0x0  nop
    ctx->pc = 0x17845cu;
    // NOP
}
