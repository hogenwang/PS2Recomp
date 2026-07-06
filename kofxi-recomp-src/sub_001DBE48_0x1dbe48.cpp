#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBE48
// Address: 0x1dbe48 - 0x1dbe50
void sub_001DBE48_0x1dbe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBE48_0x1dbe48");
#endif

    ctx->pc = 0x1dbe48u;

    // 0x1dbe48: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DBE50u;
    ctx->pc = 0x1dbe50u;
}
