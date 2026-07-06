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

// Function: sub_001F53F0
// Address: 0x1f53f0 - 0x1f5408
void sub_001F53F0_0x1f53f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53F0_0x1f53f0");
#endif

    ctx->pc = 0x1f53f0u;

    // 0x1f53f0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F53F0u;
    {
        const bool branch_taken_0x1f53f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53F0u;
        // 0x1f53f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53f0) {
            ctx->pc = 0x1F53FCu;
            goto label_1f53fc;
        }
    }
    ctx->pc = 0x1F53F8u;
    // 0x1f53f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f53fc:
    // 0x1f53fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5404u;
    // 0x1f5404: 0x0  nop
    ctx->pc = 0x1f5404u;
    // NOP
    if (ctx->pc == 0x1f5404u) { ctx->pc = 0x1f5408u; }
}
