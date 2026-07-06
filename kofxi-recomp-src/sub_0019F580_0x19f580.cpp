#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F580
// Address: 0x19f580 - 0x19f590
void sub_0019F580_0x19f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F580_0x19f580");
#endif

    ctx->pc = 0x19f580u;

    // 0x19f580: 0x8049c48  j           func_127120
    ctx->pc = 0x19F580u;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00127120_0x127120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F588u;
    // 0x19f588: 0x0  nop
    ctx->pc = 0x19f588u;
    // NOP
    // 0x19f58c: 0x0  nop
    ctx->pc = 0x19f58cu;
    // NOP
    ctx->pc = 0x19f590u;
}
