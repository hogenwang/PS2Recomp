#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6240
// Address: 0x1b6240 - 0x1b6258
void sub_001B6240_0x1b6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6240_0x1b6240");
#endif

    ctx->pc = 0x1b6240u;

    // 0x1b6240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6248: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b624c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b624cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6250: 0x806ae4c  j           func_1AB930
    ctx->pc = 0x1B6250u;
    ctx->pc = 0x1B6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6250u;
            // 0x1b6254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (runtime->hasFunction(0x1AB930u)) {
        auto targetFn = runtime->lookupFunction(0x1AB930u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AB930_0x1ab930(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6258u;
    ctx->pc = 0x1b6258u;
}
