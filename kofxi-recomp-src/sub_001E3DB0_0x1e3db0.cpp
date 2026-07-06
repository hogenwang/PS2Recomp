#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3DB0
// Address: 0x1e3db0 - 0x1e3dc0
void sub_001E3DB0_0x1e3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3DB0_0x1e3db0");
#endif

    ctx->pc = 0x1e3db0u;

    // 0x1e3db0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1e3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1e3db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DB4u;
            // 0x1e3db8: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3DBCu;
    // 0x1e3dbc: 0x0  nop
    ctx->pc = 0x1e3dbcu;
    // NOP
    ctx->pc = 0x1e3dc0u;
}
