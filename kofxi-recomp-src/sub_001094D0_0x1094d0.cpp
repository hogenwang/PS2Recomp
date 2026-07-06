#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001094D0
// Address: 0x1094d0 - 0x1094d8
void sub_001094D0_0x1094d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094D0_0x1094d0");
#endif

    ctx->pc = 0x1094d0u;

    // 0x1094d0: 0x8041cb4  j           func_1072D0
    ctx->pc = 0x1094D0u;
    ctx->pc = 0x1072D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1072D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1094D8u;
    ctx->pc = 0x1094d8u;
}
