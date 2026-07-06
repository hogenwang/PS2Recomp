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

// Function: sub_002971B0
// Address: 0x2971b0 - 0x297218
void sub_002971B0_0x2971b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002971B0_0x2971b0");
#endif

    switch (ctx->pc) {
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c8u: goto label_2971c8;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971f0u: goto label_2971f0;
        default: break;
    }

    ctx->pc = 0x2971b0u;

    // 0x2971b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2971b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2971b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2971b8: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2971B8u;
    SET_GPR_U32(ctx, 31, 0x2971C0u);
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x2971B8u, 0x2971C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971C0u;
label_2971c0:
    // 0x2971c0: 0xc0a5c58  jal         func_297160
    ctx->pc = 0x2971C0u;
    SET_GPR_U32(ctx, 31, 0x2971C8u);
    ctx->pc = 0x2971C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971C0u;
    // 0x2971c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297160u, 0x2971C0u, 0x2971C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971C8u;
label_2971c8:
    // 0x2971c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2971c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2971cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2971CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971CCu;
        // 0x2971d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2971D4u;
    // 0x2971d4: 0x0  nop
    ctx->pc = 0x2971d4u;
    // NOP
    // 0x2971d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2971d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2971dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2971dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2971e0: 0xc0a6a4e  jal         func_29A938
    ctx->pc = 0x2971E0u;
    SET_GPR_U32(ctx, 31, 0x2971E8u);
    ctx->pc = 0x29A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A938u, 0x2971E0u, 0x2971E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971E8u;
label_2971e8:
    // 0x2971e8: 0xc0a5c62  jal         func_297188
    ctx->pc = 0x2971E8u;
    SET_GPR_U32(ctx, 31, 0x2971F0u);
    ctx->pc = 0x2971ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2971E8u;
    // 0x2971ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297188u, 0x2971E8u, 0x2971F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2971F0u;
label_2971f0:
    // 0x2971f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2971f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2971f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2971F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971F4u;
        // 0x2971f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2971FCu;
    // 0x2971fc: 0x0  nop
    ctx->pc = 0x2971fcu;
    // NOP
    // 0x297200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297200u;
    {
        const bool branch_taken_0x297200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297200) {
            ctx->pc = 0x297210u;
            goto label_297210;
        }
    }
    ctx->pc = 0x297208u;
    // 0x297208: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x297208u;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x297210u;
label_297210:
    // 0x297210: 0x3e00008  jr          $ra
    ctx->pc = 0x297210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297218u;
}
