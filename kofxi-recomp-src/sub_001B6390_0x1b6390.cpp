#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6390
// Address: 0x1b6390 - 0x1b63c0
void sub_001B6390_0x1b6390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6390_0x1b6390");
#endif

    switch (ctx->pc) {
        case 0x1b63a8u: goto label_1b63a8;
        default: break;
    }

    ctx->pc = 0x1b6390u;

    // 0x1b6390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6398: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b6398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b639c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b639cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b63a0: 0x806ae94  j           func_1ABA50
    ctx->pc = 0x1B63A0u;
    ctx->pc = 0x1B63A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63A0u;
            // 0x1b63a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA50u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B63A8u;
label_1b63a8:
    // 0x1b63a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b63ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b63acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b63b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b63b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b63b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b63b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b63b8: 0x806ae96  j           func_1ABA58
    ctx->pc = 0x1B63B8u;
    ctx->pc = 0x1B63BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63B8u;
            // 0x1b63bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA58u;
    if (runtime->hasFunction(0x1ABA58u)) {
        auto targetFn = runtime->lookupFunction(0x1ABA58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ABA58_0x1aba58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B63C0u;
    ctx->pc = 0x1b63c0u;
}
