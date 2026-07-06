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

// Function: sub_001E5590
// Address: 0x1e5590 - 0x1e55a8
void sub_001E5590_0x1e5590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5590_0x1e5590");
#endif

    ctx->pc = 0x1e5590u;

    // 0x1e5590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5598: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x1e5598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e559c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e559cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e55a0: 0x8071938  j           func_1C64E0
    ctx->pc = 0x1E55A0u;
    ctx->pc = 0x1E55A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55A0u;
    // 0x1e55a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    sub_001C64E0_0x1c64e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E55A8u;
}
