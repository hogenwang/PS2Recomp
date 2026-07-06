#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018CC20
// Address: 0x18cc20 - 0x18cc50
void sub_0018CC20_0x18cc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CC20_0x18cc20");
#endif

    ctx->pc = 0x18cc20u;

    // 0x18cc20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18cc24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18cc28: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x18cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18cc2c: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18cc30: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18cc34: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18cc38: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18cc3c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18cc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18cc44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cc48: 0x3e00008  jr          $ra
    ctx->pc = 0x18CC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC48u;
            // 0x18cc4c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CC50u;
    ctx->pc = 0x18cc50u;
}
