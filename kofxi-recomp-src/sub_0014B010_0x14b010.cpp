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

// Function: sub_0014B010
// Address: 0x14b010 - 0x14b030
void sub_0014B010_0x14b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B010_0x14b010");
#endif

    ctx->pc = 0x14b010u;

    // 0x14b010: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14b014: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14b014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14b018: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14b01c: 0xa0855d41  sb          $a1, 0x5D41($a0)
    ctx->pc = 0x14b01cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23873), (uint8_t)GPR_U32(ctx, 5));
    // 0x14b020: 0x3e00008  jr          $ra
    ctx->pc = 0x14B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B020u;
        // 0x14b024: 0xa0655d40  sb          $a1, 0x5D40($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23872), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B028u;
    // 0x14b028: 0x0  nop
    ctx->pc = 0x14b028u;
    // NOP
    // 0x14b02c: 0x0  nop
    ctx->pc = 0x14b02cu;
    // NOP
    if (ctx->pc == 0x14b02cu) { ctx->pc = 0x14b030u; }
}
