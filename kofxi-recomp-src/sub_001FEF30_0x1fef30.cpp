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

// Function: sub_001FEF30
// Address: 0x1fef30 - 0x1fef48
void sub_001FEF30_0x1fef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEF30_0x1fef30");
#endif

    ctx->pc = 0x1fef30u;

    // 0x1fef30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fef30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fef34: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fef34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fef38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fef38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF3Cu;
        // 0x1fef40: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEF44u;
    // 0x1fef44: 0x0  nop
    ctx->pc = 0x1fef44u;
    // NOP
}
