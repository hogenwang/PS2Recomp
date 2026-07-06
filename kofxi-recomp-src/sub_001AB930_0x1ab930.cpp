#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB930
// Address: 0x1ab930 - 0x1ab940
void sub_001AB930_0x1ab930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB930_0x1ab930");
#endif

    switch (ctx->pc) {
        case 0x1ab938u: goto label_1ab938;
        default: break;
    }

    ctx->pc = 0x1ab930u;

    // 0x1ab930: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB930u;
            // 0x1ab934: 0x84820098  lh          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB938u;
label_1ab938:
    // 0x1ab938: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB938u;
            // 0x1ab93c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB940u;
    ctx->pc = 0x1ab940u;
}
