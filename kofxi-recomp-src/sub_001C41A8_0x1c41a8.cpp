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

// Function: sub_001C41A8
// Address: 0x1c41a8 - 0x1c41d8
void sub_001C41A8_0x1c41a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C41A8_0x1c41a8");
#endif

    switch (ctx->pc) {
        case 0x1c41b0u: goto label_1c41b0;
        default: break;
    }

    ctx->pc = 0x1c41a8u;

    // 0x1c41a8: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x1c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x1c41ac: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1c41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1c41b0:
    // 0x1c41b0: 0x0  nop
    ctx->pc = 0x1c41b0u;
    // NOP
    // 0x1c41b4: 0x0  nop
    ctx->pc = 0x1c41b4u;
    // NOP
    // 0x1c41b8: 0x0  nop
    ctx->pc = 0x1c41b8u;
    // NOP
    // 0x1c41bc: 0x0  nop
    ctx->pc = 0x1c41bcu;
    // NOP
    // 0x1c41c0: 0x0  nop
    ctx->pc = 0x1c41c0u;
    // NOP
    // 0x1c41c4: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C41C4u;
    {
        const bool branch_taken_0x1c41c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c41c4) {
            ctx->pc = 0x1C41C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C41C4u;
            // 0x1c41c8: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C41B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c41b0;
        }
    }
    ctx->pc = 0x1C41CCu;
    // 0x1c41cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C41CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C41D4u;
    // 0x1c41d4: 0x0  nop
    ctx->pc = 0x1c41d4u;
    // NOP
    if (ctx->pc == 0x1c41d4u) { ctx->pc = 0x1c41d8u; }
}
