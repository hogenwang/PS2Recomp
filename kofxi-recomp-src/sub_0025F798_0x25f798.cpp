#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F798
// Address: 0x25f798 - 0x25f7a8
void sub_0025F798_0x25f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F798_0x25f798");
#endif

    ctx->pc = 0x25f798u;

    // 0x25f798: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25f798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25f79c: 0x8043320  j           func_10CC80
    ctx->pc = 0x25F79Cu;
    ctx->pc = 0x25F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F79Cu;
            // 0x25f7a0: 0x8c441774  lw          $a0, 0x1774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6004)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x25F7A4u;
    // 0x25f7a4: 0x0  nop
    ctx->pc = 0x25f7a4u;
    // NOP
    ctx->pc = 0x25f7a8u;
}
