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

// Function: sub_002B1898
// Address: 0x2b1898 - 0x2b18b0
void sub_002B1898_0x2b1898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1898_0x2b1898");
#endif

    ctx->pc = 0x2b1898u;

    // 0x2b1898: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2b1898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2b189c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2b189cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2b18a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2b18a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2b18a4: 0x8c6275f8  lw          $v0, 0x75F8($v1)
    ctx->pc = 0x2b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30200)));
    // 0x2b18a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B18A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18A8u;
        // 0x2b18ac: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B18A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B18B0u;
}
