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

// Function: sub_00160FD0
// Address: 0x160fd0 - 0x160fe0
void sub_00160FD0_0x160fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160FD0_0x160fd0");
#endif

    ctx->pc = 0x160fd0u;

    // 0x160fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160fd4: 0x8067d64  j           func_19F590
    ctx->pc = 0x160FD4u;
    ctx->pc = 0x160FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FD4u;
    // 0x160fd8: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    sub_0019F590_0x19f590(rdram, ctx, runtime); return;
    ctx->pc = 0x160FDCu;
    // 0x160fdc: 0x0  nop
    ctx->pc = 0x160fdcu;
    // NOP
    if (ctx->pc == 0x160fdcu) { ctx->pc = 0x160fe0u; }
}
