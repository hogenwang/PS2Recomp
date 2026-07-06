#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F710
// Address: 0x19f710 - 0x19f720
void sub_0019F710_0x19f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F710_0x19f710");
#endif

    ctx->pc = 0x19f710u;

    // 0x19f710: 0x3e00008  jr          $ra
    ctx->pc = 0x19F710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F718u;
    // 0x19f718: 0x0  nop
    ctx->pc = 0x19f718u;
    // NOP
    // 0x19f71c: 0x0  nop
    ctx->pc = 0x19f71cu;
    // NOP
    ctx->pc = 0x19f720u;
}
