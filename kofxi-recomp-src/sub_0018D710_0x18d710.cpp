#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D710
// Address: 0x18d710 - 0x18d720
void sub_0018D710_0x18d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D710_0x18d710");
#endif

    ctx->pc = 0x18d710u;

    // 0x18d710: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d714: 0x3e00008  jr          $ra
    ctx->pc = 0x18D714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D714u;
            // 0x18d718: 0x8c42bc30  lw          $v0, -0x43D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949936)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D71Cu;
    // 0x18d71c: 0x0  nop
    ctx->pc = 0x18d71cu;
    // NOP
    ctx->pc = 0x18d720u;
}
