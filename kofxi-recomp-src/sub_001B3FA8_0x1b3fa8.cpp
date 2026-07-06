#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3FA8
// Address: 0x1b3fa8 - 0x1b3fc0
void sub_001B3FA8_0x1b3fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3FA8_0x1b3fa8");
#endif

    ctx->pc = 0x1b3fa8u;

    // 0x1b3fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fb4: 0x806c9ca  j           func_1B2728
    ctx->pc = 0x1B3FB4u;
    ctx->pc = 0x1B3FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3FB4u;
            // 0x1b3fb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2728u;
    {
        auto targetFn = runtime->lookupFunction(0x1B2728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B3FBCu;
    // 0x1b3fbc: 0x0  nop
    ctx->pc = 0x1b3fbcu;
    // NOP
    ctx->pc = 0x1b3fc0u;
}
