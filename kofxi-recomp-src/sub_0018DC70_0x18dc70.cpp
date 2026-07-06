#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DC70
// Address: 0x18dc70 - 0x18dc80
void sub_0018DC70_0x18dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DC70_0x18dc70");
#endif

    ctx->pc = 0x18dc70u;

    // 0x18dc70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18dc74: 0x3e00008  jr          $ra
    ctx->pc = 0x18DC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC74u;
            // 0x18dc78: 0x8c42bbf0  lw          $v0, -0x4410($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DC7Cu;
    // 0x18dc7c: 0x0  nop
    ctx->pc = 0x18dc7cu;
    // NOP
    ctx->pc = 0x18dc80u;
}
