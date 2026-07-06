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

// Function: sub_00227D00
// Address: 0x227d00 - 0x227d10
void sub_00227D00_0x227d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D00_0x227d00");
#endif

    ctx->pc = 0x227d00u;

    // 0x227d00: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227d00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227d04: 0x8deef200  lw          $t6, -0xE00($t7)
    ctx->pc = 0x227d04u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227d08: 0x3e00008  jr          $ra
    ctx->pc = 0x227D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D08u;
        // 0x227d0c: 0xadc40324  sw          $a0, 0x324($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 804), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D10u;
}
