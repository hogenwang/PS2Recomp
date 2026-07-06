#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243208
// Address: 0x243208 - 0x243210
void sub_00243208_0x243208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243208_0x243208");
#endif

    ctx->pc = 0x243208u;

    // 0x243208: 0x8098560  j           func_261580
    ctx->pc = 0x243208u;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x243210u;
    ctx->pc = 0x243210u;
}
