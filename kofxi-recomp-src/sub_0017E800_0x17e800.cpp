#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E800
// Address: 0x17e800 - 0x17e810
void sub_0017E800_0x17e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E800_0x17e800");
#endif

    ctx->pc = 0x17e800u;

    // 0x17e800: 0x805ce48  j           func_173920
    ctx->pc = 0x17E800u;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173920_0x173920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17E808u;
    // 0x17e808: 0x0  nop
    ctx->pc = 0x17e808u;
    // NOP
    // 0x17e80c: 0x0  nop
    ctx->pc = 0x17e80cu;
    // NOP
    ctx->pc = 0x17e810u;
}
