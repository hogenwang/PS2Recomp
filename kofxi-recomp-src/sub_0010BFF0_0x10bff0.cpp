#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010BFF0
// Address: 0x10bff0 - 0x10c000
void sub_0010BFF0_0x10bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFF0_0x10bff0");
#endif

    ctx->pc = 0x10bff0u;

    // 0x10bff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10bff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bff4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x10bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10bff8: 0x8043e52  j           func_10F948
    ctx->pc = 0x10BFF8u;
    ctx->pc = 0x10BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BFF8u;
            // 0x10bffc: 0x2484a4d0  addiu       $a0, $a0, -0x5B30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C000u;
    ctx->pc = 0x10c000u;
}
