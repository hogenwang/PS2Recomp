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

// Function: kofxiSetSchedulerState
// Address: 0x1b2718 - 0x1b2728
void kofxiSetSchedulerState_0x1b2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSetSchedulerState_0x1b2718");
#endif

    ctx->pc = 0x1b2718u;

    // 0x1b2718: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b271c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B271Cu;
        // 0x1b2720: 0xac442fe8  sw          $a0, 0x2FE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2724u;
    // 0x1b2724: 0x0  nop
    ctx->pc = 0x1b2724u;
    // NOP
    if (ctx->pc == 0x1b2724u) { ctx->pc = 0x1b2728u; }
}
