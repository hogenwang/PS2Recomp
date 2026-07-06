#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297FD0
// Address: 0x297fd0 - 0x297fd8
void sub_00297FD0_0x297fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297FD0_0x297fd0");
#endif

    ctx->pc = 0x297fd0u;

    // 0x297fd0: 0x80a513c  j           func_2944F0
    ctx->pc = 0x297FD0u;
    ctx->pc = 0x297FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297FD0u;
            // 0x297fd4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002944F0_0x2944f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x297FD8u;
    ctx->pc = 0x297fd8u;
}
