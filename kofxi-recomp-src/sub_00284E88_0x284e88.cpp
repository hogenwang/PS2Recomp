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

// Function: sub_00284E88
// Address: 0x284e88 - 0x284eb0
void sub_00284E88_0x284e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284E88_0x284e88");
#endif

    ctx->pc = 0x284e88u;

    // 0x284e88: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x284e8c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x284e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x284e90: 0x3e00008  jr          $ra
    ctx->pc = 0x284E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E90u;
        // 0x284e94: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284E98u;
    // 0x284e98: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x284e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x284e9c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x284e9cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x284ea0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x284ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x284ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x284EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EA4u;
        // 0x284ea8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284EACu;
    // 0x284eac: 0x0  nop
    ctx->pc = 0x284eacu;
    // NOP
    if (ctx->pc == 0x284eacu) { ctx->pc = 0x284eb0u; }
}
