#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286A20
// Address: 0x286a20 - 0x286a30
void sub_00286A20_0x286a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A20_0x286a20");
#endif

    ctx->pc = 0x286a20u;

    // 0x286a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a24: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x286A24u;
    ctx->pc = 0x286A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286A24u;
            // 0x286a28: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x286A2Cu;
    // 0x286a2c: 0x0  nop
    ctx->pc = 0x286a2cu;
    // NOP
    ctx->pc = 0x286a30u;
}
