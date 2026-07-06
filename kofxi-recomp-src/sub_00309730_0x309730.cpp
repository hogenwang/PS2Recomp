#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00309730
// Address: 0x309730 - 0x309740
void sub_00309730_0x309730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309730_0x309730");
#endif

    ctx->pc = 0x309730u;

    // 0x309730: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309734: 0x3e00008  jr          $ra
    ctx->pc = 0x309734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309734u;
            // 0x309738: 0xac601e58  sw          $zero, 0x1E58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30973Cu;
    // 0x30973c: 0x0  nop
    ctx->pc = 0x30973cu;
    // NOP
    ctx->pc = 0x309740u;
}
