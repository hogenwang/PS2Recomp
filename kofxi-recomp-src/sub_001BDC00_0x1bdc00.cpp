#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDC00
// Address: 0x1bdc00 - 0x1bdc08
void sub_001BDC00_0x1bdc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC00_0x1bdc00");
#endif

    ctx->pc = 0x1bdc00u;

    // 0x1bdc00: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC00u;
            // 0x1bdc04: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDC08u;
    ctx->pc = 0x1bdc08u;
}
