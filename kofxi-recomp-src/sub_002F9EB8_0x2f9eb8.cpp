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

// Function: sub_002F9EB8
// Address: 0x2f9eb8 - 0x2f9ee0
void sub_002F9EB8_0x2f9eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9EB8_0x2f9eb8");
#endif

    ctx->pc = 0x2f9eb8u;

    // 0x2f9eb8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9ebc: 0xac44067c  sw          $a0, 0x67C($v0)
    ctx->pc = 0x2f9ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1660), GPR_U32(ctx, 4));
    // 0x2f9ec0: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x2f9ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ec4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9ec8: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9ecc: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x2f9ed0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f9ed4: 0xac850688  sw          $a1, 0x688($a0)
    ctx->pc = 0x2f9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1672), GPR_U32(ctx, 5));
    // 0x2f9ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ED8u;
        // 0x2f9edc: 0xac620660  sw          $v0, 0x660($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9EE0u;
}
