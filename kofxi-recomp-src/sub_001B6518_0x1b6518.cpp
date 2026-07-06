#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6518
// Address: 0x1b6518 - 0x1b6538
void sub_001B6518_0x1b6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6518_0x1b6518");
#endif

    switch (ctx->pc) {
        case 0x1b6530u: goto label_1b6530;
        default: break;
    }

    ctx->pc = 0x1b6518u;

    // 0x1b6518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b651c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6520: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6528: 0x806aeb0  j           func_1ABAC0
    ctx->pc = 0x1B6528u;
    ctx->pc = 0x1B652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6528u;
            // 0x1b652c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABAC0u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B6530u;
label_1b6530:
    // 0x1b6530: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6530u;
            // 0x1b6534: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6538u;
    ctx->pc = 0x1b6538u;
}
