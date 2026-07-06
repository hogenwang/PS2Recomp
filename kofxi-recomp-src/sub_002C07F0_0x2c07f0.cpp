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

// Function: sub_002C07F0
// Address: 0x2c07f0 - 0x2c0800
void sub_002C07F0_0x2c07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C07F0_0x2c07f0");
#endif

    ctx->pc = 0x2c07f0u;

    // 0x2c07f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c07f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C07F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07F4u;
        // 0x2c07f8: 0x2442ed00  addiu       $v0, $v0, -0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C07F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C07FCu;
    // 0x2c07fc: 0x0  nop
    ctx->pc = 0x2c07fcu;
    // NOP
    if (ctx->pc == 0x2c07fcu) { ctx->pc = 0x2c0800u; }
}
