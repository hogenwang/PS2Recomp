#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5C0
// Address: 0x19f5c0 - 0x19f5d0
void sub_0019F5C0_0x19f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5C0_0x19f5c0");
#endif

    ctx->pc = 0x19f5c0u;

    // 0x19f5c0: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x19F5C0u;
    ctx->pc = 0x19F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5C0u;
            // 0x19f5c4: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F5C8u;
    // 0x19f5c8: 0x0  nop
    ctx->pc = 0x19f5c8u;
    // NOP
    // 0x19f5cc: 0x0  nop
    ctx->pc = 0x19f5ccu;
    // NOP
    ctx->pc = 0x19f5d0u;
}
