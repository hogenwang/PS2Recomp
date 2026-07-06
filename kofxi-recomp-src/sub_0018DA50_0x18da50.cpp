#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DA50
// Address: 0x18da50 - 0x18da90
void sub_0018DA50_0x18da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DA50_0x18da50");
#endif

    ctx->pc = 0x18da50u;

    // 0x18da50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18da54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18da54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18da58: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18da58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18da5c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18da60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da64: 0x2442bd74  addiu       $v0, $v0, -0x428C
    ctx->pc = 0x18da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950260));
    // 0x18da68: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18da68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18da6c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18da70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18da78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18da80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da84: 0x3e00008  jr          $ra
    ctx->pc = 0x18DA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA84u;
            // 0x18da88: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DA8Cu;
    // 0x18da8c: 0x0  nop
    ctx->pc = 0x18da8cu;
    // NOP
    ctx->pc = 0x18da90u;
}
