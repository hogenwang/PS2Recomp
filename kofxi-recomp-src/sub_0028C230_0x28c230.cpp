#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C230
// Address: 0x28c230 - 0x28c240
void sub_0028C230_0x28c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C230_0x28c230");
#endif

    ctx->pc = 0x28c230u;

    // 0x28c230: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28c234: 0x3e00008  jr          $ra
    ctx->pc = 0x28C234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C234u;
            // 0x28c238: 0x24423748  addiu       $v0, $v0, 0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C23Cu;
    // 0x28c23c: 0x0  nop
    ctx->pc = 0x28c23cu;
    // NOP
    ctx->pc = 0x28c240u;
}
