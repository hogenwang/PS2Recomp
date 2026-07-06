#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187030
// Address: 0x187030 - 0x187060
void sub_00187030_0x187030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187030_0x187030");
#endif

    ctx->pc = 0x187030u;

    // 0x187030: 0x84830500  lh          $v1, 0x500($a0)
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x187034: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187034u;
    {
        const bool branch_taken_0x187034 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x187034) {
            ctx->pc = 0x187038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187034u;
            // 0x187038: 0x84830500  lh          $v1, 0x500($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187048u;
            goto label_187048;
        }
    }
    ctx->pc = 0x18703Cu;
    // 0x18703c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187040: 0xa4830500  sh          $v1, 0x500($a0)
    ctx->pc = 0x187040u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1280), (uint16_t)GPR_U32(ctx, 3));
    // 0x187044: 0x84830500  lh          $v1, 0x500($a0)
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1280)));
label_187048:
    // 0x187048: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x187048u;
    {
        const bool branch_taken_0x187048 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187048) {
            ctx->pc = 0x187054u;
            goto label_187054;
        }
    }
    ctx->pc = 0x187050u;
    // 0x187050: 0xa4800500  sh          $zero, 0x500($a0)
    ctx->pc = 0x187050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1280), (uint16_t)GPR_U32(ctx, 0));
label_187054:
    // 0x187054: 0x3e00008  jr          $ra
    ctx->pc = 0x187054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18705Cu;
    // 0x18705c: 0x0  nop
    ctx->pc = 0x18705cu;
    // NOP
    ctx->pc = 0x187060u;
}
