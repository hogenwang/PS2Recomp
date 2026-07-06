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

// Function: sub_002FD260
// Address: 0x2fd260 - 0x2fd280
void sub_002FD260_0x2fd260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD260_0x2fd260");
#endif

    ctx->pc = 0x2fd260u;

    // 0x2fd260: 0x3c04009e  lui         $a0, 0x9E
    ctx->pc = 0x2fd260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)158 << 16));
    // 0x2fd264: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd268: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x2fd268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x2fd26c: 0x24a5b250  addiu       $a1, $a1, -0x4DB0
    ctx->pc = 0x2fd26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947408));
    // 0x2fd270: 0x8049c48  j           func_127120
    ctx->pc = 0x2FD270u;
    ctx->pc = 0x2FD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD270u;
    // 0x2fd274: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x2FD278u;
    // 0x2fd278: 0x0  nop
    ctx->pc = 0x2fd278u;
    // NOP
    // 0x2fd27c: 0x0  nop
    ctx->pc = 0x2fd27cu;
    // NOP
    if (ctx->pc == 0x2fd27cu) { ctx->pc = 0x2fd280u; }
}
