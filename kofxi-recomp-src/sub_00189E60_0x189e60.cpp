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

// Function: sub_00189E60
// Address: 0x189e60 - 0x189e90
void sub_00189E60_0x189e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189E60_0x189e60");
#endif

    ctx->pc = 0x189e60u;

    // 0x189e60: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x189e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x189e64: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x189e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x189e68: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x189e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189e6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x189e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189e74: 0x2442dbb8  addiu       $v0, $v0, -0x2448
    ctx->pc = 0x189e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958008));
    // 0x189e78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189e80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189e88: 0x3e00008  jr          $ra
    ctx->pc = 0x189E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E88u;
        // 0x189e8c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189E90u;
}
