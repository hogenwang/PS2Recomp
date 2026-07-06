#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8350
// Address: 0x1d8350 - 0x1d8360
void sub_001D8350_0x1d8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8350_0x1d8350");
#endif

    switch (ctx->pc) {
        case 0x1d8358u: goto label_1d8358;
        default: break;
    }

    ctx->pc = 0x1d8350u;

    // 0x1d8350: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8358u;
label_1d8358:
    // 0x1d8358: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8360u;
    ctx->pc = 0x1d8360u;
}
