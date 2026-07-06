#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B0158
// Address: 0x2b0158 - 0x2b0168
void sub_002B0158_0x2b0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0158_0x2b0158");
#endif

    switch (ctx->pc) {
        case 0x2b0160u: goto label_2b0160;
        default: break;
    }

    ctx->pc = 0x2b0158u;

    // 0x2b0158: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0158u;
            // 0x2b015c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0160u;
label_2b0160:
    // 0x2b0160: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0160u;
            // 0x2b0164: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0168u;
    ctx->pc = 0x2b0168u;
}
