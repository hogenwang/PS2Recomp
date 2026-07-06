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

// Function: sub_001DA008
// Address: 0x1da008 - 0x1da020
void sub_001DA008_0x1da008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA008_0x1da008");
#endif

    ctx->pc = 0x1da008u;

    // 0x1da008: 0x24840408  addiu       $a0, $a0, 0x408
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
    // 0x1da00c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1da00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1da010: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1da010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1da014: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA014u;
        // 0x1da018: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA01Cu;
    // 0x1da01c: 0x0  nop
    ctx->pc = 0x1da01cu;
    // NOP
}
