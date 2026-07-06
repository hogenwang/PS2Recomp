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

// Function: sub_0020E800
// Address: 0x20e800 - 0x20e820
void sub_0020E800_0x20e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E800_0x20e800");
#endif

    ctx->pc = 0x20e800u;

    // 0x20e800: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20e804: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20e804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20e808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20e80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e810: 0x80839bc  j           func_20E6F0
    ctx->pc = 0x20E810u;
    ctx->pc = 0x20E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E810u;
    // 0x20e814: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E6F0u;
    sub_0020E6F0_0x20e6f0(rdram, ctx, runtime); return;
    ctx->pc = 0x20E818u;
    // 0x20e818: 0x0  nop
    ctx->pc = 0x20e818u;
    // NOP
    // 0x20e81c: 0x0  nop
    ctx->pc = 0x20e81cu;
    // NOP
    if (ctx->pc == 0x20e81cu) { ctx->pc = 0x20e820u; }
}
