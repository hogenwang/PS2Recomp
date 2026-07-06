#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7530
// Address: 0x1e7530 - 0x1e7560
void sub_001E7530_0x1e7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7530_0x1e7530");
#endif

    switch (ctx->pc) {
        case 0x1e7530u: goto label_1e7530;
        case 0x1e7534u: goto label_1e7534;
        case 0x1e7538u: goto label_1e7538;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7540u: goto label_1e7540;
        case 0x1e7544u: goto label_1e7544;
        case 0x1e7548u: goto label_1e7548;
        case 0x1e754cu: goto label_1e754c;
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7554u: goto label_1e7554;
        case 0x1e7558u: goto label_1e7558;
        case 0x1e755cu: goto label_1e755c;
        default: break;
    }

    ctx->pc = 0x1e7530u;

label_1e7530:
    // 0x1e7530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e7534:
    // 0x1e7534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e7538:
    // 0x1e7538: 0xc0781e0  jal         func_1E0780
label_1e753c:
    if (ctx->pc == 0x1E753Cu) {
        ctx->pc = 0x1E7540u;
        goto label_1e7540;
    }
    ctx->pc = 0x1E7538u;
    SET_GPR_U32(ctx, 31, 0x1E7540u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7540u; }
        if (ctx->pc != 0x1E7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7540u; }
        if (ctx->pc != 0x1E7540u) { return; }
    }
    ctx->pc = 0x1E7540u;
label_1e7540:
    // 0x1e7540: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x1e7540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1e7544:
    // 0x1e7544: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e7548:
    if (ctx->pc == 0x1E7548u) {
        ctx->pc = 0x1E7548u;
            // 0x1e7548: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->pc = 0x1E754Cu;
        goto label_1e754c;
    }
    ctx->pc = 0x1E7544u;
    {
        const bool branch_taken_0x1e7544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7544u;
            // 0x1e7548: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7544) {
            ctx->pc = 0x1E7554u;
            goto label_1e7554;
        }
    }
    ctx->pc = 0x1E754Cu;
label_1e754c:
    // 0x1e754c: 0x60f809  jalr        $v1
label_1e7550:
    if (ctx->pc == 0x1E7550u) {
        ctx->pc = 0x1E7554u;
        goto label_1e7554;
    }
    ctx->pc = 0x1E754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E7554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7554u; }
            if (ctx->pc != 0x1E7554u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7554u;
label_1e7554:
    // 0x1e7554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7558:
    // 0x1e7558: 0x3e00008  jr          $ra
label_1e755c:
    if (ctx->pc == 0x1E755Cu) {
        ctx->pc = 0x1E755Cu;
            // 0x1e755c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E7560u;
        goto label_fallthrough_0x1e7558;
    }
    ctx->pc = 0x1E7558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7558u;
            // 0x1e755c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e7558:
    ctx->pc = 0x1E7560u;
    ctx->pc = 0x1e7560u;
}
