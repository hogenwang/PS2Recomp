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

// Function: sub_0032D1D0
// Address: 0x32d1d0 - 0x32d1e0
void sub_0032D1D0_0x32d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D1D0_0x32d1d0");
#endif

    ctx->pc = 0x32d1d0u;

    // 0x32d1d0: 0x80cb238  j           func_32C8E0
    ctx->pc = 0x32D1D0u;
    ctx->pc = 0x32D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D1D0u;
    // 0x32d1d4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8E0u;
    sub_0032C8E0_0x32c8e0(rdram, ctx, runtime); return;
    ctx->pc = 0x32D1D8u;
    // 0x32d1d8: 0x0  nop
    ctx->pc = 0x32d1d8u;
    // NOP
    // 0x32d1dc: 0x0  nop
    ctx->pc = 0x32d1dcu;
    // NOP
    if (ctx->pc == 0x32d1dcu) { ctx->pc = 0x32d1e0u; }
}
