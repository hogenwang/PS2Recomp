#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187000
// Address: 0x187000 - 0x187030
void sub_00187000_0x187000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187000_0x187000");
#endif

    ctx->pc = 0x187000u;

    // 0x187000: 0x848304fe  lh          $v1, 0x4FE($a0)
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
    // 0x187004: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187004u;
    {
        const bool branch_taken_0x187004 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x187004) {
            ctx->pc = 0x187008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187004u;
            // 0x187008: 0x848304fe  lh          $v1, 0x4FE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187018u;
            goto label_187018;
        }
    }
    ctx->pc = 0x18700Cu;
    // 0x18700c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187010: 0xa48304fe  sh          $v1, 0x4FE($a0)
    ctx->pc = 0x187010u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1278), (uint16_t)GPR_U32(ctx, 3));
    // 0x187014: 0x848304fe  lh          $v1, 0x4FE($a0)
    ctx->pc = 0x187014u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
label_187018:
    // 0x187018: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x187018u;
    {
        const bool branch_taken_0x187018 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187018) {
            ctx->pc = 0x187024u;
            goto label_187024;
        }
    }
    ctx->pc = 0x187020u;
    // 0x187020: 0xa48004fe  sh          $zero, 0x4FE($a0)
    ctx->pc = 0x187020u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1278), (uint16_t)GPR_U32(ctx, 0));
label_187024:
    // 0x187024: 0x3e00008  jr          $ra
    ctx->pc = 0x187024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18702Cu;
    // 0x18702c: 0x0  nop
    ctx->pc = 0x18702cu;
    // NOP
    ctx->pc = 0x187030u;
}
