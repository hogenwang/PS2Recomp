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

// Function: sub_001F74C8
// Address: 0x1f74c8 - 0x1f74e8
void sub_001F74C8_0x1f74c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F74C8_0x1f74c8");
#endif

    ctx->pc = 0x1f74c8u;

    // 0x1f74c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f74c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f74cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f74ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f74d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f74d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f74d4: 0x807ee18  j           func_1FB860
    ctx->pc = 0x1F74D4u;
    ctx->pc = 0x1F74D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74D4u;
    // 0x1f74d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB860u, 0x1F74D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F74DCu;
    // 0x1f74dc: 0x0  nop
    ctx->pc = 0x1f74dcu;
    // NOP
    // 0x1f74e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F74E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F74E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F74E8u;
}
