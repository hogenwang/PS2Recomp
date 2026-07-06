#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6A00
// Address: 0x2c6a00 - 0x2c6a30
void sub_002C6A00_0x2c6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A00_0x2c6a00");
#endif

    ctx->pc = 0x2c6a00u;

    // 0x2c6a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6a04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c6a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6a0c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c6a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a10: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2c6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2c6a14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c6a20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a24: 0x80b2184  j           func_2C8610
    ctx->pc = 0x2C6A24u;
    ctx->pc = 0x2C6A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A24u;
            // 0x2c6a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8610u;
    if (runtime->hasFunction(0x2C8610u)) {
        auto targetFn = runtime->lookupFunction(0x2C8610u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C8610_0x2c8610(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C6A2Cu;
    // 0x2c6a2c: 0x0  nop
    ctx->pc = 0x2c6a2cu;
    // NOP
    ctx->pc = 0x2c6a30u;
}
