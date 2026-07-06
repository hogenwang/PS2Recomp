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

// Function: sub_00228230
// Address: 0x228230 - 0x228238
void sub_00228230_0x228230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228230_0x228230");
#endif

    ctx->pc = 0x228230u;

    // 0x228230: 0x808a08e  j           func_228238
    ctx->pc = 0x228230u;
    ctx->pc = 0x228234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228230u;
    // 0x228234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228238u;
    sub_00228238_0x228238(rdram, ctx, runtime); return;
    ctx->pc = 0x228238u;
}
