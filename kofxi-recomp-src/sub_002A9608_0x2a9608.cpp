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

// Function: sub_002A9608
// Address: 0x2a9608 - 0x2a9620
void sub_002A9608_0x2a9608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9608_0x2a9608");
#endif

    ctx->pc = 0x2a9608u;

    // 0x2a9608: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9608u;
    {
        const bool branch_taken_0x2a9608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9608u;
        // 0x2a960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9608) {
            ctx->pc = 0x2A9614u;
            goto label_2a9614;
        }
    }
    ctx->pc = 0x2A9610u;
    // 0x2a9610: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2a9614:
    // 0x2a9614: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A961Cu;
    // 0x2a961c: 0x0  nop
    ctx->pc = 0x2a961cu;
    // NOP
}
