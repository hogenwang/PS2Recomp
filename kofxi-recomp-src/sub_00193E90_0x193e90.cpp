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

// Function: sub_00193E90
// Address: 0x193e90 - 0x193ea0
void sub_00193E90_0x193e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193E90_0x193e90");
#endif

    ctx->pc = 0x193e90u;

    // 0x193e90: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x193e90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x193e94: 0x3063fff9  andi        $v1, $v1, 0xFFF9
    ctx->pc = 0x193e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65529);
    // 0x193e98: 0x3e00008  jr          $ra
    ctx->pc = 0x193E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E98u;
        // 0x193e9c: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193EA0u;
}
