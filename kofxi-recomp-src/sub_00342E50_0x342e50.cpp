#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342E50
// Address: 0x342e50 - 0x342e60
void sub_00342E50_0x342e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E50_0x342e50");
#endif

    ctx->pc = 0x342e50u;

    // 0x342e50: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342e54: 0x3e00008  jr          $ra
    ctx->pc = 0x342E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342E54u;
            // 0x342e58: 0x8c42dd90  lw          $v0, -0x2270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342E5Cu;
    // 0x342e5c: 0x0  nop
    ctx->pc = 0x342e5cu;
    // NOP
    ctx->pc = 0x342e60u;
}
