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

// Function: sub_0015ED70
// Address: 0x15ed70 - 0x15ed90
void sub_0015ED70_0x15ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED70_0x15ed70");
#endif

    ctx->pc = 0x15ed70u;

    // 0x15ed70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x15ed74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15ed78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x15ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x15ed7c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x15ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x15ed80: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x15ed80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ed84: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x15ed84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed88: 0x8057b48  j           func_15ED20
    ctx->pc = 0x15ED88u;
    ctx->pc = 0x15ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED88u;
    // 0x15ed8c: 0xa4820020  sh          $v0, 0x20($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ED20u;
    sub_0015ED20_0x15ed20(rdram, ctx, runtime); return;
    ctx->pc = 0x15ED90u;
}
