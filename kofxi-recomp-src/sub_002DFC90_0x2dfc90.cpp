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

// Function: sub_002DFC90
// Address: 0x2dfc90 - 0x2dfca8
void sub_002DFC90_0x2dfc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC90_0x2dfc90");
#endif

    ctx->pc = 0x2dfc90u;

    // 0x2dfc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfc94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc9c: 0x80b7f12  j           func_2DFC48
    ctx->pc = 0x2DFC9Cu;
    ctx->pc = 0x2DFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC9Cu;
    // 0x2dfca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC48u;
    sub_002DFC48_0x2dfc48(rdram, ctx, runtime); return;
    ctx->pc = 0x2DFCA4u;
    // 0x2dfca4: 0x0  nop
    ctx->pc = 0x2dfca4u;
    // NOP
    if (ctx->pc == 0x2dfca4u) { ctx->pc = 0x2dfca8u; }
}
