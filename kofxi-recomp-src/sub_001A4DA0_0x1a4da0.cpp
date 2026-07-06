#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4DA0
// Address: 0x1a4da0 - 0x1a4db0
void sub_001A4DA0_0x1a4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4DA0_0x1a4da0");
#endif

    ctx->pc = 0x1a4da0u;

    // 0x1a4da0: 0x80692e0  j           func_1A4B80
    ctx->pc = 0x1A4DA0u;
    ctx->pc = 0x1A4DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DA0u;
            // 0x1a4da4: 0x852018  mult        $a0, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A4DA8u;
    // 0x1a4da8: 0x0  nop
    ctx->pc = 0x1a4da8u;
    // NOP
    // 0x1a4dac: 0x0  nop
    ctx->pc = 0x1a4dacu;
    // NOP
    ctx->pc = 0x1a4db0u;
}
