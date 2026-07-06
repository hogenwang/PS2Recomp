#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109630
// Address: 0x109630 - 0x109638
void sub_00109630_0x109630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109630_0x109630");
#endif

    ctx->pc = 0x109630u;

    // 0x109630: 0x8042534  j           func_1094D0
    ctx->pc = 0x109630u;
    ctx->pc = 0x109634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109630u;
            // 0x109634: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (runtime->hasFunction(0x1094D0u)) {
        auto targetFn = runtime->lookupFunction(0x1094D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001094D0_0x1094d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x109638u;
    ctx->pc = 0x109638u;
}
