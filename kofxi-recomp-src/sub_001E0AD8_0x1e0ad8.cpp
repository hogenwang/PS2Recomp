#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0AD8
// Address: 0x1e0ad8 - 0x1e0af8
void sub_001E0AD8_0x1e0ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0AD8_0x1e0ad8");
#endif

    switch (ctx->pc) {
        case 0x1e0ae8u: goto label_1e0ae8;
        default: break;
    }

    ctx->pc = 0x1e0ad8u;

    // 0x1e0ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0ae0: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0AE0u;
    SET_GPR_U32(ctx, 31, 0x1E0AE8u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AE8u; }
        if (ctx->pc != 0x1E0AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AE8u; }
        if (ctx->pc != 0x1E0AE8u) { return; }
    }
    ctx->pc = 0x1E0AE8u;
label_1e0ae8:
    // 0x1e0ae8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1e0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1e0aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AF0u;
            // 0x1e0af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0AF8u;
    ctx->pc = 0x1e0af8u;
}
