#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E13F0
// Address: 0x1e13f0 - 0x1e1400
void sub_001E13F0_0x1e13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E13F0_0x1e13f0");
#endif

    ctx->pc = 0x1e13f0u;

    // 0x1e13f0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1e13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1e13f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E13F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E13F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13F4u;
            // 0x1e13f8: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E13FCu;
    // 0x1e13fc: 0x0  nop
    ctx->pc = 0x1e13fcu;
    // NOP
    ctx->pc = 0x1e1400u;
}
