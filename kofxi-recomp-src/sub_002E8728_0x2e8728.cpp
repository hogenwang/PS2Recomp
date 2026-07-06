#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8728
// Address: 0x2e8728 - 0x2e8730
void sub_002E8728_0x2e8728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8728_0x2e8728");
#endif

    ctx->pc = 0x2e8728u;

    // 0x2e8728: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8728u;
            // 0x2e872c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8730u;
    ctx->pc = 0x2e8730u;
}
