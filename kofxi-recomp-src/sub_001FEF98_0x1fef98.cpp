#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEF98
// Address: 0x1fef98 - 0x1fefa8
void sub_001FEF98_0x1fef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEF98_0x1fef98");
#endif

    ctx->pc = 0x1fef98u;

    // 0x1fef98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEF9Cu;
            // 0x1fefa0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEFA4u;
    // 0x1fefa4: 0x0  nop
    ctx->pc = 0x1fefa4u;
    // NOP
    ctx->pc = 0x1fefa8u;
}
