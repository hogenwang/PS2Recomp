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

// Function: sub_002E3958
// Address: 0x2e3958 - 0x2e3988
void sub_002E3958_0x2e3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3958_0x2e3958");
#endif

    ctx->pc = 0x2e3958u;

    // 0x2e3958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e395c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e395cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3964: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e3964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3968: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e3968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e396c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e396cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3974: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x2e3974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2e3978: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x2e3978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2e397c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2e3980: 0x80b81d4  j           func_2E0750
    ctx->pc = 0x2E3980u;
    ctx->pc = 0x2E3984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3980u;
    // 0x2e3984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0750u;
    sub_002E0750_0x2e0750(rdram, ctx, runtime); return;
    ctx->pc = 0x2E3988u;
}
