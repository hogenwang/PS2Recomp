#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5F0
// Address: 0x19f5f0 - 0x19f600
void sub_0019F5F0_0x19f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5F0_0x19f5f0");
#endif

    ctx->pc = 0x19f5f0u;

    // 0x19f5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5F0u;
            // 0x19f5f4: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F5F8u;
    // 0x19f5f8: 0x0  nop
    ctx->pc = 0x19f5f8u;
    // NOP
    // 0x19f5fc: 0x0  nop
    ctx->pc = 0x19f5fcu;
    // NOP
    ctx->pc = 0x19f600u;
}
