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

// Function: sub_00189FB0
// Address: 0x189fb0 - 0x189fe0
void sub_00189FB0_0x189fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189FB0_0x189fb0");
#endif

    ctx->pc = 0x189fb0u;

    // 0x189fb0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189fb4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189fb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189fbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x189fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189fc4: 0x2442dbb4  addiu       $v0, $v0, -0x244C
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958004));
    // 0x189fc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x189FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FD0u;
        // 0x189fd4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189FD8u;
    // 0x189fd8: 0x0  nop
    ctx->pc = 0x189fd8u;
    // NOP
    // 0x189fdc: 0x0  nop
    ctx->pc = 0x189fdcu;
    // NOP
}
