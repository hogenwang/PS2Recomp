#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8D90
// Address: 0x1f8d90 - 0x1f8da0
void sub_001F8D90_0x1f8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D90_0x1f8d90");
#endif

    ctx->pc = 0x1f8d90u;

    // 0x1f8d90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8D94u;
            // 0x1f8d98: 0xac441744  sw          $a0, 0x1744($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5956), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8D9Cu;
    // 0x1f8d9c: 0x0  nop
    ctx->pc = 0x1f8d9cu;
    // NOP
    ctx->pc = 0x1f8da0u;
}
