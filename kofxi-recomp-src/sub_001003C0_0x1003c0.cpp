#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001003C0
// Address: 0x1003c0 - 0x1003d0
void sub_001003C0_0x1003c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001003C0_0x1003c0");
#endif

    ctx->pc = 0x1003c0u;

    // 0x1003c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1003c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1003C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003C4u;
            // 0x1003c8: 0x24428410  addiu       $v0, $v0, -0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1003CCu;
    // 0x1003cc: 0x0  nop
    ctx->pc = 0x1003ccu;
    // NOP
    ctx->pc = 0x1003d0u;
}
