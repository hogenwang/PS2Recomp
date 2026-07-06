#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6330
// Address: 0x1b6330 - 0x1b6348
void sub_001B6330_0x1b6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6330_0x1b6330");
#endif

    ctx->pc = 0x1b6330u;

    // 0x1b6330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6338: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b633c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b633cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6340: 0x806ae8a  j           func_1ABA28
    ctx->pc = 0x1B6340u;
    ctx->pc = 0x1B6344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6340u;
            // 0x1b6344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA28u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B6348u;
    ctx->pc = 0x1b6348u;
}
