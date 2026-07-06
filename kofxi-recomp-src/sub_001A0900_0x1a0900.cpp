#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0900
// Address: 0x1a0900 - 0x1a0910
void sub_001A0900_0x1a0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0900_0x1a0900");
#endif

    ctx->pc = 0x1a0900u;

    // 0x1a0900: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0908u;
    // 0x1a0908: 0x0  nop
    ctx->pc = 0x1a0908u;
    // NOP
    // 0x1a090c: 0x0  nop
    ctx->pc = 0x1a090cu;
    // NOP
    ctx->pc = 0x1a0910u;
}
