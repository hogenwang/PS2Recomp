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

// Function: sub_002062C0
// Address: 0x2062c0 - 0x2062f0
void sub_002062C0_0x2062c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062C0_0x2062c0");
#endif

    ctx->pc = 0x2062c0u;

    // 0x2062c0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2062c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2062c4: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x2062c8: 0x8c479bf8  lw          $a3, -0x6408($v0)
    ctx->pc = 0x2062c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2062cc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2062ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2062d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x2062d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x2062d4: 0x24e4008e  addiu       $a0, $a3, 0x8E
    ctx->pc = 0x2062d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 142));
    // 0x2062d8: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x2062d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
    // 0x2062dc: 0x8049c22  j           func_127088
    ctx->pc = 0x2062DCu;
    ctx->pc = 0x2062E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062DCu;
    // 0x2062e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    sub_00127088_0x127088(rdram, ctx, runtime); return;
    ctx->pc = 0x2062E4u;
    // 0x2062e4: 0x0  nop
    ctx->pc = 0x2062e4u;
    // NOP
    // 0x2062e8: 0x0  nop
    ctx->pc = 0x2062e8u;
    // NOP
    // 0x2062ec: 0x0  nop
    ctx->pc = 0x2062ecu;
    // NOP
}
