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

// Function: sub_0019F590
// Address: 0x19f590 - 0x19f5a0
void sub_0019F590_0x19f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F590_0x19f590");
#endif

    ctx->pc = 0x19f590u;

    // 0x19f590: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x19F590u;
    ctx->pc = 0x19F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F590u;
    // 0x19f594: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x19F598u;
    // 0x19f598: 0x0  nop
    ctx->pc = 0x19f598u;
    // NOP
    // 0x19f59c: 0x0  nop
    ctx->pc = 0x19f59cu;
    // NOP
    if (ctx->pc == 0x19f59cu) { ctx->pc = 0x19f5a0u; }
}
