#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED9C0
// Address: 0x1ed9c0 - 0x1ed9d8
void sub_001ED9C0_0x1ed9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED9C0_0x1ed9c0");
#endif

    ctx->pc = 0x1ed9c0u;

    // 0x1ed9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed9cc: 0x80736d2  j           func_1CDB48
    ctx->pc = 0x1ED9CCu;
    ctx->pc = 0x1ED9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9CCu;
            // 0x1ed9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (runtime->hasFunction(0x1CDB48u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB48u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CDB48_0x1cdb48(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1ED9D4u;
    // 0x1ed9d4: 0x0  nop
    ctx->pc = 0x1ed9d4u;
    // NOP
    ctx->pc = 0x1ed9d8u;
}
