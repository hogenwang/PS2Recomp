#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9A80
// Address: 0x1f9a80 - 0x1f9a98
void sub_001F9A80_0x1f9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A80_0x1f9a80");
#endif

    ctx->pc = 0x1f9a80u;

    // 0x1f9a80: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1f9a84: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f9a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f9a88: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f9a8c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f9a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A90u;
            // 0x1f9a94: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9A98u;
    ctx->pc = 0x1f9a98u;
}
