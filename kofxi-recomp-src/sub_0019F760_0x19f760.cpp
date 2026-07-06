#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F760
// Address: 0x19f760 - 0x19f770
void sub_0019F760_0x19f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F760_0x19f760");
#endif

    ctx->pc = 0x19f760u;

    // 0x19f760: 0x3e00008  jr          $ra
    ctx->pc = 0x19F760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F768u;
    // 0x19f768: 0x0  nop
    ctx->pc = 0x19f768u;
    // NOP
    // 0x19f76c: 0x0  nop
    ctx->pc = 0x19f76cu;
    // NOP
    ctx->pc = 0x19f770u;
}
