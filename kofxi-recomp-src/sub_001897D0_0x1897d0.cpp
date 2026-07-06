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

// Function: sub_001897D0
// Address: 0x1897d0 - 0x1897f0
void sub_001897D0_0x1897d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001897D0_0x1897d0");
#endif

    ctx->pc = 0x1897d0u;

    // 0x1897d0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1897d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1897d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897d8: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1897dc: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x1897dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1897e0: 0x80625d8  j           func_189760
    ctx->pc = 0x1897E0u;
    ctx->pc = 0x1897E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1897E0u;
    // 0x1897e4: 0x3407f092  ori         $a3, $zero, 0xF092 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61586);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189760u;
    sub_00189760_0x189760(rdram, ctx, runtime); return;
    ctx->pc = 0x1897E8u;
    // 0x1897e8: 0x0  nop
    ctx->pc = 0x1897e8u;
    // NOP
    // 0x1897ec: 0x0  nop
    ctx->pc = 0x1897ecu;
    // NOP
}
