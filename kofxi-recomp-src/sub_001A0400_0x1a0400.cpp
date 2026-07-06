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

// Function: sub_001A0400
// Address: 0x1a0400 - 0x1a0430
void sub_001A0400_0x1a0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0400_0x1a0400");
#endif

    ctx->pc = 0x1a0400u;

    // 0x1a0400: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a0400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a0404: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a0408: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a040c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a0410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0414: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1a0418: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a0418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a041c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0420: 0x8067ff0  j           func_19FFC0
    ctx->pc = 0x1A0420u;
    ctx->pc = 0x1A0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0420u;
    // 0x1a0424: 0xa040000a  sb          $zero, 0xA($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFC0u;
    sub_0019FFC0_0x19ffc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0428u;
    // 0x1a0428: 0x0  nop
    ctx->pc = 0x1a0428u;
    // NOP
    // 0x1a042c: 0x0  nop
    ctx->pc = 0x1a042cu;
    // NOP
    if (ctx->pc == 0x1a042cu) { ctx->pc = 0x1a0430u; }
}
