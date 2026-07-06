#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7DA0
// Address: 0x1b7da0 - 0x1b7dd0
void sub_001B7DA0_0x1b7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7DA0_0x1b7da0");
#endif

    switch (ctx->pc) {
        case 0x1b7db4u: goto label_1b7db4;
        default: break;
    }

    ctx->pc = 0x1b7da0u;

    // 0x1b7da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7da8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7dac: 0xc06fb9a  jal         func_1BEE68
    ctx->pc = 0x1B7DACu;
    SET_GPR_U32(ctx, 31, 0x1B7DB4u);
    ctx->pc = 0x1B7DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DACu;
            // 0x1b7db0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE68u;
    if (runtime->hasFunction(0x1BEE68u)) {
        auto targetFn = runtime->lookupFunction(0x1BEE68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DB4u; }
        if (ctx->pc != 0x1B7DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEE68_0x1bee68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7DB4u; }
        if (ctx->pc != 0x1B7DB4u) { return; }
    }
    ctx->pc = 0x1B7DB4u;
label_1b7db4:
    // 0x1b7db4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7dc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7DC4u;
            // 0x1b7dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7DCCu;
    // 0x1b7dcc: 0x0  nop
    ctx->pc = 0x1b7dccu;
    // NOP
    ctx->pc = 0x1b7dd0u;
}
