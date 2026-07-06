#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187E20
// Address: 0x187e20 - 0x187e30
void sub_00187E20_0x187e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E20_0x187e20");
#endif

    ctx->pc = 0x187e20u;

    // 0x187e20: 0x3e00008  jr          $ra
    ctx->pc = 0x187E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187E28u;
    // 0x187e28: 0x0  nop
    ctx->pc = 0x187e28u;
    // NOP
    // 0x187e2c: 0x0  nop
    ctx->pc = 0x187e2cu;
    // NOP
    ctx->pc = 0x187e30u;
}
