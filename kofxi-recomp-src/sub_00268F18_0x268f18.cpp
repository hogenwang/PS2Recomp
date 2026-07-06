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

// Function: sub_00268F18
// Address: 0x268f18 - 0x268f30
void sub_00268F18_0x268f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268F18_0x268f18");
#endif

    ctx->pc = 0x268f18u;

    // 0x268f18: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x268f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x268f1c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x268f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x268f20: 0xac401a58  sw          $zero, 0x1A58($v0)
    ctx->pc = 0x268f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6744), GPR_U32(ctx, 0));
    // 0x268f24: 0x3e00008  jr          $ra
    ctx->pc = 0x268F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F24u;
        // 0x268f28: 0xac601a5c  sw          $zero, 0x1A5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F2Cu;
    // 0x268f2c: 0x0  nop
    ctx->pc = 0x268f2cu;
    // NOP
    if (ctx->pc == 0x268f2cu) { ctx->pc = 0x268f30u; }
}
