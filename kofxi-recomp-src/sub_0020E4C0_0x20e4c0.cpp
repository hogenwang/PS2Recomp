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

// Function: sub_0020E4C0
// Address: 0x20e4c0 - 0x20e4e0
void sub_0020E4C0_0x20e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E4C0_0x20e4c0");
#endif

    ctx->pc = 0x20e4c0u;

    // 0x20e4c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20e4c4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20e4c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20e4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e4cc: 0x80837e0  j           func_20DF80
    ctx->pc = 0x20E4CCu;
    ctx->pc = 0x20E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E4CCu;
    // 0x20e4d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    sub_0020DF80_0x20df80(rdram, ctx, runtime); return;
    ctx->pc = 0x20E4D4u;
    // 0x20e4d4: 0x0  nop
    ctx->pc = 0x20e4d4u;
    // NOP
    // 0x20e4d8: 0x0  nop
    ctx->pc = 0x20e4d8u;
    // NOP
    // 0x20e4dc: 0x0  nop
    ctx->pc = 0x20e4dcu;
    // NOP
    if (ctx->pc == 0x20e4dcu) { ctx->pc = 0x20e4e0u; }
}
