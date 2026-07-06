#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4BB0
// Address: 0x2f4bb0 - 0x2f4bb8
void sub_002F4BB0_0x2f4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4BB0_0x2f4bb0");
#endif

    ctx->pc = 0x2f4bb0u;

    // 0x2f4bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4BB0u;
            // 0x2f4bb4: 0x248200e0  addiu       $v0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F4BB8u;
    ctx->pc = 0x2f4bb8u;
}
