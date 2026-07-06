#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD268
// Address: 0x1ad268 - 0x1ad270
void sub_001AD268_0x1ad268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD268_0x1ad268");
#endif

    ctx->pc = 0x1ad268u;

    // 0x1ad268: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD270u;
    ctx->pc = 0x1ad270u;
}
