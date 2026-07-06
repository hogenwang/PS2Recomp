#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1DF8
// Address: 0x2f1df8 - 0x2f1e00
void sub_002F1DF8_0x2f1df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1DF8_0x2f1df8");
#endif

    ctx->pc = 0x2f1df8u;

    // 0x2f1df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DF8u;
            // 0x2f1dfc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1E00u;
    ctx->pc = 0x2f1e00u;
}
