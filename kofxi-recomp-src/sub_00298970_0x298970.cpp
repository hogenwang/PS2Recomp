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

// Function: sub_00298970
// Address: 0x298970 - 0x298978
void sub_00298970_0x298970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298970_0x298970");
#endif

    ctx->pc = 0x298970u;

    // 0x298970: 0x80a625e  j           func_298978
    ctx->pc = 0x298970u;
    ctx->pc = 0x298974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298970u;
    // 0x298974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298978u;
    sub_00298978_0x298978(rdram, ctx, runtime); return;
    ctx->pc = 0x298978u;
}
