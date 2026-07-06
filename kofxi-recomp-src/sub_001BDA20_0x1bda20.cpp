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

// Function: sub_001BDA20
// Address: 0x1bda20 - 0x1bda48
void sub_001BDA20_0x1bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDA20_0x1bda20");
#endif

    ctx->pc = 0x1bda20u;

    // 0x1bda20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bda24: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1bda24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1bda28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bda2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bda2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda30: 0x2484c3d0  addiu       $a0, $a0, -0x3C30
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
    // 0x1bda34: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x1bda38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bda38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bda3c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1BDA3Cu;
    ctx->pc = 0x1BDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA3Cu;
    // 0x1bda40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BDA44u;
    // 0x1bda44: 0x0  nop
    ctx->pc = 0x1bda44u;
    // NOP
}
