#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C700
// Address: 0x28c700 - 0x28c710
void sub_0028C700_0x28c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C700_0x28c700");
#endif

    ctx->pc = 0x28c700u;

    // 0x28c700: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28c704: 0x3e00008  jr          $ra
    ctx->pc = 0x28C704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C704u;
            // 0x28c708: 0x24423770  addiu       $v0, $v0, 0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C70Cu;
    // 0x28c70c: 0x0  nop
    ctx->pc = 0x28c70cu;
    // NOP
    ctx->pc = 0x28c710u;
}
