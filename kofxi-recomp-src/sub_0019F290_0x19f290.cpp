#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F290
// Address: 0x19f290 - 0x19f2a0
void sub_0019F290_0x19f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F290_0x19f290");
#endif

    ctx->pc = 0x19f290u;

    // 0x19f290: 0x3e00008  jr          $ra
    ctx->pc = 0x19F290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F298u;
    // 0x19f298: 0x0  nop
    ctx->pc = 0x19f298u;
    // NOP
    // 0x19f29c: 0x0  nop
    ctx->pc = 0x19f29cu;
    // NOP
    ctx->pc = 0x19f2a0u;
}
