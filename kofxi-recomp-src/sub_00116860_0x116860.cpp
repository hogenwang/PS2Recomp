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

// Function: sub_00116860
// Address: 0x116860 - 0x116940
void sub_00116860_0x116860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116860_0x116860");
#endif

    switch (ctx->pc) {
        case 0x116894u: goto label_116894;
        case 0x116900u: goto label_116900;
        case 0x116910u: goto label_116910;
        case 0x116924u: goto label_116924;
        case 0x116934u: goto label_116934;
        default: break;
    }

    ctx->pc = 0x116860u;

label_116860:
    // 0x116860: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x116864: 0xc  syscall     0
    ctx->pc = 0x116864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116868: 0x3e00008  jr          $ra
    ctx->pc = 0x116868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116870u;
    // 0x116870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116874: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x116874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x116878: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x116878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x11687c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11687Cu;
    {
        const bool branch_taken_0x11687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11687Cu;
        // 0x116880: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11687c) {
            ctx->pc = 0x11688Cu;
            goto label_11688c;
        }
    }
    ctx->pc = 0x116884u;
    // 0x116884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116884u;
    {
        const bool branch_taken_0x116884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116884u;
        // 0x116888: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116884) {
            ctx->pc = 0x116894u;
            goto label_116894;
        }
    }
    ctx->pc = 0x11688Cu;
label_11688c:
    // 0x11688c: 0xc045a18  jal         func_116860
    ctx->pc = 0x11688Cu;
    SET_GPR_U32(ctx, 31, 0x116894u);
    ctx->pc = 0x116860u;
    goto label_116860;
    ctx->pc = 0x116894u;
label_116894:
    // 0x116894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116898: 0x3e00008  jr          $ra
    ctx->pc = 0x116898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116898u;
        // 0x11689c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168A0u;
    // 0x1168a0: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x1168a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x1168a4: 0xc  syscall     0
    ctx->pc = 0x1168a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168B0u;
    // 0x1168b0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x1168b4: 0xc  syscall     0
    ctx->pc = 0x1168b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168C0u;
    // 0x1168c0: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x1168c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x1168c4: 0xc  syscall     0
    ctx->pc = 0x1168c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168D0u;
    // 0x1168d0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1168d4: 0xc  syscall     0
    ctx->pc = 0x1168d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168E0u;
    // 0x1168e0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x1168e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x1168e4: 0xc  syscall     0
    ctx->pc = 0x1168e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168F0u;
    // 0x1168f0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1168f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1168f4: 0xc  syscall     0
    ctx->pc = 0x1168f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1168f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1168F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1168F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116900u;
label_116900:
    // 0x116900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x116904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116908: 0xc043430  jal         func_10D0C0
    ctx->pc = 0x116908u;
    SET_GPR_U32(ctx, 31, 0x116910u);
    ctx->pc = 0x10D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D0C0u, 0x116908u, 0x116910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116910u;
label_116910:
    // 0x116910: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x116910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x116914: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116914u;
    {
        const bool branch_taken_0x116914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116914) {
            ctx->pc = 0x11692Cu;
            goto label_11692c;
        }
    }
    ctx->pc = 0x11691Cu;
    // 0x11691c: 0xc045a50  jal         func_116940
    ctx->pc = 0x11691Cu;
    SET_GPR_U32(ctx, 31, 0x116924u);
    ctx->pc = 0x116940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116940u, 0x11691Cu, 0x116924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116924u;
label_116924:
    // 0x116924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116924u;
    {
        const bool branch_taken_0x116924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116924u;
        // 0x116928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116924) {
            ctx->pc = 0x116938u;
            goto label_116938;
        }
    }
    ctx->pc = 0x11692Cu;
label_11692c:
    // 0x11692c: 0xc043434  jal         func_10D0D0
    ctx->pc = 0x11692Cu;
    SET_GPR_U32(ctx, 31, 0x116934u);
    ctx->pc = 0x10D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D0D0u, 0x11692Cu, 0x116934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116934u;
label_116934:
    // 0x116934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116938:
    // 0x116938: 0x3e00008  jr          $ra
    ctx->pc = 0x116938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116938u;
        // 0x11693c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116940u;
}
