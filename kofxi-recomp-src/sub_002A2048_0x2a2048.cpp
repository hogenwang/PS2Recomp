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

// Function: sub_002A2048
// Address: 0x2a2048 - 0x2a2058
void sub_002A2048_0x2a2048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2048_0x2a2048");
#endif

    ctx->pc = 0x2a2048u;

    // 0x2a2048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a204c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x2A204Cu;
    ctx->pc = 0x2A2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A204Cu;
    // 0x2a2050: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A2054u;
    // 0x2a2054: 0x0  nop
    ctx->pc = 0x2a2054u;
    // NOP
}
