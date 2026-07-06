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

// Function: sub_001C0600
// Address: 0x1c0600 - 0x1c0630
void sub_001C0600_0x1c0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0600_0x1c0600");
#endif

    switch (ctx->pc) {
        case 0x1c0608u: goto label_1c0608;
        default: break;
    }

    ctx->pc = 0x1c0600u;

    // 0x1c0600: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x1c0600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1c0604: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1c0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1c0608:
    // 0x1c0608: 0x0  nop
    ctx->pc = 0x1c0608u;
    // NOP
    // 0x1c060c: 0x0  nop
    ctx->pc = 0x1c060cu;
    // NOP
    // 0x1c0610: 0x0  nop
    ctx->pc = 0x1c0610u;
    // NOP
    // 0x1c0614: 0x0  nop
    ctx->pc = 0x1c0614u;
    // NOP
    // 0x1c0618: 0x0  nop
    ctx->pc = 0x1c0618u;
    // NOP
    // 0x1c061c: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C061Cu;
    {
        const bool branch_taken_0x1c061c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c061c) {
            ctx->pc = 0x1C0620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C061Cu;
            // 0x1c0620: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0608;
        }
    }
    ctx->pc = 0x1C0624u;
    // 0x1c0624: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C062Cu;
    // 0x1c062c: 0x0  nop
    ctx->pc = 0x1c062cu;
    // NOP
    if (ctx->pc == 0x1c062cu) { ctx->pc = 0x1c0630u; }
}
