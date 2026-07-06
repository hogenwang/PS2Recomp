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

// Function: sub_001B8EF8
// Address: 0x1b8ef8 - 0x1b8f10
void sub_001B8EF8_0x1b8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8EF8_0x1b8ef8");
#endif

    ctx->pc = 0x1b8ef8u;

    // 0x1b8ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f04: 0x806e39c  j           func_1B8E70
    ctx->pc = 0x1B8F04u;
    ctx->pc = 0x1B8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F04u;
    // 0x1b8f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E70u;
    sub_001B8E70_0x1b8e70(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8F0Cu;
    // 0x1b8f0c: 0x0  nop
    ctx->pc = 0x1b8f0cu;
    // NOP
}
