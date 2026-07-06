#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6348
// Address: 0x1b6348 - 0x1b6378
void sub_001B6348_0x1b6348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6348_0x1b6348");
#endif

    switch (ctx->pc) {
        case 0x1b6368u: goto label_1b6368;
        default: break;
    }

    ctx->pc = 0x1b6348u;

    // 0x1b6348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b634c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6350: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6350u;
    {
        const bool branch_taken_0x1b6350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6350u;
            // 0x1b6354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6350) {
            ctx->pc = 0x1B6368u;
            goto label_1b6368;
        }
    }
    ctx->pc = 0x1B6358u;
    // 0x1b6358: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b635c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6360: 0x806ae8c  j           func_1ABA30
    ctx->pc = 0x1B6360u;
    ctx->pc = 0x1B6364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6360u;
            // 0x1b6364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA30u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B6368u;
label_1b6368:
    // 0x1b6368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b636c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B636Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B636Cu;
            // 0x1b6370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6374u;
    // 0x1b6374: 0x0  nop
    ctx->pc = 0x1b6374u;
    // NOP
    ctx->pc = 0x1b6378u;
}
