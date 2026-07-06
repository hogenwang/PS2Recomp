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

// Function: sub_0022A290
// Address: 0x22a290 - 0x22a2b8
void sub_0022A290_0x22a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A290_0x22a290");
#endif

    ctx->pc = 0x22a290u;

    // 0x22a290: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22a294: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x22a294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x22a298: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x22a298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x22a29c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x22a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x22a2a0: 0xac40f9e8  sw          $zero, -0x618($v0)
    ctx->pc = 0x22a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965736), GPR_U32(ctx, 0));
    // 0x22a2a4: 0xac60f9ec  sw          $zero, -0x614($v1)
    ctx->pc = 0x22a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965740), GPR_U32(ctx, 0));
    // 0x22a2a8: 0xac80f9f0  sw          $zero, -0x610($a0)
    ctx->pc = 0x22a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965744), GPR_U32(ctx, 0));
    // 0x22a2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2ACu;
        // 0x22a2b0: 0xaca0f9f4  sw          $zero, -0x60C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A2B4u;
    // 0x22a2b4: 0x0  nop
    ctx->pc = 0x22a2b4u;
    // NOP
    if (ctx->pc == 0x22a2b4u) { ctx->pc = 0x22a2b8u; }
}
