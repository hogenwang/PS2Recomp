#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEEC8
// Address: 0x1feec8 - 0x1fef18
void sub_001FEEC8_0x1feec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEEC8_0x1feec8");
#endif

    switch (ctx->pc) {
        case 0x1feed8u: goto label_1feed8;
        case 0x1feef8u: goto label_1feef8;
        case 0x1fef08u: goto label_1fef08;
        default: break;
    }

    ctx->pc = 0x1feec8u;

    // 0x1feec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feed0: 0xc07fbc6  jal         func_1FEF18
    ctx->pc = 0x1FEED0u;
    SET_GPR_U32(ctx, 31, 0x1FEED8u);
    ctx->pc = 0x1FEF18u;
    if (runtime->hasFunction(0x1FEF18u)) {
        auto targetFn = runtime->lookupFunction(0x1FEF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEED8u; }
        if (ctx->pc != 0x1FEED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEF18_0x1fef18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEED8u; }
        if (ctx->pc != 0x1FEED8u) { return; }
    }
    ctx->pc = 0x1FEED8u;
label_1feed8:
    // 0x1feed8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x1feed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x1feedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1feedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feee0: 0x24639b98  addiu       $v1, $v1, -0x6468
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941592));
    // 0x1feee4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1feee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1feee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1feeec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1feeecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1feef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEF0u;
            // 0x1feef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEEF8u;
label_1feef8:
    // 0x1feef8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1feef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1feefc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1feefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fef00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF00u;
            // 0x1fef04: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEF08u;
label_1fef08:
    // 0x1fef08: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fef08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fef0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fef10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF10u;
            // 0x1fef14: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEF18u;
    ctx->pc = 0x1fef18u;
}
