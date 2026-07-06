#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED998
// Address: 0x1ed998 - 0x1ed9b0
void sub_001ED998_0x1ed998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED998_0x1ed998");
#endif

    ctx->pc = 0x1ed998u;

    // 0x1ed998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed9a4: 0x807b282  j           func_1ECA08
    ctx->pc = 0x1ED9A4u;
    ctx->pc = 0x1ED9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9A4u;
            // 0x1ed9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA08u;
    {
        auto targetFn = runtime->lookupFunction(0x1ECA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ED9ACu;
    // 0x1ed9ac: 0x0  nop
    ctx->pc = 0x1ed9acu;
    // NOP
    ctx->pc = 0x1ed9b0u;
}
