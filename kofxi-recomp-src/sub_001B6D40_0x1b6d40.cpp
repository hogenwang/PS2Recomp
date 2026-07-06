#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D40
// Address: 0x1b6d40 - 0x1b6d58
void sub_001B6D40_0x1b6d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D40_0x1b6d40");
#endif

    ctx->pc = 0x1b6d40u;

    // 0x1b6d40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b6d44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6D44u;
    {
        const bool branch_taken_0x1b6d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D44u;
            // 0x1b6d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d44) {
            ctx->pc = 0x1B6D50u;
            goto label_1b6d50;
        }
    }
    ctx->pc = 0x1B6D4Cu;
    // 0x1b6d4c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1b6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1b6d50:
    // 0x1b6d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6D58u;
    ctx->pc = 0x1b6d58u;
}
