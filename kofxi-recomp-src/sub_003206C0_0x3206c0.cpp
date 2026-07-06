#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003206C0
// Address: 0x3206c0 - 0x3206d0
void sub_003206C0_0x3206c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003206C0_0x3206c0");
#endif

    ctx->pc = 0x3206c0u;

    // 0x3206c0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3206c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3206C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3206C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3206C4u;
            // 0x3206c8: 0xa06003f0  sb          $zero, 0x3F0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1008), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3206CCu;
    // 0x3206cc: 0x0  nop
    ctx->pc = 0x3206ccu;
    // NOP
    ctx->pc = 0x3206d0u;
}
