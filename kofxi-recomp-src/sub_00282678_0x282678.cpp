#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282678
// Address: 0x282678 - 0x282698
void sub_00282678_0x282678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282678_0x282678");
#endif

    switch (ctx->pc) {
        case 0x28268cu: goto label_28268c;
        default: break;
    }

    ctx->pc = 0x282678u;

    // 0x282678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28267c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28267cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282684: 0xc09fdc0  jal         func_27F700
    ctx->pc = 0x282684u;
    SET_GPR_U32(ctx, 31, 0x28268Cu);
    ctx->pc = 0x282688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282684u;
            // 0x282688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F700u;
    if (runtime->hasFunction(0x27F700u)) {
        auto targetFn = runtime->lookupFunction(0x27F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28268Cu; }
        if (ctx->pc != 0x28268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F700_0x27f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28268Cu; }
        if (ctx->pc != 0x28268Cu) { return; }
    }
    ctx->pc = 0x28268Cu;
label_28268c:
    // 0x28268c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28268cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282690: 0x3e00008  jr          $ra
    ctx->pc = 0x282690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282690u;
            // 0x282694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282698u;
    ctx->pc = 0x282698u;
}
