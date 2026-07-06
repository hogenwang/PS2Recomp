#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141C70
// Address: 0x141c70 - 0x141ca0
void sub_00141C70_0x141c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141C70_0x141c70");
#endif

    ctx->pc = 0x141c70u;

    // 0x141c70: 0x8c8303fc  lw          $v1, 0x3FC($a0)
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1020)));
    // 0x141c74: 0xac8303f8  sw          $v1, 0x3F8($a0)
    ctx->pc = 0x141c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1016), GPR_U32(ctx, 3));
    // 0x141c78: 0x90830438  lbu         $v1, 0x438($a0)
    ctx->pc = 0x141c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1080)));
    // 0x141c7c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x141c80: 0xa0830438  sb          $v1, 0x438($a0)
    ctx->pc = 0x141c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x141c84: 0x90830438  lbu         $v1, 0x438($a0)
    ctx->pc = 0x141c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1080)));
    // 0x141c88: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x141c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x141c8c: 0xa0830438  sb          $v1, 0x438($a0)
    ctx->pc = 0x141c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1080), (uint8_t)GPR_U32(ctx, 3));
    // 0x141c90: 0x3e00008  jr          $ra
    ctx->pc = 0x141C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141C90u;
            // 0x141c94: 0xa4800404  sh          $zero, 0x404($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1028), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141C98u;
    // 0x141c98: 0x0  nop
    ctx->pc = 0x141c98u;
    // NOP
    // 0x141c9c: 0x0  nop
    ctx->pc = 0x141c9cu;
    // NOP
    ctx->pc = 0x141ca0u;
}
