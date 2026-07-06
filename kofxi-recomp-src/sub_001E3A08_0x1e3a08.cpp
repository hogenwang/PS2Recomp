#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3A08
// Address: 0x1e3a08 - 0x1e3a10
void sub_001E3A08_0x1e3a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A08_0x1e3a08");
#endif

    ctx->pc = 0x1e3a08u;

    // 0x1e3a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A08u;
            // 0x1e3a0c: 0x2402181f  addiu       $v0, $zero, 0x181F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6175));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3A10u;
    ctx->pc = 0x1e3a10u;
}
