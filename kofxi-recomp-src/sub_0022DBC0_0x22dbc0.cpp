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

// Function: sub_0022DBC0
// Address: 0x22dbc0 - 0x22dbd0
void sub_0022DBC0_0x22dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DBC0_0x22dbc0");
#endif

    ctx->pc = 0x22dbc0u;

    // 0x22dbc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22dbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dbc4: 0x808b6f4  j           func_22DBD0
    ctx->pc = 0x22DBC4u;
    ctx->pc = 0x22DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBC4u;
    // 0x22dbc8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBD0u;
    sub_0022DBD0_0x22dbd0(rdram, ctx, runtime); return;
    ctx->pc = 0x22DBCCu;
    // 0x22dbcc: 0x0  nop
    ctx->pc = 0x22dbccu;
    // NOP
    if (ctx->pc == 0x22dbccu) { ctx->pc = 0x22dbd0u; }
}
