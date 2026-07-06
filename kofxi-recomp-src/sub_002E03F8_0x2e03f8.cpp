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

// Function: sub_002E03F8
// Address: 0x2e03f8 - 0x2e0410
void sub_002E03F8_0x2e03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E03F8_0x2e03f8");
#endif

    ctx->pc = 0x2e03f8u;

    // 0x2e03f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e03f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e03fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e03fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0404: 0x80b80ec  j           func_2E03B0
    ctx->pc = 0x2E0404u;
    ctx->pc = 0x2E0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0404u;
    // 0x2e0408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    sub_002E03B0_0x2e03b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E040Cu;
    // 0x2e040c: 0x0  nop
    ctx->pc = 0x2e040cu;
    // NOP
}
