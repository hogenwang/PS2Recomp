#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185FB0
// Address: 0x185fb0 - 0x185fc0
void sub_00185FB0_0x185fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185FB0_0x185fb0");
#endif

    ctx->pc = 0x185fb0u;

    // 0x185fb0: 0x8061210  j           func_184840
    ctx->pc = 0x185FB0u;
    ctx->pc = 0x184840u;
    if (runtime->hasFunction(0x184840u)) {
        auto targetFn = runtime->lookupFunction(0x184840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184840_0x184840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185FB8u;
    // 0x185fb8: 0x0  nop
    ctx->pc = 0x185fb8u;
    // NOP
    // 0x185fbc: 0x0  nop
    ctx->pc = 0x185fbcu;
    // NOP
    ctx->pc = 0x185fc0u;
}
