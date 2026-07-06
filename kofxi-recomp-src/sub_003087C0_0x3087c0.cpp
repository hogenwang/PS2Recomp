#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003087C0
// Address: 0x3087c0 - 0x3087d0
void sub_003087C0_0x3087c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087C0_0x3087c0");
#endif

    ctx->pc = 0x3087c0u;

    // 0x3087c0: 0x80c21cc  j           func_308730
    ctx->pc = 0x3087C0u;
    ctx->pc = 0x3087C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3087C0u;
            // 0x3087c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308730u;
    if (runtime->hasFunction(0x308730u)) {
        auto targetFn = runtime->lookupFunction(0x308730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00308730_0x308730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3087C8u;
    // 0x3087c8: 0x0  nop
    ctx->pc = 0x3087c8u;
    // NOP
    // 0x3087cc: 0x0  nop
    ctx->pc = 0x3087ccu;
    // NOP
    ctx->pc = 0x3087d0u;
}
