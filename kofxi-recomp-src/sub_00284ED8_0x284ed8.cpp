#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284ED8
// Address: 0x284ed8 - 0x284ee8
void sub_00284ED8_0x284ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284ED8_0x284ed8");
#endif

    ctx->pc = 0x284ed8u;

    // 0x284ed8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x284ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x284edc: 0x3e00008  jr          $ra
    ctx->pc = 0x284EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284EDCu;
            // 0x284ee0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284EE4u;
    // 0x284ee4: 0x0  nop
    ctx->pc = 0x284ee4u;
    // NOP
    ctx->pc = 0x284ee8u;
}
