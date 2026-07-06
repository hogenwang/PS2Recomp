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

// Function: sub_0029C8C8
// Address: 0x29c8c8 - 0x29c8f8
void sub_0029C8C8_0x29c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C8C8_0x29c8c8");
#endif

    ctx->pc = 0x29c8c8u;

    // 0x29c8c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c8cc: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x29c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x29c8d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C8D0u;
    {
        const bool branch_taken_0x29c8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c8d0) {
            ctx->pc = 0x29C8E8u;
            goto label_29c8e8;
        }
    }
    ctx->pc = 0x29C8D8u;
    // 0x29c8d8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C8D8u;
    {
        const bool branch_taken_0x29c8d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8D8u;
        // 0x29c8dc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8d8) {
            ctx->pc = 0x29C8F0u;
            goto label_29c8f0;
        }
    }
    ctx->pc = 0x29C8E0u;
    // 0x29c8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8E0u;
        // 0x29c8e4: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8E8u;
label_29c8e8:
    // 0x29c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8E8u;
        // 0x29c8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8F0u;
label_29c8f0:
    // 0x29c8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8F8u;
}
