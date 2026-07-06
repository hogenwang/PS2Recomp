#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6998
// Address: 0x1e6998 - 0x1e69b8
void sub_001E6998_0x1e6998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6998_0x1e6998");
#endif

    ctx->pc = 0x1e6998u;

    // 0x1e6998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e699c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e69a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e69a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e69a8: 0x8c453c84  lw          $a1, 0x3C84($v0)
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15492)));
    // 0x1e69ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e69acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e69b0: 0x807383c  j           func_1CE0F0
    ctx->pc = 0x1E69B0u;
    ctx->pc = 0x1E69B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69B0u;
            // 0x1e69b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (runtime->hasFunction(0x1CE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE0F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE0F0_0x1ce0f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E69B8u;
    ctx->pc = 0x1e69b8u;
}
