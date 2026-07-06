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

// Function: sub_00180170
// Address: 0x180170 - 0x180190
void sub_00180170_0x180170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180170_0x180170");
#endif

    ctx->pc = 0x180170u;

    // 0x180170: 0xa080035c  sb          $zero, 0x35C($a0)
    ctx->pc = 0x180170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 860), (uint8_t)GPR_U32(ctx, 0));
    // 0x180174: 0xa080035d  sb          $zero, 0x35D($a0)
    ctx->pc = 0x180174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 861), (uint8_t)GPR_U32(ctx, 0));
    // 0x180178: 0xa080035f  sb          $zero, 0x35F($a0)
    ctx->pc = 0x180178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 863), (uint8_t)GPR_U32(ctx, 0));
    // 0x18017c: 0xa080036c  sb          $zero, 0x36C($a0)
    ctx->pc = 0x18017cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 876), (uint8_t)GPR_U32(ctx, 0));
    // 0x180180: 0xa080036d  sb          $zero, 0x36D($a0)
    ctx->pc = 0x180180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 877), (uint8_t)GPR_U32(ctx, 0));
    // 0x180184: 0x3e00008  jr          $ra
    ctx->pc = 0x180184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180184u;
        // 0x180188: 0xa080036f  sb          $zero, 0x36F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 879), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18018Cu;
    // 0x18018c: 0x0  nop
    ctx->pc = 0x18018cu;
    // NOP
    if (ctx->pc == 0x18018cu) { ctx->pc = 0x180190u; }
}
