#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC918
// Address: 0x2fc918 - 0x2fc940
void sub_002FC918_0x2fc918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC918_0x2fc918");
#endif

    switch (ctx->pc) {
        case 0x2fc928u: goto label_2fc928;
        case 0x2fc938u: goto label_2fc938;
        default: break;
    }

    ctx->pc = 0x2fc918u;

    // 0x2fc918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc920: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x2FC920u;
    SET_GPR_U32(ctx, 31, 0x2FC928u);
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC928u; }
        if (ctx->pc != 0x2FC928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC928u; }
        if (ctx->pc != 0x2FC928u) { return; }
    }
    ctx->pc = 0x2FC928u;
label_2fc928:
    // 0x2fc928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc92c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC92Cu;
            // 0x2fc930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC934u;
    // 0x2fc934: 0x0  nop
    ctx->pc = 0x2fc934u;
    // NOP
label_2fc938:
    // 0x2fc938: 0x80bf26c  j           func_2FC9B0
    ctx->pc = 0x2FC938u;
    ctx->pc = 0x2FC9B0u;
    if (runtime->hasFunction(0x2FC9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC9B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002FC9B0_0x2fc9b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2FC940u;
    ctx->pc = 0x2fc940u;
}
