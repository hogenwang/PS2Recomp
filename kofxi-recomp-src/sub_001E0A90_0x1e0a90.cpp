#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0A90
// Address: 0x1e0a90 - 0x1e0ad8
void sub_001E0A90_0x1e0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A90_0x1e0a90");
#endif

    switch (ctx->pc) {
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ac4u: goto label_1e0ac4;
        default: break;
    }

    ctx->pc = 0x1e0a90u;

    // 0x1e0a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0a98: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0A98u;
    SET_GPR_U32(ctx, 31, 0x1E0AA0u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AA0u; }
        if (ctx->pc != 0x1E0AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AA0u; }
        if (ctx->pc != 0x1E0AA0u) { return; }
    }
    ctx->pc = 0x1E0AA0u;
label_1e0aa0:
    // 0x1e0aa0: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1e0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1e0aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AA8u;
            // 0x1e0aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0AB0u;
label_1e0ab0:
    // 0x1e0ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0abc: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E0ABCu;
    SET_GPR_U32(ctx, 31, 0x1E0AC4u);
    ctx->pc = 0x1E0AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0ABCu;
            // 0x1e0ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC4u; }
        if (ctx->pc != 0x1E0AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AC4u; }
        if (ctx->pc != 0x1E0AC4u) { return; }
    }
    ctx->pc = 0x1E0AC4u;
label_1e0ac4:
    // 0x1e0ac4: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x1e0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x1e0ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AD0u;
            // 0x1e0ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0AD8u;
    ctx->pc = 0x1e0ad8u;
}
