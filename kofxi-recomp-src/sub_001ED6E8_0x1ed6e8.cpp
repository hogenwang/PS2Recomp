#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED6E8
// Address: 0x1ed6e8 - 0x1ed700
void sub_001ED6E8_0x1ed6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED6E8_0x1ed6e8");
#endif

    ctx->pc = 0x1ed6e8u;

    // 0x1ed6e8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ed6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ed6ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ed6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ed6f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ed6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ed6f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ed6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ed6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6F8u;
            // 0x1ed6fc: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED700u;
    ctx->pc = 0x1ed700u;
}
