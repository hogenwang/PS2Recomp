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

// Function: sub_001785C0
// Address: 0x1785c0 - 0x1785d0
void sub_001785C0_0x1785c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785C0_0x1785c0");
#endif

    ctx->pc = 0x1785c0u;

    // 0x1785c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1785c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1785c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1785C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785C4u;
        // 0x1785c8: 0xa464ad70  sh          $a0, -0x5290($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294946160), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785CCu;
    // 0x1785cc: 0x0  nop
    ctx->pc = 0x1785ccu;
    // NOP
    if (ctx->pc == 0x1785ccu) { ctx->pc = 0x1785d0u; }
}
