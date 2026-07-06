#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBE0
// Address: 0x1dcbe0 - 0x1dcbe8
void sub_001DCBE0_0x1dcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBE0_0x1dcbe0");
#endif

    ctx->pc = 0x1dcbe0u;

    // 0x1dcbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBE0u;
            // 0x1dcbe4: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCBE8u;
    ctx->pc = 0x1dcbe8u;
}
