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

// Function: sub_001E7E60
// Address: 0x1e7e60 - 0x1e7e78
void sub_001E7E60_0x1e7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E60_0x1e7e60");
#endif

    ctx->pc = 0x1e7e60u;

    // 0x1e7e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e6c: 0x806db64  j           func_1B6D90
    ctx->pc = 0x1E7E6Cu;
    ctx->pc = 0x1E7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E6Cu;
    // 0x1e7e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    sub_001B6D90_0x1b6d90(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7E74u;
    // 0x1e7e74: 0x0  nop
    ctx->pc = 0x1e7e74u;
    // NOP
    if (ctx->pc == 0x1e7e74u) { ctx->pc = 0x1e7e78u; }
}
