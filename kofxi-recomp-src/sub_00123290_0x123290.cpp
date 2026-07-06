#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123290
// Address: 0x123290 - 0x1232b8
void sub_00123290_0x123290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123290_0x123290");
#endif

    ctx->pc = 0x123290u;

    // 0x123290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123294: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x123294u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12329c: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x12329cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x1232a0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1232a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232a4: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x1232a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x1232a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1232a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1232ac: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x1232acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1232b0: 0x8048cae  j           func_1232B8
    ctx->pc = 0x1232B0u;
    ctx->pc = 0x1232B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1232B0u;
            // 0x1232b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232B8u;
    if (runtime->hasFunction(0x1232B8u)) {
        auto targetFn = runtime->lookupFunction(0x1232B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001232B8_0x1232b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1232B8u;
    ctx->pc = 0x1232b8u;
}
