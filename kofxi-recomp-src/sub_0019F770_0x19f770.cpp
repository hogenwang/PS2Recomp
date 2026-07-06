#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F770
// Address: 0x19f770 - 0x19f780
void sub_0019F770_0x19f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F770_0x19f770");
#endif

    ctx->pc = 0x19f770u;

    // 0x19f770: 0x3e00008  jr          $ra
    ctx->pc = 0x19F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F778u;
    // 0x19f778: 0x0  nop
    ctx->pc = 0x19f778u;
    // NOP
    // 0x19f77c: 0x0  nop
    ctx->pc = 0x19f77cu;
    // NOP
    ctx->pc = 0x19f780u;
}
