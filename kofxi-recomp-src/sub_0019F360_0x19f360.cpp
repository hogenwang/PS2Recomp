#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F360
// Address: 0x19f360 - 0x19f370
void sub_0019F360_0x19f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F360_0x19f360");
#endif

    ctx->pc = 0x19f360u;

    // 0x19f360: 0x3e00008  jr          $ra
    ctx->pc = 0x19F360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F368u;
    // 0x19f368: 0x0  nop
    ctx->pc = 0x19f368u;
    // NOP
    // 0x19f36c: 0x0  nop
    ctx->pc = 0x19f36cu;
    // NOP
    ctx->pc = 0x19f370u;
}
