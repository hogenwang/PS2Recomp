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

// Function: sub_0018D740
// Address: 0x18d740 - 0x18d780
void sub_0018D740_0x18d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D740_0x18d740");
#endif

    ctx->pc = 0x18d740u;

    // 0x18d740: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d744: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d748: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18d748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18d74c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18d750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d754: 0x2442bda8  addiu       $v0, $v0, -0x4258
    ctx->pc = 0x18d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950312));
    // 0x18d758: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18d758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d75c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d764: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d76c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d774: 0x3e00008  jr          $ra
    ctx->pc = 0x18D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D774u;
        // 0x18d778: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D77Cu;
    // 0x18d77c: 0x0  nop
    ctx->pc = 0x18d77cu;
    // NOP
}
