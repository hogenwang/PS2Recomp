#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C22C0
// Address: 0x1c22c0 - 0x1c22d0
void sub_001C22C0_0x1c22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22C0_0x1c22c0");
#endif

    ctx->pc = 0x1c22c0u;

    // 0x1c22c0: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x1c22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x1c22c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22C4u;
            // 0x1c22c8: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C22CCu;
    // 0x1c22cc: 0x0  nop
    ctx->pc = 0x1c22ccu;
    // NOP
    ctx->pc = 0x1c22d0u;
}
