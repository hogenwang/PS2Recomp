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

// Function: sub_001E6BD0
// Address: 0x1e6bd0 - 0x1e6be8
void sub_001E6BD0_0x1e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6BD0_0x1e6bd0");
#endif

    ctx->pc = 0x1e6bd0u;

    // 0x1e6bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6bdc: 0x80739f8  j           func_1CE7E0
    ctx->pc = 0x1E6BDCu;
    ctx->pc = 0x1E6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BDCu;
    // 0x1e6be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7E0u;
    sub_001CE7E0_0x1ce7e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E6BE4u;
    // 0x1e6be4: 0x0  nop
    ctx->pc = 0x1e6be4u;
    // NOP
    if (ctx->pc == 0x1e6be4u) { ctx->pc = 0x1e6be8u; }
}
