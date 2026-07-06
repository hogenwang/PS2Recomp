#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D8B0
// Address: 0x22d8b0 - 0x22d8c0
void sub_0022D8B0_0x22d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D8B0_0x22d8b0");
#endif

    ctx->pc = 0x22d8b0u;

    // 0x22d8b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22d8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22D8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D8B4u;
            // 0x22d8b8: 0xac44f9f8  sw          $a0, -0x608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965752), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D8BCu;
    // 0x22d8bc: 0x0  nop
    ctx->pc = 0x22d8bcu;
    // NOP
    ctx->pc = 0x22d8c0u;
}
