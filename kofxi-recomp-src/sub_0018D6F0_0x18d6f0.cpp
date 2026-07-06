#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D6F0
// Address: 0x18d6f0 - 0x18d700
void sub_0018D6F0_0x18d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D6F0_0x18d6f0");
#endif

    ctx->pc = 0x18d6f0u;

    // 0x18d6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6F0u;
            // 0x18d6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D6F8u;
    // 0x18d6f8: 0x0  nop
    ctx->pc = 0x18d6f8u;
    // NOP
    // 0x18d6fc: 0x0  nop
    ctx->pc = 0x18d6fcu;
    // NOP
    ctx->pc = 0x18d700u;
}
