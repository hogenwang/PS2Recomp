#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1A70
// Address: 0x1b1a70 - 0x1b1a88
void sub_001B1A70_0x1b1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1A70_0x1b1a70");
#endif

    ctx->pc = 0x1b1a70u;

    // 0x1b1a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a7c: 0x806dee8  j           func_1B7BA0
    ctx->pc = 0x1B1A7Cu;
    ctx->pc = 0x1B1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A7Cu;
            // 0x1b1a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BA0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1A84u;
    // 0x1b1a84: 0x0  nop
    ctx->pc = 0x1b1a84u;
    // NOP
    ctx->pc = 0x1b1a88u;
}
