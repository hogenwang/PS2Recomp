#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7FB8
// Address: 0x2f7fb8 - 0x2f7fd0
void sub_002F7FB8_0x2f7fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7FB8_0x2f7fb8");
#endif

    switch (ctx->pc) {
        case 0x2f7fc8u: goto label_2f7fc8;
        default: break;
    }

    ctx->pc = 0x2f7fb8u;

    // 0x2f7fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7FB8u;
    {
        const bool branch_taken_0x2f7fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FB8u;
            // 0x2f7fbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7fb8) {
            ctx->pc = 0x2F7FC8u;
            goto label_2f7fc8;
        }
    }
    ctx->pc = 0x2F7FC0u;
    // 0x2f7fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7FC0u;
            // 0x2f7fc4: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7FC8u;
label_2f7fc8:
    // 0x2f7fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7FD0u;
    ctx->pc = 0x2f7fd0u;
}
