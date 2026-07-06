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

// Function: sub_001E69F0
// Address: 0x1e69f0 - 0x1e6a10
void sub_001E69F0_0x1e69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E69F0_0x1e69f0");
#endif

    ctx->pc = 0x1e69f0u;

    // 0x1e69f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e69f4: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e69f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e69fc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e6a00: 0x8c453c88  lw          $a1, 0x3C88($v0)
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x1e6a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6a08: 0x807383c  j           func_1CE0F0
    ctx->pc = 0x1E6A08u;
    ctx->pc = 0x1E6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6A08u;
    // 0x1e6a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    sub_001CE0F0_0x1ce0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E6A10u;
}
