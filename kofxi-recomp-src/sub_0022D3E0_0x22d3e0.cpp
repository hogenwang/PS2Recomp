#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D3E0
// Address: 0x22d3e0 - 0x22d3f0
void sub_0022D3E0_0x22d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D3E0_0x22d3e0");
#endif

    ctx->pc = 0x22d3e0u;

    // 0x22d3e0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x22d3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d3e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x22D3E8u;
    {
        const bool branch_taken_0x22d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3E8u;
        // 0x22d3ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3e8) {
            ctx->pc = 0x22D3F0u;
            return;
        }
    }
    ctx->pc = 0x22D3F0u;
}
