#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABE08
// Address: 0x1abe08 - 0x1abe10
void sub_001ABE08_0x1abe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABE08_0x1abe08");
#endif

    ctx->pc = 0x1abe08u;

    // 0x1abe08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE08u;
            // 0x1abe0c: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABE10u;
    ctx->pc = 0x1abe10u;
}
