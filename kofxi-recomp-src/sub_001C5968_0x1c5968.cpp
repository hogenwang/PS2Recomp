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

// Function: sub_001C5968
// Address: 0x1c5968 - 0x1c5990
void sub_001C5968_0x1c5968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5968_0x1c5968");
#endif

    ctx->pc = 0x1c5968u;

    // 0x1c5968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c596c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c596cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c5970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5978: 0x2484ef50  addiu       $a0, $a0, -0x10B0
    ctx->pc = 0x1c5978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    // 0x1c597c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c5980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5984: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C5984u;
    ctx->pc = 0x1C5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5984u;
    // 0x1c5988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C598Cu;
    // 0x1c598c: 0x0  nop
    ctx->pc = 0x1c598cu;
    // NOP
}
