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

// Function: sub_001F4780
// Address: 0x1f4780 - 0x1f47a0
void sub_001F4780_0x1f4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4780_0x1f4780");
#endif

    ctx->pc = 0x1f4780u;

    // 0x1f4780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f478c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f4790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4794: 0x80758fa  j           func_1D63E8
    ctx->pc = 0x1F4794u;
    ctx->pc = 0x1F4798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4794u;
    // 0x1f4798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    sub_001D63E8_0x1d63e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1F479Cu;
    // 0x1f479c: 0x0  nop
    ctx->pc = 0x1f479cu;
    // NOP
    if (ctx->pc == 0x1f479cu) { ctx->pc = 0x1f47a0u; }
}
