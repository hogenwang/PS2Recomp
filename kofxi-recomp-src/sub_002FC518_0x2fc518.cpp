#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC518
// Address: 0x2fc518 - 0x2fc520
void sub_002FC518_0x2fc518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC518_0x2fc518");
#endif

    ctx->pc = 0x2fc518u;

    // 0x2fc518: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC518u;
            // 0x2fc51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC520u;
    ctx->pc = 0x2fc520u;
}
