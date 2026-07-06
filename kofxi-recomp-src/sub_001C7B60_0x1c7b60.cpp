#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7B60
// Address: 0x1c7b60 - 0x1c7b78
void sub_001C7B60_0x1c7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B60_0x1c7b60");
#endif

    ctx->pc = 0x1c7b60u;

    // 0x1c7b60: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c7b64: 0x24634368  addiu       $v1, $v1, 0x4368
    ctx->pc = 0x1c7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17256));
    // 0x1c7b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c7b6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c7b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B70u;
            // 0x1c7b74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7B78u;
    ctx->pc = 0x1c7b78u;
}
