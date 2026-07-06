#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020E4E0
// Address: 0x20e4e0 - 0x20e500
void sub_0020E4E0_0x20e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E4E0_0x20e4e0");
#endif

    ctx->pc = 0x20e4e0u;

    // 0x20e4e0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20e4e4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x20e4e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x20e4e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4f0: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x20e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x20e4f4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x20e4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4f8: 0x8083814  j           func_20E050
    ctx->pc = 0x20E4F8u;
    ctx->pc = 0x20E4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E4F8u;
            // 0x20e4fc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E050u;
    if (runtime->hasFunction(0x20E050u)) {
        auto targetFn = runtime->lookupFunction(0x20E050u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0020E050_0x20e050(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x20E500u;
    ctx->pc = 0x20e500u;
}
