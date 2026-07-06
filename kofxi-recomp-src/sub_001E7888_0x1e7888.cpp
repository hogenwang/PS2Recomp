#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7888
// Address: 0x1e7888 - 0x1e7898
void sub_001E7888_0x1e7888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7888_0x1e7888");
#endif

    switch (ctx->pc) {
        case 0x1e7890u: goto label_1e7890;
        default: break;
    }

    ctx->pc = 0x1e7888u;

    // 0x1e7888: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7888u;
            // 0x1e788c: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7890u;
label_1e7890:
    // 0x1e7890: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7890u;
            // 0x1e7894: 0x8c820064  lw          $v0, 0x64($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7898u;
    ctx->pc = 0x1e7898u;
}
