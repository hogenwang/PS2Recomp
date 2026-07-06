#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7CB0
// Address: 0x1e7cb0 - 0x1e7ce0
void sub_001E7CB0_0x1e7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7CB0_0x1e7cb0");
#endif

    switch (ctx->pc) {
        case 0x1e7cc0u: goto label_1e7cc0;
        case 0x1e7cd8u: goto label_1e7cd8;
        default: break;
    }

    ctx->pc = 0x1e7cb0u;

    // 0x1e7cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7cb8: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1E7CB8u;
    SET_GPR_U32(ctx, 31, 0x1E7CC0u);
    ctx->pc = 0x1B6C60u;
    if (runtime->hasFunction(0x1B6C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CC0u; }
        if (ctx->pc != 0x1E7CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C60_0x1b6c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CC0u; }
        if (ctx->pc != 0x1E7CC0u) { return; }
    }
    ctx->pc = 0x1E7CC0u;
label_1e7cc0:
    // 0x1e7cc0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1e7cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1e7cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7cc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e7cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e7ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CCCu;
            // 0x1e7cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7CD4u;
    // 0x1e7cd4: 0x0  nop
    ctx->pc = 0x1e7cd4u;
    // NOP
label_1e7cd8:
    // 0x1e7cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7CE0u;
    ctx->pc = 0x1e7ce0u;
}
