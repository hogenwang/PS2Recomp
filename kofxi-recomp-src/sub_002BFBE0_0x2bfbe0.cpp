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

// Function: sub_002BFBE0
// Address: 0x2bfbe0 - 0x2bfc00
void sub_002BFBE0_0x2bfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFBE0_0x2bfbe0");
#endif

    ctx->pc = 0x2bfbe0u;

    // 0x2bfbe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfbe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfbe8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFBE8u;
    {
        const bool branch_taken_0x2bfbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bfbe8) {
            ctx->pc = 0x2BFBF8u;
            goto label_2bfbf8;
        }
    }
    ctx->pc = 0x2BFBF0u;
    // 0x2bfbf0: 0x80b1608  j           func_2C5820
    ctx->pc = 0x2BFBF0u;
    ctx->pc = 0x2BFBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBF0u;
    // 0x2bfbf4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    sub_002C5820_0x2c5820(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFBF8u;
label_2bfbf8:
    // 0x2bfbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC00u;
}
