#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC910
// Address: 0x1ac910 - 0x1ac938
void sub_001AC910_0x1ac910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC910_0x1ac910");
#endif

    switch (ctx->pc) {
        case 0x1ac928u: goto label_1ac928;
        default: break;
    }

    ctx->pc = 0x1ac910u;

    // 0x1ac910: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ac910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1ac914: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac918: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ac918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac920: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AC920u;
    SET_GPR_U32(ctx, 31, 0x1AC928u);
    ctx->pc = 0x1AC924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC920u;
            // 0x1ac924: 0x24a57308  addiu       $a1, $a1, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC928u; }
        if (ctx->pc != 0x1AC928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC928u; }
        if (ctx->pc != 0x1AC928u) { return; }
    }
    ctx->pc = 0x1AC928u;
label_1ac928:
    // 0x1ac928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac92c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ac930: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC930u;
            // 0x1ac934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC938u;
    ctx->pc = 0x1ac938u;
}
