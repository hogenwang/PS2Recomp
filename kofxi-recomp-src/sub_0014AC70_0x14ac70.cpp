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

// Function: sub_0014AC70
// Address: 0x14ac70 - 0x14ac80
void sub_0014AC70_0x14ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AC70_0x14ac70");
#endif

    ctx->pc = 0x14ac70u;

    // 0x14ac70: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x14ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x14ac74: 0x8040800  j           func_102000
    ctx->pc = 0x14AC74u;
    ctx->pc = 0x14AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC74u;
    // 0x14ac78: 0x2484ac40  addiu       $a0, $a0, -0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102000u;
    sub_00102000_0x102000(rdram, ctx, runtime); return;
    ctx->pc = 0x14AC7Cu;
    // 0x14ac7c: 0x0  nop
    ctx->pc = 0x14ac7cu;
    // NOP
}
