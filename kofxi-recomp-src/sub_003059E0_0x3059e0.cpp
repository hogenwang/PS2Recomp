#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003059E0
// Address: 0x3059e0 - 0x3059f0
void sub_003059E0_0x3059e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003059E0_0x3059e0");
#endif

    ctx->pc = 0x3059e0u;

    // 0x3059e0: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3059e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3059E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3059E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3059E4u;
            // 0x3059e8: 0xac641d40  sw          $a0, 0x1D40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7488), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3059ECu;
    // 0x3059ec: 0x0  nop
    ctx->pc = 0x3059ecu;
    // NOP
    ctx->pc = 0x3059f0u;
}
