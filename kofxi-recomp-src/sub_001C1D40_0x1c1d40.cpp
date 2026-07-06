#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1D40
// Address: 0x1c1d40 - 0x1c1d50
void sub_001C1D40_0x1c1d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1D40_0x1c1d40");
#endif

    ctx->pc = 0x1c1d40u;

    // 0x1c1d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1d44: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1c1d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1c1d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D48u;
            // 0x1c1d4c: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1D50u;
    ctx->pc = 0x1c1d50u;
}
