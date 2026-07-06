#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002015C8
// Address: 0x2015c8 - 0x2015d8
void sub_002015C8_0x2015c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015C8_0x2015c8");
#endif

    ctx->pc = 0x2015c8u;

    // 0x2015c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2015c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2015cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2015CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2015CCu;
            // 0x2015d0: 0x2442f1c8  addiu       $v0, $v0, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2015D4u;
    // 0x2015d4: 0x0  nop
    ctx->pc = 0x2015d4u;
    // NOP
    ctx->pc = 0x2015d8u;
}
