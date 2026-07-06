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

// Function: sub_001B1AC8
// Address: 0x1b1ac8 - 0x1b1ae0
void sub_001B1AC8_0x1b1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1AC8_0x1b1ac8");
#endif

    ctx->pc = 0x1b1ac8u;

    // 0x1b1ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ad4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B1AD4u;
    ctx->pc = 0x1B1AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1AD4u;
    // 0x1b1ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1ADCu;
    // 0x1b1adc: 0x0  nop
    ctx->pc = 0x1b1adcu;
    // NOP
    if (ctx->pc == 0x1b1adcu) { ctx->pc = 0x1b1ae0u; }
}
