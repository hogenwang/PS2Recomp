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

// Function: sub_00298E98
// Address: 0x298e98 - 0x298ea8
void sub_00298E98_0x298e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298E98_0x298e98");
#endif

    ctx->pc = 0x298e98u;

    // 0x298e98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x298e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x298e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x298E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E9Cu;
        // 0x298ea0: 0x24424d98  addiu       $v0, $v0, 0x4D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EA4u;
    // 0x298ea4: 0x0  nop
    ctx->pc = 0x298ea4u;
    // NOP
    if (ctx->pc == 0x298ea4u) { ctx->pc = 0x298ea8u; }
}
