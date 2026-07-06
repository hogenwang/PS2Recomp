#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5A0
// Address: 0x19f5a0 - 0x19f5b0
void sub_0019F5A0_0x19f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5A0_0x19f5a0");
#endif

    ctx->pc = 0x19f5a0u;

    // 0x19f5a0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19f5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19f5a4: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x19F5A4u;
    ctx->pc = 0x19F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5A4u;
            // 0x19f5a8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19F5ACu;
    // 0x19f5ac: 0x0  nop
    ctx->pc = 0x19f5acu;
    // NOP
    ctx->pc = 0x19f5b0u;
}
