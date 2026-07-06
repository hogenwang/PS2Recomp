#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE630
// Address: 0x1ce630 - 0x1ce648
void sub_001CE630_0x1ce630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE630_0x1ce630");
#endif

    ctx->pc = 0x1ce630u;

    // 0x1ce630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce634: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce640: 0x8073916  j           func_1CE458
    ctx->pc = 0x1CE640u;
    ctx->pc = 0x1CE644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE640u;
            // 0x1ce644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE458u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CE648u;
    ctx->pc = 0x1ce648u;
}
