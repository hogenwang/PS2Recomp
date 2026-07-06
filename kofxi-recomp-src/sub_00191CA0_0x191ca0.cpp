#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191CA0
// Address: 0x191ca0 - 0x191cb0
void sub_00191CA0_0x191ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191CA0_0x191ca0");
#endif

    ctx->pc = 0x191ca0u;

    // 0x191ca0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x191ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191ca4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x191ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191ca8: 0x80c8e24  j           func_323890
    ctx->pc = 0x191CA8u;
    ctx->pc = 0x191CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191CA8u;
            // 0x191cac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00323890_0x323890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x191CB0u;
    ctx->pc = 0x191cb0u;
}
