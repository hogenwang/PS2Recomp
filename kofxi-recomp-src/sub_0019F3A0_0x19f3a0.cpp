#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F3A0
// Address: 0x19f3a0 - 0x19f3b0
void sub_0019F3A0_0x19f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F3A0_0x19f3a0");
#endif

    ctx->pc = 0x19f3a0u;

    // 0x19f3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F3A8u;
    // 0x19f3a8: 0x0  nop
    ctx->pc = 0x19f3a8u;
    // NOP
    // 0x19f3ac: 0x0  nop
    ctx->pc = 0x19f3acu;
    // NOP
    ctx->pc = 0x19f3b0u;
}
