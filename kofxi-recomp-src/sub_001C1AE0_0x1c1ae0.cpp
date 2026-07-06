#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1AE0
// Address: 0x1c1ae0 - 0x1c1ae8
void sub_001C1AE0_0x1c1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1AE0_0x1c1ae0");
#endif

    ctx->pc = 0x1c1ae0u;

    // 0x1c1ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AE0u;
            // 0x1c1ae4: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1AE8u;
    ctx->pc = 0x1c1ae8u;
}
