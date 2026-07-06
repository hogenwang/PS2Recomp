#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF120
// Address: 0x2bf120 - 0x2bf130
void sub_002BF120_0x2bf120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF120_0x2bf120");
#endif

    ctx->pc = 0x2bf120u;

    // 0x2bf120: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bf120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bf124: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF124u;
            // 0x2bf128: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF12Cu;
    // 0x2bf12c: 0x0  nop
    ctx->pc = 0x2bf12cu;
    // NOP
    ctx->pc = 0x2bf130u;
}
