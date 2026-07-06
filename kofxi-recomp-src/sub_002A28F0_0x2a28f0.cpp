#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A28F0
// Address: 0x2a28f0 - 0x2a28f8
void sub_002A28F0_0x2a28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A28F0_0x2a28f0");
#endif

    ctx->pc = 0x2a28f0u;

    // 0x2a28f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A28F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A28F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28F0u;
            // 0x2a28f4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A28F8u;
    ctx->pc = 0x2a28f8u;
}
