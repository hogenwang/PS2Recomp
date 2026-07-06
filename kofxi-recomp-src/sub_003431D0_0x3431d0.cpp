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

// Function: sub_003431D0
// Address: 0x3431d0 - 0x3431f0
void sub_003431D0_0x3431d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003431D0_0x3431d0");
#endif

    ctx->pc = 0x3431d0u;

    // 0x3431d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3431d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3431d4: 0xac60fe40  sw          $zero, -0x1C0($v1)
    ctx->pc = 0x3431d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966848), GPR_U32(ctx, 0));
    // 0x3431d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3431d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3431dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3431DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3431E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431DCu;
        // 0x3431e0: 0xac60fe48  sw          $zero, -0x1B8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3431DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3431E4u;
    // 0x3431e4: 0x0  nop
    ctx->pc = 0x3431e4u;
    // NOP
    // 0x3431e8: 0x0  nop
    ctx->pc = 0x3431e8u;
    // NOP
    // 0x3431ec: 0x0  nop
    ctx->pc = 0x3431ecu;
    // NOP
}
