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

// Function: sub_00176DA0
// Address: 0x176da0 - 0x176db0
void sub_00176DA0_0x176da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176DA0_0x176da0");
#endif

    ctx->pc = 0x176da0u;

    // 0x176da0: 0x805daa0  j           func_176A80
    ctx->pc = 0x176DA0u;
    ctx->pc = 0x176DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DA0u;
    // 0x176da4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A80u;
    sub_00176A80_0x176a80(rdram, ctx, runtime); return;
    ctx->pc = 0x176DA8u;
    // 0x176da8: 0x0  nop
    ctx->pc = 0x176da8u;
    // NOP
    // 0x176dac: 0x0  nop
    ctx->pc = 0x176dacu;
    // NOP
}
