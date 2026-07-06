#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296C18
// Address: 0x296c18 - 0x296c20
void sub_00296C18_0x296c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C18_0x296c18");
#endif

    ctx->pc = 0x296c18u;

    // 0x296c18: 0x3e00008  jr          $ra
    ctx->pc = 0x296C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C18u;
            // 0x296c1c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C20u;
    ctx->pc = 0x296c20u;
}
