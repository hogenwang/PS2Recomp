#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C69D0
// Address: 0x2c69d0 - 0x2c6a00
void sub_002C69D0_0x2c69d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C69D0_0x2c69d0");
#endif

    ctx->pc = 0x2c69d0u;

    // 0x2c69d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c69d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c69d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c69d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c69dc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2c69dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69e0: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2c69e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2c69e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c69e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c69e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c69ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c69ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c69f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69f4: 0x80b2184  j           func_2C8610
    ctx->pc = 0x2C69F4u;
    ctx->pc = 0x2C69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C69F4u;
    // 0x2c69f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8610u;
    sub_002C8610_0x2c8610(rdram, ctx, runtime); return;
    ctx->pc = 0x2C69FCu;
    // 0x2c69fc: 0x0  nop
    ctx->pc = 0x2c69fcu;
    // NOP
}
