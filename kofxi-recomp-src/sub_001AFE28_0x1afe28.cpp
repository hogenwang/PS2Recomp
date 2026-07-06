#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFE28
// Address: 0x1afe28 - 0x1afe40
void sub_001AFE28_0x1afe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFE28_0x1afe28");
#endif

    ctx->pc = 0x1afe28u;

    // 0x1afe28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1afe28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1afe2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1afe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1afe30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afe34: 0x8c63fc98  lw          $v1, -0x368($v1)
    ctx->pc = 0x1afe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966424)));
    // 0x1afe38: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE38u;
            // 0x1afe3c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFE40u;
    ctx->pc = 0x1afe40u;
}
