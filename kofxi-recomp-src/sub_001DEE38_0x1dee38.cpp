#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEE38
// Address: 0x1dee38 - 0x1dee40
void sub_001DEE38_0x1dee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEE38_0x1dee38");
#endif

    ctx->pc = 0x1dee38u;

    // 0x1dee38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEE40u;
    ctx->pc = 0x1dee40u;
}
