#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001307E0
// Address: 0x1307e0 - 0x130800
void sub_001307E0_0x1307e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001307E0_0x1307e0");
#endif

    ctx->pc = 0x1307e0u;

    // 0x1307e0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1307e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1307e4: 0xa06455d8  sb          $a0, 0x55D8($v1)
    ctx->pc = 0x1307e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21976), (uint8_t)GPR_U32(ctx, 4));
    // 0x1307e8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1307ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1307ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1307ECu;
            // 0x1307f0: 0xa06555d0  sb          $a1, 0x55D0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21968), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1307F4u;
    // 0x1307f4: 0x0  nop
    ctx->pc = 0x1307f4u;
    // NOP
    // 0x1307f8: 0x0  nop
    ctx->pc = 0x1307f8u;
    // NOP
    // 0x1307fc: 0x0  nop
    ctx->pc = 0x1307fcu;
    // NOP
    ctx->pc = 0x130800u;
}
