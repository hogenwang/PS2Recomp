#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1DF0
// Address: 0x1e1df0 - 0x1e1e08
void sub_001E1DF0_0x1e1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1DF0_0x1e1df0");
#endif

    ctx->pc = 0x1e1df0u;

    // 0x1e1df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1df8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e1dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1e00: 0x807a6ca  j           func_1E9B28
    ctx->pc = 0x1E1E00u;
    ctx->pc = 0x1E1E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E00u;
            // 0x1e1e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B28u;
    {
        auto targetFn = runtime->lookupFunction(0x1E9B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E1E08u;
    ctx->pc = 0x1e1e08u;
}
