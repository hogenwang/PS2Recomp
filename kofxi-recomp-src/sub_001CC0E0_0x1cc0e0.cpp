#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC0E0
// Address: 0x1cc0e0 - 0x1cc110
void sub_001CC0E0_0x1cc0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC0E0_0x1cc0e0");
#endif

    switch (ctx->pc) {
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc100u: goto label_1cc100;
        default: break;
    }

    ctx->pc = 0x1cc0e0u;

    // 0x1cc0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc0e8: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC0E8u;
    SET_GPR_U32(ctx, 31, 0x1CC0F0u);
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F0u; }
        if (ctx->pc != 0x1CC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F0u; }
        if (ctx->pc != 0x1CC0F0u) { return; }
    }
    ctx->pc = 0x1CC0F0u;
label_1cc0f0:
    // 0x1cc0f0: 0xc073044  jal         func_1CC110
    ctx->pc = 0x1CC0F0u;
    SET_GPR_U32(ctx, 31, 0x1CC0F8u);
    ctx->pc = 0x1CC110u;
    if (runtime->hasFunction(0x1CC110u)) {
        auto targetFn = runtime->lookupFunction(0x1CC110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F8u; }
        if (ctx->pc != 0x1CC0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC110_0x1cc110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F8u; }
        if (ctx->pc != 0x1CC0F8u) { return; }
    }
    ctx->pc = 0x1CC0F8u;
label_1cc0f8:
    // 0x1cc0f8: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CC0F8u;
    SET_GPR_U32(ctx, 31, 0x1CC100u);
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC100u; }
        if (ctx->pc != 0x1CC100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC100u; }
        if (ctx->pc != 0x1CC100u) { return; }
    }
    ctx->pc = 0x1CC100u;
label_1cc100:
    // 0x1cc100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc104: 0x80729ee  j           func_1CA7B8
    ctx->pc = 0x1CC104u;
    ctx->pc = 0x1CC108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC104u;
            // 0x1cc108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CA7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CC10Cu;
    // 0x1cc10c: 0x0  nop
    ctx->pc = 0x1cc10cu;
    // NOP
    ctx->pc = 0x1cc110u;
}
