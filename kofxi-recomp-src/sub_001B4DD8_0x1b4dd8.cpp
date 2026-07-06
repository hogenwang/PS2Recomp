#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4DD8
// Address: 0x1b4dd8 - 0x1b4de8
void sub_001B4DD8_0x1b4dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4DD8_0x1b4dd8");
#endif

    switch (ctx->pc) {
        case 0x1b4de0u: goto label_1b4de0;
        default: break;
    }

    ctx->pc = 0x1b4dd8u;

    // 0x1b4dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4DE0u;
label_1b4de0:
    // 0x1b4de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4DE8u;
    ctx->pc = 0x1b4de8u;
}
