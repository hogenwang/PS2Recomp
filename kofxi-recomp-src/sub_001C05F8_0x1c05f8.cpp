#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C05F8
// Address: 0x1c05f8 - 0x1c0600
void sub_001C05F8_0x1c05f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C05F8_0x1c05f8");
#endif

    ctx->pc = 0x1c05f8u;

    // 0x1c05f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C05F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C05F8u;
            // 0x1c05fc: 0x80820002  lb          $v0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0600u;
    ctx->pc = 0x1c0600u;
}
