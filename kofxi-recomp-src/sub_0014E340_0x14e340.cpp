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

// Function: sub_0014E340
// Address: 0x14e340 - 0x14e350
void sub_0014E340_0x14e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E340_0x14e340");
#endif

    ctx->pc = 0x14e340u;

    // 0x14e340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e344: 0x8053894  j           func_14E250
    ctx->pc = 0x14E344u;
    ctx->pc = 0x14E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E344u;
    // 0x14e348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E250u;
    sub_0014E250_0x14e250(rdram, ctx, runtime); return;
    ctx->pc = 0x14E34Cu;
    // 0x14e34c: 0x0  nop
    ctx->pc = 0x14e34cu;
    // NOP
    if (ctx->pc == 0x14e34cu) { ctx->pc = 0x14e350u; }
}
