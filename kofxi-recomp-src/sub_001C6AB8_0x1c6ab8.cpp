#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6AB8
// Address: 0x1c6ab8 - 0x1c6ac0
void sub_001C6AB8_0x1c6ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6AB8_0x1c6ab8");
#endif

    ctx->pc = 0x1c6ab8u;

    // 0x1c6ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6AC0u;
    ctx->pc = 0x1c6ac0u;
}
