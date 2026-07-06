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

// Function: sub_002300B0
// Address: 0x2300b0 - 0x2300b8
void sub_002300B0_0x2300b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300B0_0x2300b0");
#endif

    ctx->pc = 0x2300b0u;

    // 0x2300b0: 0x808b756  j           func_22DD58
    ctx->pc = 0x2300B0u;
    ctx->pc = 0x2300B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2300B0u;
    // 0x2300b4: 0x24840074  addiu       $a0, $a0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DD58u;
    sub_0022DD58_0x22dd58(rdram, ctx, runtime); return;
    ctx->pc = 0x2300B8u;
}
