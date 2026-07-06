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

// Function: sub_00163D70
// Address: 0x163d70 - 0x163d80
void sub_00163D70_0x163d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163D70_0x163d70");
#endif

    ctx->pc = 0x163d70u;

    // 0x163d70: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163d74: 0x3e00008  jr          $ra
    ctx->pc = 0x163D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D74u;
        // 0x163d78: 0xac6047c0  sw          $zero, 0x47C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D7Cu;
    // 0x163d7c: 0x0  nop
    ctx->pc = 0x163d7cu;
    // NOP
}
