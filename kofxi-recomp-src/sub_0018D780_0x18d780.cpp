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

// Function: sub_0018D780
// Address: 0x18d780 - 0x18d7c0
void sub_0018D780_0x18d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D780_0x18d780");
#endif

    ctx->pc = 0x18d780u;

    // 0x18d780: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d784: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d788: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18d78c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18d790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d794: 0x2442bd6c  addiu       $v0, $v0, -0x4294
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950252));
    // 0x18d798: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18d798u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d79c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d7a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d7a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d7a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d7ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18D7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7B4u;
        // 0x18d7b8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D7BCu;
    // 0x18d7bc: 0x0  nop
    ctx->pc = 0x18d7bcu;
    // NOP
    if (ctx->pc == 0x18d7bcu) { ctx->pc = 0x18d7c0u; }
}
