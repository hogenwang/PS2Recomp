#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2060
// Address: 0x1e2060 - 0x1e20a0
void sub_001E2060_0x1e2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2060_0x1e2060");
#endif

    switch (ctx->pc) {
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2090u: goto label_1e2090;
        default: break;
    }

    ctx->pc = 0x1e2060u;

    // 0x1e2060: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e2064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2068: 0x8c4314fc  lw          $v1, 0x14FC($v0)
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5372)));
    // 0x1e206c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E206Cu;
    {
        const bool branch_taken_0x1e206c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E206Cu;
            // 0x1e2070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e206c) {
            ctx->pc = 0x1E2088u;
            goto label_1e2088;
        }
    }
    ctx->pc = 0x1E2074u;
    // 0x1e2074: 0xc078836  jal         func_1E20D8
    ctx->pc = 0x1E2074u;
    SET_GPR_U32(ctx, 31, 0x1E207Cu);
    ctx->pc = 0x1E20D8u;
    if (runtime->hasFunction(0x1E20D8u)) {
        auto targetFn = runtime->lookupFunction(0x1E20D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E207Cu; }
        if (ctx->pc != 0x1E207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E20D8_0x1e20d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E207Cu; }
        if (ctx->pc != 0x1E207Cu) { return; }
    }
    ctx->pc = 0x1E207Cu;
label_1e207c:
    // 0x1e207c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E207Cu;
    {
        const bool branch_taken_0x1e207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E207Cu;
            // 0x1e2080: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e207c) {
            ctx->pc = 0x1E2094u;
            goto label_1e2094;
        }
    }
    ctx->pc = 0x1E2084u;
    // 0x1e2084: 0x0  nop
    ctx->pc = 0x1e2084u;
    // NOP
label_1e2088:
    // 0x1e2088: 0xc078828  jal         func_1E20A0
    ctx->pc = 0x1E2088u;
    SET_GPR_U32(ctx, 31, 0x1E2090u);
    ctx->pc = 0x1E20A0u;
    if (runtime->hasFunction(0x1E20A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E20A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2090u; }
        if (ctx->pc != 0x1E2090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E20A0_0x1e20a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2090u; }
        if (ctx->pc != 0x1E2090u) { return; }
    }
    ctx->pc = 0x1E2090u;
label_1e2090:
    // 0x1e2090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2094:
    // 0x1e2094: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2094u;
            // 0x1e2098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E209Cu;
    // 0x1e209c: 0x0  nop
    ctx->pc = 0x1e209cu;
    // NOP
    ctx->pc = 0x1e20a0u;
}
