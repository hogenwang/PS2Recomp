#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6270
// Address: 0x1b6270 - 0x1b6288
void sub_001B6270_0x1b6270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6270_0x1b6270");
#endif

    ctx->pc = 0x1b6270u;

    // 0x1b6270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6278: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b627c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6280: 0x806ae50  j           func_1AB940
    ctx->pc = 0x1B6280u;
    ctx->pc = 0x1B6284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6280u;
            // 0x1b6284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB940u;
    if (runtime->hasFunction(0x1AB940u)) {
        auto targetFn = runtime->lookupFunction(0x1AB940u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AB940_0x1ab940(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6288u;
    ctx->pc = 0x1b6288u;
}
