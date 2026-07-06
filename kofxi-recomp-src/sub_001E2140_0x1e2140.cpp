#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2140
// Address: 0x1e2140 - 0x1e2180
void sub_001E2140_0x1e2140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2140_0x1e2140");
#endif

    switch (ctx->pc) {
        case 0x1e215cu: goto label_1e215c;
        case 0x1e2170u: goto label_1e2170;
        default: break;
    }

    ctx->pc = 0x1e2140u;

    // 0x1e2140: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e2144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2148: 0x8c4314fc  lw          $v1, 0x14FC($v0)
    ctx->pc = 0x1e2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5372)));
    // 0x1e214c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E214Cu;
    {
        const bool branch_taken_0x1e214c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E214Cu;
            // 0x1e2150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e214c) {
            ctx->pc = 0x1E2168u;
            goto label_1e2168;
        }
    }
    ctx->pc = 0x1E2154u;
    // 0x1e2154: 0xc07886c  jal         func_1E21B0
    ctx->pc = 0x1E2154u;
    SET_GPR_U32(ctx, 31, 0x1E215Cu);
    ctx->pc = 0x1E21B0u;
    if (runtime->hasFunction(0x1E21B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E215Cu; }
        if (ctx->pc != 0x1E215Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E21B0_0x1e21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E215Cu; }
        if (ctx->pc != 0x1E215Cu) { return; }
    }
    ctx->pc = 0x1E215Cu;
label_1e215c:
    // 0x1e215c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E215Cu;
    {
        const bool branch_taken_0x1e215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E215Cu;
            // 0x1e2160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e215c) {
            ctx->pc = 0x1E2174u;
            goto label_1e2174;
        }
    }
    ctx->pc = 0x1E2164u;
    // 0x1e2164: 0x0  nop
    ctx->pc = 0x1e2164u;
    // NOP
label_1e2168:
    // 0x1e2168: 0xc078860  jal         func_1E2180
    ctx->pc = 0x1E2168u;
    SET_GPR_U32(ctx, 31, 0x1E2170u);
    ctx->pc = 0x1E2180u;
    if (runtime->hasFunction(0x1E2180u)) {
        auto targetFn = runtime->lookupFunction(0x1E2180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2170u; }
        if (ctx->pc != 0x1E2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2180_0x1e2180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2170u; }
        if (ctx->pc != 0x1E2170u) { return; }
    }
    ctx->pc = 0x1E2170u;
label_1e2170:
    // 0x1e2170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2174:
    // 0x1e2174: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2174u;
            // 0x1e2178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E217Cu;
    // 0x1e217c: 0x0  nop
    ctx->pc = 0x1e217cu;
    // NOP
    ctx->pc = 0x1e2180u;
}
