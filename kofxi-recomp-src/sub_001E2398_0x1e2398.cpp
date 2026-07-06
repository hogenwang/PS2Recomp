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

// Function: sub_001E2398
// Address: 0x1e2398 - 0x1e2438
void sub_001E2398_0x1e2398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2398_0x1e2398");
#endif

    switch (ctx->pc) {
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23fcu: goto label_1e23fc;
        case 0x1e2414u: goto label_1e2414;
        default: break;
    }

    ctx->pc = 0x1e2398u;

    // 0x1e2398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e23a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e23a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e23a4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E23A4u;
    SET_GPR_U32(ctx, 31, 0x1E23ACu);
    ctx->pc = 0x1E23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23A4u;
    // 0x1e23a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E23A4u, 0x1E23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23ACu;
label_1e23ac:
    // 0x1e23ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e23acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e23b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e23b4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E23B4u;
    {
        const bool branch_taken_0x1e23b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B4u;
        // 0x1e23b8: 0x2484d4a8  addiu       $a0, $a0, -0x2B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23b4) {
            ctx->pc = 0x1E23D0u;
            goto label_1e23d0;
        }
    }
    ctx->pc = 0x1E23BCu;
    // 0x1e23bc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E23BCu;
    SET_GPR_U32(ctx, 31, 0x1E23C4u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E23BCu, 0x1E23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23C4u;
label_1e23c4:
    // 0x1e23c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E23C4u;
    {
        const bool branch_taken_0x1e23c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23C4u;
        // 0x1e23c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23c4) {
            ctx->pc = 0x1E23D4u;
            goto label_1e23d4;
        }
    }
    ctx->pc = 0x1E23CCu;
    // 0x1e23cc: 0x0  nop
    ctx->pc = 0x1e23ccu;
    // NOP
label_1e23d0:
    // 0x1e23d0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1e23d4:
    // 0x1e23d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e23d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e23d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e23d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e23dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23DCu;
        // 0x1e23e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E23DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E23E4u;
    // 0x1e23e4: 0x0  nop
    ctx->pc = 0x1e23e4u;
    // NOP
    // 0x1e23e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e23e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e23ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e23f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e23f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e23f4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E23F4u;
    SET_GPR_U32(ctx, 31, 0x1E23FCu);
    ctx->pc = 0x1E23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23F4u;
    // 0x1e23f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E23F4u, 0x1E23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23FCu;
label_1e23fc:
    // 0x1e23fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2400: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2400u;
    {
        const bool branch_taken_0x1e2400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2400u;
        // 0x1e2404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2400) {
            ctx->pc = 0x1E2428u;
            goto label_1e2428;
        }
    }
    ctx->pc = 0x1E2408u;
    // 0x1e2408: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e240c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E240Cu;
    SET_GPR_U32(ctx, 31, 0x1E2414u);
    ctx->pc = 0x1E2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E240Cu;
    // 0x1e2410: 0x2484d4d8  addiu       $a0, $a0, -0x2B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E240Cu, 0x1E2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2414u;
label_1e2414:
    // 0x1e2414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e241c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2420: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2420u;
        // 0x1e2424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2428u;
label_1e2428:
    // 0x1e2428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e242c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2430: 0x8078a60  j           func_1E2980
    ctx->pc = 0x1E2430u;
    ctx->pc = 0x1E2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2430u;
    // 0x1e2434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2980u, 0x1E2430u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E2438u;
}
