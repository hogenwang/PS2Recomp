#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001859E0
// Address: 0x1859e0 - 0x1859f0
void sub_001859E0_0x1859e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001859E0_0x1859e0");
#endif

    ctx->pc = 0x1859e0u;

    // 0x1859e0: 0x806167c  j           func_1859F0
    ctx->pc = 0x1859E0u;
    ctx->pc = 0x1859F0u;
    if (runtime->hasFunction(0x1859F0u)) {
        auto targetFn = runtime->lookupFunction(0x1859F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001859F0_0x1859f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1859E8u;
    // 0x1859e8: 0x0  nop
    ctx->pc = 0x1859e8u;
    // NOP
    // 0x1859ec: 0x0  nop
    ctx->pc = 0x1859ecu;
    // NOP
    ctx->pc = 0x1859f0u;
}
