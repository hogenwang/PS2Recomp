#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002099D0
// Address: 0x2099d0 - 0x2099e0
void sub_002099D0_0x2099d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099D0_0x2099d0");
#endif

    ctx->pc = 0x2099d0u;

    // 0x2099d0: 0x80558e0  j           func_156380
    ctx->pc = 0x2099D0u;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156380_0x156380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2099D8u;
    // 0x2099d8: 0x0  nop
    ctx->pc = 0x2099d8u;
    // NOP
    // 0x2099dc: 0x0  nop
    ctx->pc = 0x2099dcu;
    // NOP
    ctx->pc = 0x2099e0u;
}
