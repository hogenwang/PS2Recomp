#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123140
// Address: 0x123140 - 0x123150
void sub_00123140_0x123140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123140_0x123140");
#endif

    ctx->pc = 0x123140u;

    // 0x123140: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x123140u;
    {
        const bool branch_taken_0x123140 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x123140) {
            ctx->pc = 0x123144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123140u;
            // 0x123144: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123148u;
            goto label_123148;
        }
    }
    ctx->pc = 0x123148u;
label_123148:
    // 0x123148: 0x3e00008  jr          $ra
    ctx->pc = 0x123148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123148u;
            // 0x12314c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123150u;
    ctx->pc = 0x123150u;
}
