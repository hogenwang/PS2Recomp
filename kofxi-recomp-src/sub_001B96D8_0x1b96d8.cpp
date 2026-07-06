#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B96D8
// Address: 0x1b96d8 - 0x1b96f0
void sub_001B96D8_0x1b96d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B96D8_0x1b96d8");
#endif

    ctx->pc = 0x1b96d8u;

    // 0x1b96d8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b96dc: 0x2463c384  addiu       $v1, $v1, -0x3C7C
    ctx->pc = 0x1b96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951812));
    // 0x1b96e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b96e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b96e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B96E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B96ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96E8u;
            // 0x1b96ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B96F0u;
    ctx->pc = 0x1b96f0u;
}
