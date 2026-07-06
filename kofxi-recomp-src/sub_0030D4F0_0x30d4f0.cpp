#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D4F0
// Address: 0x30d4f0 - 0x30d500
void sub_0030D4F0_0x30d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D4F0_0x30d4f0");
#endif

    ctx->pc = 0x30d4f0u;

    // 0x30d4f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d4f4: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x30d4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D4F8u;
            // 0x30d4fc: 0xac641df0  sw          $a0, 0x1DF0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7664), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D500u;
    ctx->pc = 0x30d500u;
}
