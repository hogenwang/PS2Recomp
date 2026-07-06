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

// Function: sub_0028E090
// Address: 0x28e090 - 0x28e0a8
void sub_0028E090_0x28e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E090_0x28e090");
#endif

    ctx->pc = 0x28e090u;

    // 0x28e090: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x28e094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e098: 0x248445b8  addiu       $a0, $a0, 0x45B8
    ctx->pc = 0x28e098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17848));
    // 0x28e09c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x28E09Cu;
    ctx->pc = 0x28E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E09Cu;
    // 0x28e0a0: 0x240600e8  addiu       $a2, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x28E0A4u;
    // 0x28e0a4: 0x0  nop
    ctx->pc = 0x28e0a4u;
    // NOP
    if (ctx->pc == 0x28e0a4u) { ctx->pc = 0x28e0a8u; }
}
