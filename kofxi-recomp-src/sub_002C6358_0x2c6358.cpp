#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6358
// Address: 0x2c6358 - 0x2c6370
void sub_002C6358_0x2c6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6358_0x2c6358");
#endif

    ctx->pc = 0x2c6358u;

    // 0x2c6358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c635c: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x2c635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2c6360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6368: 0x80b5f30  j           func_2D7CC0
    ctx->pc = 0x2C6368u;
    ctx->pc = 0x2C636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6368u;
            // 0x2c636c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C6370u;
    ctx->pc = 0x2c6370u;
}
