#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A96E0
// Address: 0x2a96e0 - 0x2a96f0
void sub_002A96E0_0x2a96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A96E0_0x2a96e0");
#endif

    ctx->pc = 0x2a96e0u;

    // 0x2a96e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a96e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A96E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A96E4u;
            // 0x2a96e8: 0xac446aa8  sw          $a0, 0x6AA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A96ECu;
    // 0x2a96ec: 0x0  nop
    ctx->pc = 0x2a96ecu;
    // NOP
    ctx->pc = 0x2a96f0u;
}
