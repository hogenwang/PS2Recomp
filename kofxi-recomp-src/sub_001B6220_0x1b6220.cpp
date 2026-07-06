#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6220
// Address: 0x1b6220 - 0x1b6230
void sub_001B6220_0x1b6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6220_0x1b6220");
#endif

    switch (ctx->pc) {
        case 0x1b6228u: goto label_1b6228;
        default: break;
    }

    ctx->pc = 0x1b6220u;

    // 0x1b6220: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6220u;
            // 0x1b6224: 0xac850040  sw          $a1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6228u;
label_1b6228:
    // 0x1b6228: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6228u;
            // 0x1b622c: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6230u;
    ctx->pc = 0x1b6230u;
}
