#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5280
// Address: 0x1f5280 - 0x1f5290
void sub_001F5280_0x1f5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5280_0x1f5280");
#endif

    ctx->pc = 0x1f5280u;

    // 0x1f5280: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1f5280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f5284: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5284u;
            // 0x1f5288: 0x8c62007c  lw          $v0, 0x7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F528Cu;
    // 0x1f528c: 0x0  nop
    ctx->pc = 0x1f528cu;
    // NOP
    ctx->pc = 0x1f5290u;
}
