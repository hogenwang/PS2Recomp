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

// Function: sub_0014B510
// Address: 0x14b510 - 0x14b540
void sub_0014B510_0x14b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B510_0x14b510");
#endif

    ctx->pc = 0x14b510u;

    // 0x14b510: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x14b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x14b514: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x14b514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x14b518: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x14b518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x14b51c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14b520: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14b524: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x14b524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x14b528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b52c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14b52cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b530: 0x8052b7c  j           func_14ADF0
    ctx->pc = 0x14B530u;
    ctx->pc = 0x14B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B530u;
    // 0x14b534: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    sub_0014ADF0_0x14adf0(rdram, ctx, runtime); return;
    ctx->pc = 0x14B538u;
    // 0x14b538: 0x0  nop
    ctx->pc = 0x14b538u;
    // NOP
    // 0x14b53c: 0x0  nop
    ctx->pc = 0x14b53cu;
    // NOP
}
