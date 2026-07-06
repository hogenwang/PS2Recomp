#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284E78
// Address: 0x284e78 - 0x284e88
void sub_00284E78_0x284e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284E78_0x284e78");
#endif

    ctx->pc = 0x284e78u;

    // 0x284e78: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x284e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x284e7c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x284e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x284e80: 0x3e00008  jr          $ra
    ctx->pc = 0x284E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284E80u;
            // 0x284e84: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284E88u;
    ctx->pc = 0x284e88u;
}
