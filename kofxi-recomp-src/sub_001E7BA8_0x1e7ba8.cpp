#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7BA8
// Address: 0x1e7ba8 - 0x1e7bb8
void sub_001E7BA8_0x1e7ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7BA8_0x1e7ba8");
#endif

    switch (ctx->pc) {
        case 0x1e7bb0u: goto label_1e7bb0;
        default: break;
    }

    ctx->pc = 0x1e7ba8u;

    // 0x1e7ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BA8u;
            // 0x1e7bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7BB0u;
label_1e7bb0:
    // 0x1e7bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BB0u;
            // 0x1e7bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7BB8u;
    ctx->pc = 0x1e7bb8u;
}
