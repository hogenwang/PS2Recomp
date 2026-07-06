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

// Function: sub_002DF1C0
// Address: 0x2df1c0 - 0x2df1d8
void sub_002DF1C0_0x2df1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1C0_0x2df1c0");
#endif

    ctx->pc = 0x2df1c0u;

    // 0x2df1c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2df1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2df1c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2df1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2df1c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2df1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2df1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1CCu;
        // 0x2df1d0: 0xfc44e118  sd          $a0, -0x1EE8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294959384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF1D4u;
    // 0x2df1d4: 0x0  nop
    ctx->pc = 0x2df1d4u;
    // NOP
}
