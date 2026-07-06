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

// Function: sub_001E8ED0
// Address: 0x1e8ed0 - 0x1e8ef0
void sub_001E8ED0_0x1e8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8ED0_0x1e8ed0");
#endif

    ctx->pc = 0x1e8ed0u;

    // 0x1e8ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8ed4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e8ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8edc: 0x8c852068  lw          $a1, 0x2068($a0)
    ctx->pc = 0x1e8edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8296)));
    // 0x1e8ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ee4: 0x807ad6a  j           func_1EB5A8
    ctx->pc = 0x1E8EE4u;
    ctx->pc = 0x1E8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EE4u;
    // 0x1e8ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5A8u;
    sub_001EB5A8_0x1eb5a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E8EECu;
    // 0x1e8eec: 0x0  nop
    ctx->pc = 0x1e8eecu;
    // NOP
    if (ctx->pc == 0x1e8eecu) { ctx->pc = 0x1e8ef0u; }
}
