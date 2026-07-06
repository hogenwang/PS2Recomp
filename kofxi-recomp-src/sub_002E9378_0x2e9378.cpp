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

// Function: sub_002E9378
// Address: 0x2e9378 - 0x2e9410
void sub_002E9378_0x2e9378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9378_0x2e9378");
#endif

    switch (ctx->pc) {
        case 0x2e9398u: goto label_2e9398;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93fcu: goto label_2e93fc;
        default: break;
    }

    ctx->pc = 0x2e9378u;

    // 0x2e9378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e937c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9384: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e938c: 0x26045c80  addiu       $a0, $s0, 0x5C80
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23680));
    // 0x2e9390: 0xc0435a6  jal         func_10D698
    ctx->pc = 0x2E9390u;
    SET_GPR_U32(ctx, 31, 0x2E9398u);
    ctx->pc = 0x2E9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9390u;
    // 0x2e9394: 0x26056480  addiu       $a1, $s0, 0x6480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 25728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D698u, 0x2E9390u, 0x2E9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9398u;
label_2e9398:
    // 0x2e9398: 0xc0ba7bc  jal         func_2E9EF0
    ctx->pc = 0x2E9398u;
    SET_GPR_U32(ctx, 31, 0x2E93A0u);
    ctx->pc = 0x2E939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9398u;
    // 0x2e939c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9EF0u, 0x2E9398u, 0x2E93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93A0u;
label_2e93a0:
    // 0x2e93a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e93a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e93a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e93a8:
    // 0x2e93a8: 0xc0ba504  jal         func_2E9410
label_2e93ac:
    if (ctx->pc == 0x2E93ACu) {
        ctx->pc = 0x2E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A8u;
        // 0x2e93ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93B0u;
        goto label_2e93b0;
    }
    ctx->pc = 0x2E93A8u;
    SET_GPR_U32(ctx, 31, 0x2E93B0u);
    ctx->pc = 0x2E93ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93A8u;
    // 0x2e93ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9410u, 0x2E93A8u, 0x2E93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93B0u;
label_2e93b0:
    // 0x2e93b0: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E93B0u;
    {
        const bool branch_taken_0x2e93b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93b0) {
            ctx->pc = 0x2E93B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93B0u;
            // 0x2e93b4: 0xde020060  ld          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93F0u;
            goto label_2e93f0;
        }
    }
    ctx->pc = 0x2E93B8u;
    // 0x2e93b8: 0xde020058  ld          $v0, 0x58($s0)
    ctx->pc = 0x2e93b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2e93bc: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2e93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e93c0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2e93c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2e93c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E93C4u;
    {
        const bool branch_taken_0x2e93c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C4u;
        // 0x2e93c8: 0xfe020058  sd          $v0, 0x58($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93c4) {
            ctx->pc = 0x2E93D4u;
            goto label_2e93d4;
        }
    }
    ctx->pc = 0x2E93CCu;
    // 0x2e93cc: 0xc08cd78  jal         func_2335E0
    ctx->pc = 0x2E93CCu;
    SET_GPR_U32(ctx, 31, 0x2E93D4u);
    ctx->pc = 0x2E93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93CCu;
    // 0x2e93d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2335E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2335E0u, 0x2E93CCu, 0x2E93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93D4u;
label_2e93d4:
    // 0x2e93d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e93d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e93d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e93dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e93e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e93e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e93e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e93e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e93e8: 0x808e486  j           func_239218
    ctx->pc = 0x2E93E8u;
    ctx->pc = 0x2E93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93E8u;
    // 0x2e93ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239218u, 0x2E93E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E93F0u;
label_2e93f0:
    // 0x2e93f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e93f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e93f4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2e93f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2e93f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e93f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e93fc:
    // 0x2e93fc: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x2e93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x2e9400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9404: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9404u;
        // 0x2e9408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E940Cu;
    // 0x2e940c: 0x0  nop
    ctx->pc = 0x2e940cu;
    // NOP
    if (ctx->pc == 0x2e940cu) { ctx->pc = 0x2e9410u; }
}
