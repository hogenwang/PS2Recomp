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

// Function: sub_00123258
// Address: 0x123258 - 0x123290
void sub_00123258_0x123258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123258_0x123258");
#endif

    switch (ctx->pc) {
        case 0x123268u: goto label_123268;
        default: break;
    }

    ctx->pc = 0x123258u;

    // 0x123258: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x123258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12325c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12325cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123260: 0x10af0008  beq         $a1, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x123260u;
    {
        const bool branch_taken_0x123260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x123260) {
            ctx->pc = 0x123284u;
            goto label_123284;
        }
    }
    ctx->pc = 0x123268u;
label_123268:
    // 0x123268: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x123268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12326c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x123270: 0x0  nop
    ctx->pc = 0x123270u;
    // NOP
    // 0x123274: 0x0  nop
    ctx->pc = 0x123274u;
    // NOP
    // 0x123278: 0x0  nop
    ctx->pc = 0x123278u;
    // NOP
    // 0x12327c: 0x14affffa  bne         $a1, $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12327Cu;
    {
        const bool branch_taken_0x12327c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x123280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12327Cu;
        // 0x123280: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12327c) {
            ctx->pc = 0x123268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123268;
        }
    }
    ctx->pc = 0x123284u;
label_123284:
    // 0x123284: 0x3e00008  jr          $ra
    ctx->pc = 0x123284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12328Cu;
    // 0x12328c: 0x0  nop
    ctx->pc = 0x12328cu;
    // NOP
}
