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

// Function: sub_0020EBA0
// Address: 0x20eba0 - 0x20ebb0
void sub_0020EBA0_0x20eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EBA0_0x20eba0");
#endif

    ctx->pc = 0x20eba0u;

    // 0x20eba0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20eba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eba4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20eba8: 0x804a7dc  j           func_129F70
    ctx->pc = 0x20EBA8u;
    ctx->pc = 0x20EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBA8u;
    // 0x20ebac: 0x2484a4c0  addiu       $a0, $a0, -0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    ctx->pc = 0x20EBB0u;
}
