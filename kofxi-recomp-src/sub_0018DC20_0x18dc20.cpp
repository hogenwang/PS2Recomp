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

// Function: sub_0018DC20
// Address: 0x18dc20 - 0x18dc60
void sub_0018DC20_0x18dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DC20_0x18dc20");
#endif

    ctx->pc = 0x18dc20u;

    // 0x18dc20: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18dc24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18dc28: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18dc28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18dc2c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18dc30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dc34: 0x2442bdb8  addiu       $v0, $v0, -0x4248
    ctx->pc = 0x18dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950328));
    // 0x18dc38: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18dc38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dc3c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18dc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dc44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dc48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dc4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dc50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dc54: 0x3e00008  jr          $ra
    ctx->pc = 0x18DC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC54u;
        // 0x18dc58: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DC5Cu;
    // 0x18dc5c: 0x0  nop
    ctx->pc = 0x18dc5cu;
    // NOP
    if (ctx->pc == 0x18dc5cu) { ctx->pc = 0x18dc60u; }
}
