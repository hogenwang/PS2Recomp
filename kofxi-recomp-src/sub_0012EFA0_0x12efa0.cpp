#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012EFA0
// Address: 0x12efa0 - 0x12efb0
void sub_0012EFA0_0x12efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFA0_0x12efa0");
#endif

    ctx->pc = 0x12efa0u;

    // 0x12efa0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x12efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x12efa4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12efa8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EFA8u;
            // 0x12efac: 0xa4660000  sh          $a2, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EFB0u;
    ctx->pc = 0x12efb0u;
}
