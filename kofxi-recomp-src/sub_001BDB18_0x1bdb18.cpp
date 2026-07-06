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

// Function: sub_001BDB18
// Address: 0x1bdb18 - 0x1bdb40
void sub_001BDB18_0x1bdb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB18_0x1bdb18");
#endif

    ctx->pc = 0x1bdb18u;

    // 0x1bdb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bdb1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bdb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdb24: 0x24470032  addiu       $a3, $v0, 0x32
    ctx->pc = 0x1bdb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1bdb28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bdb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb2c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1bdb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdb34: 0x806b49e  j           func_1AD278
    ctx->pc = 0x1BDB34u;
    ctx->pc = 0x1BDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB34u;
    // 0x1bdb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD278u;
    sub_001AD278_0x1ad278(rdram, ctx, runtime); return;
    ctx->pc = 0x1BDB3Cu;
    // 0x1bdb3c: 0x0  nop
    ctx->pc = 0x1bdb3cu;
    // NOP
}
