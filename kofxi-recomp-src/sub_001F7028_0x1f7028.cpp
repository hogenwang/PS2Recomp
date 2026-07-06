#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7028
// Address: 0x1f7028 - 0x1f7040
void sub_001F7028_0x1f7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7028_0x1f7028");
#endif

    ctx->pc = 0x1f7028u;

    // 0x1f7028: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1f7028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f702c: 0x24631128  addiu       $v1, $v1, 0x1128
    ctx->pc = 0x1f702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x1f7030: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f7034: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7038: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7038u;
            // 0x1f703c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7040u;
    ctx->pc = 0x1f7040u;
}
