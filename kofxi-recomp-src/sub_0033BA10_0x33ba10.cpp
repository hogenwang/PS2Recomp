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

// Function: sub_0033BA10
// Address: 0x33ba10 - 0x33ba40
void sub_0033BA10_0x33ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BA10_0x33ba10");
#endif

    ctx->pc = 0x33ba10u;

    // 0x33ba10: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ba14: 0xa0608b10  sb          $zero, -0x74F0($v1)
    ctx->pc = 0x33ba14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937360), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ba18: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ba1c: 0xa0608fc4  sb          $zero, -0x703C($v1)
    ctx->pc = 0x33ba1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294938564), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ba20: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ba24: 0xa0608af0  sb          $zero, -0x7510($v1)
    ctx->pc = 0x33ba24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294937328), (uint8_t)GPR_U32(ctx, 0));
    // 0x33ba28: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA2Cu;
        // 0x33ba30: 0xa0608afc  sb          $zero, -0x7504($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294937340), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA34u;
    // 0x33ba34: 0x0  nop
    ctx->pc = 0x33ba34u;
    // NOP
    // 0x33ba38: 0x0  nop
    ctx->pc = 0x33ba38u;
    // NOP
    // 0x33ba3c: 0x0  nop
    ctx->pc = 0x33ba3cu;
    // NOP
}
