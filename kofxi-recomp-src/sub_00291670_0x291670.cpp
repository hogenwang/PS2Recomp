#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291670
// Address: 0x291670 - 0x291680
void sub_00291670_0x291670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291670_0x291670");
#endif

    switch (ctx->pc) {
        case 0x291678u: goto label_291678;
        default: break;
    }

    ctx->pc = 0x291670u;

    // 0x291670: 0x3e00008  jr          $ra
    ctx->pc = 0x291670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291670u;
            // 0x291674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291678u;
label_291678:
    // 0x291678: 0x3e00008  jr          $ra
    ctx->pc = 0x291678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29167Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291678u;
            // 0x29167c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291680u;
    ctx->pc = 0x291680u;
}
