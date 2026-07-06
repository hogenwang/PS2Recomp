#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B60C0
// Address: 0x1b60c0 - 0x1b60e0
void sub_001B60C0_0x1b60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B60C0_0x1b60c0");
#endif

    switch (ctx->pc) {
        case 0x1b60c8u: goto label_1b60c8;
        default: break;
    }

    ctx->pc = 0x1b60c0u;

    // 0x1b60c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60C0u;
            // 0x1b60c4: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B60C8u;
label_1b60c8:
    // 0x1b60c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b60c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b60cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b60ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b60d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b60d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b60d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60d8: 0x806af86  j           func_1ABE18
    ctx->pc = 0x1B60D8u;
    ctx->pc = 0x1B60DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B60D8u;
            // 0x1b60dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE18u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABE18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B60E0u;
    ctx->pc = 0x1b60e0u;
}
