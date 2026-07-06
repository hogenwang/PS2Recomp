#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228150
// Address: 0x228150 - 0x228160
void sub_00228150_0x228150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228150_0x228150");
#endif

    ctx->pc = 0x228150u;

    // 0x228150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228154: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x228154u;
    ctx->pc = 0x228158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228154u;
            // 0x228158: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22815Cu;
    // 0x22815c: 0x0  nop
    ctx->pc = 0x22815cu;
    // NOP
    ctx->pc = 0x228160u;
}
