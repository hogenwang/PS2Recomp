#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296C20
// Address: 0x296c20 - 0x296c30
void sub_00296C20_0x296c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C20_0x296c20");
#endif

    ctx->pc = 0x296c20u;

    // 0x296c20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296c24: 0x3e00008  jr          $ra
    ctx->pc = 0x296C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C24u;
            // 0x296c28: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C2Cu;
    // 0x296c2c: 0x0  nop
    ctx->pc = 0x296c2cu;
    // NOP
    ctx->pc = 0x296c30u;
}
