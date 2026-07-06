#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8DD8
// Address: 0x1e8dd8 - 0x1e8df8
void sub_001E8DD8_0x1e8dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8DD8_0x1e8dd8");
#endif

    switch (ctx->pc) {
        case 0x1e8decu: goto label_1e8dec;
        default: break;
    }

    ctx->pc = 0x1e8dd8u;

    // 0x1e8dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8ddc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e8ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8de4: 0xc07aa60  jal         func_1EA980
    ctx->pc = 0x1E8DE4u;
    SET_GPR_U32(ctx, 31, 0x1E8DECu);
    ctx->pc = 0x1E8DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DE4u;
            // 0x1e8de8: 0x8c852064  lw          $a1, 0x2064($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA980u;
    if (runtime->hasFunction(0x1EA980u)) {
        auto targetFn = runtime->lookupFunction(0x1EA980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DECu; }
        if (ctx->pc != 0x1E8DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA980_0x1ea980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8DECu; }
        if (ctx->pc != 0x1E8DECu) { return; }
    }
    ctx->pc = 0x1E8DECu;
label_1e8dec:
    // 0x1e8dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8df0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8DF0u;
            // 0x1e8df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8DF8u;
    ctx->pc = 0x1e8df8u;
}
