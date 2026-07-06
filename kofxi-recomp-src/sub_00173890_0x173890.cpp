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

// Function: sub_00173890
// Address: 0x173890 - 0x1738a0
void sub_00173890_0x173890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173890_0x173890");
#endif

    ctx->pc = 0x173890u;

    // 0x173890: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x173894: 0x8067cc0  j           func_19F300
    ctx->pc = 0x173894u;
    ctx->pc = 0x173898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173894u;
    // 0x173898: 0x248436e8  addiu       $a0, $a0, 0x36E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    sub_0019F300_0x19f300(rdram, ctx, runtime); return;
    ctx->pc = 0x17389Cu;
    // 0x17389c: 0x0  nop
    ctx->pc = 0x17389cu;
    // NOP
    if (ctx->pc == 0x17389cu) { ctx->pc = 0x1738a0u; }
}
