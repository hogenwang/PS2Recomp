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

// Function: sub_00201948
// Address: 0x201948 - 0x2019a8
void sub_00201948_0x201948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201948_0x201948");
#endif

    switch (ctx->pc) {
        case 0x201978u: goto label_201978;
        case 0x201998u: goto label_201998;
        default: break;
    }

    ctx->pc = 0x201948u;

    // 0x201948: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x201948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20194c: 0x3e00008  jr          $ra
    ctx->pc = 0x20194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20194Cu;
        // 0x201950: 0x8c62190c  lw          $v0, 0x190C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6412)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201954u;
    // 0x201954: 0x0  nop
    ctx->pc = 0x201954u;
    // NOP
    // 0x201958: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20195c: 0x3e00008  jr          $ra
    ctx->pc = 0x20195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20195Cu;
        // 0x201960: 0xac4418f4  sw          $a0, 0x18F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201964u;
    // 0x201964: 0x0  nop
    ctx->pc = 0x201964u;
    // NOP
    // 0x201968: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x201968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20196c: 0x3e00008  jr          $ra
    ctx->pc = 0x20196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20196Cu;
        // 0x201970: 0x8c6218f4  lw          $v0, 0x18F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6388)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201974u;
    // 0x201974: 0x0  nop
    ctx->pc = 0x201974u;
    // NOP
label_201978:
    // 0x201978: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x201978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20197c: 0x3e00008  jr          $ra
    ctx->pc = 0x20197Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20197Cu;
        // 0x201980: 0xac450044  sw          $a1, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20197Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201984u;
    // 0x201984: 0x0  nop
    ctx->pc = 0x201984u;
    // NOP
    // 0x201988: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x201988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x20198c: 0x3e00008  jr          $ra
    ctx->pc = 0x20198Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20198Cu;
        // 0x201990: 0xac450048  sw          $a1, 0x48($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20198Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201994u;
    // 0x201994: 0x0  nop
    ctx->pc = 0x201994u;
    // NOP
label_201998:
    // 0x201998: 0x3e00008  jr          $ra
    ctx->pc = 0x201998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201998u;
        // 0x20199c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019A0u;
    // 0x2019a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2019A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019A0u;
        // 0x2019a4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019A8u;
}
