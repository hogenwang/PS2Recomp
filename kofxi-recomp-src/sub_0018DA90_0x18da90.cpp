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

// Function: sub_0018DA90
// Address: 0x18da90 - 0x18dad0
void sub_0018DA90_0x18da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DA90_0x18da90");
#endif

    ctx->pc = 0x18da90u;

    // 0x18da90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18da90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18da94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18da98: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18da98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18da9c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18daa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18daa4: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x18daa8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18daa8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18daac: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18daacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18dab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dab4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dabc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dac0: 0x3e00008  jr          $ra
    ctx->pc = 0x18DAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC0u;
        // 0x18dac4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DAC8u;
    // 0x18dac8: 0x0  nop
    ctx->pc = 0x18dac8u;
    // NOP
    // 0x18dacc: 0x0  nop
    ctx->pc = 0x18daccu;
    // NOP
}
