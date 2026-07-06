#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF438
// Address: 0x2bf438 - 0x2bf458
void sub_002BF438_0x2bf438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF438_0x2bf438");
#endif

    switch (ctx->pc) {
        case 0x2bf448u: goto label_2bf448;
        default: break;
    }

    ctx->pc = 0x2bf438u;

    // 0x2bf438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf440: 0xc0afd76  jal         func_2BF5D8
    ctx->pc = 0x2BF440u;
    SET_GPR_U32(ctx, 31, 0x2BF448u);
    ctx->pc = 0x2BF5D8u;
    if (runtime->hasFunction(0x2BF5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BF5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF448u; }
        if (ctx->pc != 0x2BF448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF5D8_0x2bf5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF448u; }
        if (ctx->pc != 0x2BF448u) { return; }
    }
    ctx->pc = 0x2BF448u;
label_2bf448:
    // 0x2bf448: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bf44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf450: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF450u;
            // 0x2bf454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF458u;
    ctx->pc = 0x2bf458u;
}
