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

// Function: sub_002F9EE0
// Address: 0x2f9ee0 - 0x2f9f08
void sub_002F9EE0_0x2f9ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9EE0_0x2f9ee0");
#endif

    ctx->pc = 0x2f9ee0u;

    // 0x2f9ee0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9ee4: 0xac440680  sw          $a0, 0x680($v0)
    ctx->pc = 0x2f9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1664), GPR_U32(ctx, 4));
    // 0x2f9ee8: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x2f9ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9eec: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9ef0: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9ef4: 0x24429050  addiu       $v0, $v0, -0x6FB0
    ctx->pc = 0x2f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938704));
    // 0x2f9ef8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f9efc: 0xac85068c  sw          $a1, 0x68C($a0)
    ctx->pc = 0x2f9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1676), GPR_U32(ctx, 5));
    // 0x2f9f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F00u;
        // 0x2f9f04: 0xac620664  sw          $v0, 0x664($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9F08u;
}
