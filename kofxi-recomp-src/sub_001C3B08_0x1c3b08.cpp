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

// Function: sub_001C3B08
// Address: 0x1c3b08 - 0x1c3b30
void sub_001C3B08_0x1c3b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3B08_0x1c3b08");
#endif

    ctx->pc = 0x1c3b08u;

    // 0x1c3b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3b0c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c3b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b18: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
    // 0x1c3b1c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c3b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3b24: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C3B24u;
    ctx->pc = 0x1C3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B24u;
    // 0x1c3b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C3B2Cu;
    // 0x1c3b2c: 0x0  nop
    ctx->pc = 0x1c3b2cu;
    // NOP
    if (ctx->pc == 0x1c3b2cu) { ctx->pc = 0x1c3b30u; }
}
