#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F3E0
// Address: 0x19f3e0 - 0x19f3f0
void sub_0019F3E0_0x19f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F3E0_0x19f3e0");
#endif

    ctx->pc = 0x19f3e0u;

    // 0x19f3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3E8u;
    // 0x19f3e8: 0x0  nop
    ctx->pc = 0x19f3e8u;
    // NOP
    // 0x19f3ec: 0x0  nop
    ctx->pc = 0x19f3ecu;
    // NOP
    ctx->pc = 0x19f3f0u;
}
