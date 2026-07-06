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

// Function: sub_001BAC08
// Address: 0x1bac08 - 0x1bac20
void sub_001BAC08_0x1bac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAC08_0x1bac08");
#endif

    ctx->pc = 0x1bac08u;

    // 0x1bac08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bac0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bac10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bac14: 0x806eabc  j           func_1BAAF0
    ctx->pc = 0x1BAC14u;
    ctx->pc = 0x1BAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC14u;
    // 0x1bac18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAAF0u;
    sub_001BAAF0_0x1baaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAC1Cu;
    // 0x1bac1c: 0x0  nop
    ctx->pc = 0x1bac1cu;
    // NOP
}
