#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D348
// Address: 0x10d348 - 0x10d358
void sub_0010D348_0x10d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D348_0x10d348");
#endif

    switch (ctx->pc) {
        case 0x10d350u: goto label_10d350;
        default: break;
    }

    ctx->pc = 0x10d348u;

    // 0x10d348: 0x3e00008  jr          $ra
    ctx->pc = 0x10D348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D348u;
            // 0x10d34c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D350u;
label_10d350:
    // 0x10d350: 0x3e00008  jr          $ra
    ctx->pc = 0x10D350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D350u;
            // 0x10d354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D358u;
    ctx->pc = 0x10d358u;
}
