#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECA20
// Address: 0x1eca20 - 0x1eca38
void sub_001ECA20_0x1eca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECA20_0x1eca20");
#endif

    ctx->pc = 0x1eca20u;

    // 0x1eca20: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1eca20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1eca24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1eca24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1eca28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1eca28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1eca2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1eca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1eca30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA30u;
            // 0x1eca34: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECA38u;
    ctx->pc = 0x1eca38u;
}
