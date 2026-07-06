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

// Function: sub_002B1840
// Address: 0x2b1840 - 0x2b1850
void sub_002B1840_0x2b1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1840_0x2b1840");
#endif

    ctx->pc = 0x2b1840u;

    // 0x2b1840: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2b1840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2b1844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1848: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1848u;
        // 0x2b184c: 0xac6075f8  sw          $zero, 0x75F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 30200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1850u;
}
