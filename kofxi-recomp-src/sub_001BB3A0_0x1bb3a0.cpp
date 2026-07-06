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

// Function: sub_001BB3A0
// Address: 0x1bb3a0 - 0x1bb400
void sub_001BB3A0_0x1bb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB3A0_0x1bb3a0");
#endif

    ctx->pc = 0x1bb3a0u;

    // 0x1bb3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb3a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb3ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb3b0: 0x806d46c  j           func_1B51B0
    ctx->pc = 0x1BB3B0u;
    ctx->pc = 0x1BB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3B0u;
    // 0x1bb3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B51B0u;
    sub_001B51B0_0x1b51b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB3B8u;
    // 0x1bb3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3C0u;
    // 0x1bb3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3C0u;
        // 0x1bb3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3C8u;
    // 0x1bb3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3D0u;
    // 0x1bb3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3D8u;
    // 0x1bb3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3E0u;
    // 0x1bb3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB3E8u;
    // 0x1bb3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb3f4: 0x806ba00  j           func_1AE800
    ctx->pc = 0x1BB3F4u;
    ctx->pc = 0x1BB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3F4u;
    // 0x1bb3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE800u, 0x1BB3F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BB3FCu;
    // 0x1bb3fc: 0x0  nop
    ctx->pc = 0x1bb3fcu;
    // NOP
    if (ctx->pc == 0x1bb3fcu) { ctx->pc = 0x1bb400u; }
}
