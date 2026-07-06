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

// Function: sub_00201938
// Address: 0x201938 - 0x201948
void sub_00201938_0x201938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201938_0x201938");
#endif

    ctx->pc = 0x201938u;

    // 0x201938: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20193c: 0x3e00008  jr          $ra
    ctx->pc = 0x20193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20193Cu;
        // 0x201940: 0xac44190c  sw          $a0, 0x190C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20193Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201944u;
    // 0x201944: 0x0  nop
    ctx->pc = 0x201944u;
    // NOP
    if (ctx->pc == 0x201944u) { ctx->pc = 0x201948u; }
}
