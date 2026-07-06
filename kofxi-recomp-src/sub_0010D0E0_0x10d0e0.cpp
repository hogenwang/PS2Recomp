#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D0E0
// Address: 0x10d0e0 - 0x10d0f0
void sub_0010D0E0_0x10d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D0E0_0x10d0e0");
#endif

    ctx->pc = 0x10d0e0u;

    // 0x10d0e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x10d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x10d0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D0E4u;
            // 0x10d0e8: 0xac408690  sw          $zero, -0x7970($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D0ECu;
    // 0x10d0ec: 0x0  nop
    ctx->pc = 0x10d0ecu;
    // NOP
    ctx->pc = 0x10d0f0u;
}
