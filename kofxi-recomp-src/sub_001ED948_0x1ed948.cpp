#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED948
// Address: 0x1ed948 - 0x1ed960
void sub_001ED948_0x1ed948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED948_0x1ed948");
#endif

    ctx->pc = 0x1ed948u;

    // 0x1ed948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed954: 0x8072cac  j           func_1CB2B0
    ctx->pc = 0x1ED954u;
    ctx->pc = 0x1ED958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED954u;
            // 0x1ed958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB2B0u;
    if (runtime->hasFunction(0x1CB2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB2B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CB2B0_0x1cb2b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ED95Cu;
    // 0x1ed95c: 0x0  nop
    ctx->pc = 0x1ed95cu;
    // NOP
    ctx->pc = 0x1ed960u;
}
