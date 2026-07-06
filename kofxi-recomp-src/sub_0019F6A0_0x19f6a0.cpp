#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F6A0
// Address: 0x19f6a0 - 0x19f6b0
void sub_0019F6A0_0x19f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F6A0_0x19f6a0");
#endif

    ctx->pc = 0x19f6a0u;

    // 0x19f6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F6A8u;
    // 0x19f6a8: 0x0  nop
    ctx->pc = 0x19f6a8u;
    // NOP
    // 0x19f6ac: 0x0  nop
    ctx->pc = 0x19f6acu;
    // NOP
    ctx->pc = 0x19f6b0u;
}
