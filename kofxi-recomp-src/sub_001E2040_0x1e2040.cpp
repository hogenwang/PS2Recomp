#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2040
// Address: 0x1e2040 - 0x1e2060
void sub_001E2040_0x1e2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2040_0x1e2040");
#endif

    switch (ctx->pc) {
        case 0x1e2050u: goto label_1e2050;
        default: break;
    }

    ctx->pc = 0x1e2040u;

    // 0x1e2040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2048: 0xc07888e  jal         func_1E2238
    ctx->pc = 0x1E2048u;
    SET_GPR_U32(ctx, 31, 0x1E2050u);
    ctx->pc = 0x1E204Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2048u;
            // 0x1e204c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2050u; }
        if (ctx->pc != 0x1E2050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2238_0x1e2238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2050u; }
        if (ctx->pc != 0x1E2050u) { return; }
    }
    ctx->pc = 0x1E2050u;
label_1e2050:
    // 0x1e2050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2054: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e2054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e2058: 0x807888e  j           func_1E2238
    ctx->pc = 0x1E2058u;
    ctx->pc = 0x1E205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2058u;
            // 0x1e205c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2238u;
    if (runtime->hasFunction(0x1E2238u)) {
        auto targetFn = runtime->lookupFunction(0x1E2238u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E2238_0x1e2238(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2060u;
    ctx->pc = 0x1e2060u;
}
