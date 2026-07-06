#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9FD8
// Address: 0x1d9fd8 - 0x1d9fe0
void sub_001D9FD8_0x1d9fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9FD8_0x1d9fd8");
#endif

    ctx->pc = 0x1d9fd8u;

    // 0x1d9fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9FE0u;
    ctx->pc = 0x1d9fe0u;
}
