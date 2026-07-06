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

// Function: sub_002CA7E0
// Address: 0x2ca7e0 - 0x2caa88
void sub_002CA7E0_0x2ca7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA7E0_0x2ca7e0");
#endif

    switch (ctx->pc) {
        case 0x2ca898u: goto label_2ca898;
        case 0x2ca8b8u: goto label_2ca8b8;
        case 0x2ca8d8u: goto label_2ca8d8;
        case 0x2ca8f8u: goto label_2ca8f8;
        case 0x2ca918u: goto label_2ca918;
        case 0x2ca938u: goto label_2ca938;
        case 0x2ca958u: goto label_2ca958;
        case 0x2ca978u: goto label_2ca978;
        case 0x2ca998u: goto label_2ca998;
        case 0x2ca9b8u: goto label_2ca9b8;
        case 0x2ca9d8u: goto label_2ca9d8;
        case 0x2ca9f8u: goto label_2ca9f8;
        case 0x2caa18u: goto label_2caa18;
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa78u: goto label_2caa78;
        default: break;
    }

    ctx->pc = 0x2ca7e0u;

label_2ca7e0:
    // 0x2ca7e0: 0x24030803  addiu       $v1, $zero, 0x803
    ctx->pc = 0x2ca7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x2ca7e4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CA7E4u;
    {
        const bool branch_taken_0x2ca7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7E4u;
        // 0x2ca7e8: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7e4) {
            ctx->pc = 0x2CA880u;
            goto label_2ca880;
        }
    }
    ctx->pc = 0x2CA7ECu;
    // 0x2ca7ec: 0x28820804  slti        $v0, $a0, 0x804
    ctx->pc = 0x2ca7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2052) ? 1 : 0);
    // 0x2ca7f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CA7F0u;
    {
        const bool branch_taken_0x2ca7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7F0u;
        // 0x2ca7f4: 0x28820809  slti        $v0, $a0, 0x809 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2057) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7f0) {
            ctx->pc = 0x2CA840u;
            goto label_2ca840;
        }
    }
    ctx->pc = 0x2CA7F8u;
    // 0x2ca7f8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ca7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ca7fc: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CA7FCu;
    {
        const bool branch_taken_0x2ca7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA7FCu;
        // 0x2ca800: 0x2402020d  addiu       $v0, $zero, 0x20D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca7fc) {
            ctx->pc = 0x2CA880u;
            goto label_2ca880;
        }
    }
    ctx->pc = 0x2CA804u;
    // 0x2ca804: 0x28820801  slti        $v0, $a0, 0x801
    ctx->pc = 0x2ca804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x2ca808: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA808u;
    {
        const bool branch_taken_0x2ca808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA808u;
        // 0x2ca80c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca808) {
            ctx->pc = 0x2CA828u;
            goto label_2ca828;
        }
    }
    ctx->pc = 0x2CA810u;
    // 0x2ca810: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x2ca810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2ca814: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CA814u;
    {
        const bool branch_taken_0x2ca814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA814u;
        // 0x2ca818: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca814) {
            ctx->pc = 0x2CA880u;
            goto label_2ca880;
        }
    }
    ctx->pc = 0x2CA81Cu;
    // 0x2ca81c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA81Cu;
        // 0x2ca820: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA824u;
    // 0x2ca824: 0x0  nop
    ctx->pc = 0x2ca824u;
    // NOP
label_2ca828:
    // 0x2ca828: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA828u;
    {
        const bool branch_taken_0x2ca828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA828u;
        // 0x2ca82c: 0x24030802  addiu       $v1, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca828) {
            ctx->pc = 0x2CA870u;
            goto label_2ca870;
        }
    }
    ctx->pc = 0x2CA830u;
    // 0x2ca830: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CA830u;
    {
        const bool branch_taken_0x2ca830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA830u;
        // 0x2ca834: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca830) {
            ctx->pc = 0x2CA880u;
            goto label_2ca880;
        }
    }
    ctx->pc = 0x2CA838u;
    // 0x2ca838: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA838u;
        // 0x2ca83c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA840u;
label_2ca840:
    // 0x2ca840: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA840u;
    {
        const bool branch_taken_0x2ca840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA840u;
        // 0x2ca844: 0x24020809  addiu       $v0, $zero, 0x809 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca840) {
            ctx->pc = 0x2CA860u;
            goto label_2ca860;
        }
    }
    ctx->pc = 0x2CA848u;
    // 0x2ca848: 0x28820805  slti        $v0, $a0, 0x805
    ctx->pc = 0x2ca848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2053) ? 1 : 0);
    // 0x2ca84c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA84Cu;
    {
        const bool branch_taken_0x2ca84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca84c) {
            ctx->pc = 0x2CA870u;
            goto label_2ca870;
        }
    }
    ctx->pc = 0x2CA854u;
    // 0x2ca854: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA854u;
        // 0x2ca858: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA85Cu;
    // 0x2ca85c: 0x0  nop
    ctx->pc = 0x2ca85cu;
    // NOP
label_2ca860:
    // 0x2ca860: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA860u;
    {
        const bool branch_taken_0x2ca860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ca860) {
            ctx->pc = 0x2CA878u;
            goto label_2ca878;
        }
    }
    ctx->pc = 0x2CA868u;
    // 0x2ca868: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA868u;
        // 0x2ca86c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA870u;
label_2ca870:
    // 0x2ca870: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA870u;
        // 0x2ca874: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA878u;
label_2ca878:
    // 0x2ca878: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA878u;
        // 0x2ca87c: 0x24020208  addiu       $v0, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA880u;
label_2ca880:
    // 0x2ca880: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA888u;
    // 0x2ca888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca88c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca890: 0xc0b2c90  jal         func_2CB240
    ctx->pc = 0x2CA890u;
    SET_GPR_U32(ctx, 31, 0x2CA898u);
    ctx->pc = 0x2CB240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB240u, 0x2CA890u, 0x2CA898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA898u;
label_2ca898:
    // 0x2ca898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8a0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA8A0u;
    ctx->pc = 0x2CA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8A0u;
    // 0x2ca8a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA8A8u;
    // 0x2ca8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca8b0: 0xc0b2b48  jal         func_2CAD20
    ctx->pc = 0x2CA8B0u;
    SET_GPR_U32(ctx, 31, 0x2CA8B8u);
    ctx->pc = 0x2CAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD20u, 0x2CA8B0u, 0x2CA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8B8u;
label_2ca8b8:
    // 0x2ca8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8c0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA8C0u;
    ctx->pc = 0x2CA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8C0u;
    // 0x2ca8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA8C8u;
    // 0x2ca8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca8d0: 0xc0b2b32  jal         func_2CACC8
    ctx->pc = 0x2CA8D0u;
    SET_GPR_U32(ctx, 31, 0x2CA8D8u);
    ctx->pc = 0x2CACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACC8u, 0x2CA8D0u, 0x2CA8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8D8u;
label_2ca8d8:
    // 0x2ca8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8e0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA8E0u;
    ctx->pc = 0x2CA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8E0u;
    // 0x2ca8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA8E8u;
    // 0x2ca8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca8f0: 0xc0b2cd2  jal         func_2CB348
    ctx->pc = 0x2CA8F0u;
    SET_GPR_U32(ctx, 31, 0x2CA8F8u);
    ctx->pc = 0x2CB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB348u, 0x2CA8F0u, 0x2CA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8F8u;
label_2ca8f8:
    // 0x2ca8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca900: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA900u;
    ctx->pc = 0x2CA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA900u;
    // 0x2ca904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA908u;
    // 0x2ca908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca910: 0xc0b2cf0  jal         func_2CB3C0
    ctx->pc = 0x2CA910u;
    SET_GPR_U32(ctx, 31, 0x2CA918u);
    ctx->pc = 0x2CB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3C0u, 0x2CA910u, 0x2CA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA918u;
label_2ca918:
    // 0x2ca918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca91c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca920: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA920u;
    ctx->pc = 0x2CA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA920u;
    // 0x2ca924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA928u;
    // 0x2ca928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca92c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca930: 0xc0b2c2a  jal         func_2CB0A8
    ctx->pc = 0x2CA930u;
    SET_GPR_U32(ctx, 31, 0x2CA938u);
    ctx->pc = 0x2CB0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB0A8u, 0x2CA930u, 0x2CA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA938u;
label_2ca938:
    // 0x2ca938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca93c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca940: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA940u;
    ctx->pc = 0x2CA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA940u;
    // 0x2ca944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA948u;
    // 0x2ca948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca950: 0xc0b2ca2  jal         func_2CB288
    ctx->pc = 0x2CA950u;
    SET_GPR_U32(ctx, 31, 0x2CA958u);
    ctx->pc = 0x2CB288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB288u, 0x2CA950u, 0x2CA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA958u;
label_2ca958:
    // 0x2ca958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca95c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca960: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA960u;
    ctx->pc = 0x2CA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA960u;
    // 0x2ca964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA968u;
    // 0x2ca968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca970: 0xc0b2d42  jal         func_2CB508
    ctx->pc = 0x2CA970u;
    SET_GPR_U32(ctx, 31, 0x2CA978u);
    ctx->pc = 0x2CB508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB508u, 0x2CA970u, 0x2CA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA978u;
label_2ca978:
    // 0x2ca978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca97c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca980: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA980u;
    ctx->pc = 0x2CA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA980u;
    // 0x2ca984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA988u;
    // 0x2ca988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca990: 0xc0b2bda  jal         func_2CAF68
    ctx->pc = 0x2CA990u;
    SET_GPR_U32(ctx, 31, 0x2CA998u);
    ctx->pc = 0x2CAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF68u, 0x2CA990u, 0x2CA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA998u;
label_2ca998:
    // 0x2ca998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca9a0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA9A0u;
    ctx->pc = 0x2CA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9A0u;
    // 0x2ca9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA9A8u;
    // 0x2ca9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca9b0: 0xc0b2b66  jal         func_2CAD98
    ctx->pc = 0x2CA9B0u;
    SET_GPR_U32(ctx, 31, 0x2CA9B8u);
    ctx->pc = 0x2CAD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD98u, 0x2CA9B0u, 0x2CA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9B8u;
label_2ca9b8:
    // 0x2ca9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca9c0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA9C0u;
    ctx->pc = 0x2CA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9C0u;
    // 0x2ca9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA9C8u;
    // 0x2ca9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca9d0: 0xc0b2b38  jal         func_2CACE0
    ctx->pc = 0x2CA9D0u;
    SET_GPR_U32(ctx, 31, 0x2CA9D8u);
    ctx->pc = 0x2CACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACE0u, 0x2CA9D0u, 0x2CA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9D8u;
label_2ca9d8:
    // 0x2ca9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca9e0: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CA9E0u;
    ctx->pc = 0x2CA9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA9E0u;
    // 0x2ca9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CA9E8u;
    // 0x2ca9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca9f0: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x2CA9F0u;
    SET_GPR_U32(ctx, 31, 0x2CA9F8u);
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x2CA9F0u, 0x2CA9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA9F8u;
label_2ca9f8:
    // 0x2ca9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa00: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CAA00u;
    ctx->pc = 0x2CAA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA00u;
    // 0x2caa04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CAA08u;
    // 0x2caa08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa10: 0xc0b2d0a  jal         func_2CB428
    ctx->pc = 0x2CAA10u;
    SET_GPR_U32(ctx, 31, 0x2CAA18u);
    ctx->pc = 0x2CB428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB428u, 0x2CAA10u, 0x2CAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA18u;
label_2caa18:
    // 0x2caa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2caa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa20: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CAA20u;
    ctx->pc = 0x2CAA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA20u;
    // 0x2caa24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CAA28u;
    // 0x2caa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa30: 0xc0b2c40  jal         func_2CB100
    ctx->pc = 0x2CAA30u;
    SET_GPR_U32(ctx, 31, 0x2CAA38u);
    ctx->pc = 0x2CB100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB100u, 0x2CAA30u, 0x2CAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA38u;
label_2caa38:
    // 0x2caa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2caa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa40: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CAA40u;
    ctx->pc = 0x2CAA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA40u;
    // 0x2caa44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CAA48u;
    // 0x2caa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa50: 0xc0b2cbc  jal         func_2CB2F0
    ctx->pc = 0x2CAA50u;
    SET_GPR_U32(ctx, 31, 0x2CAA58u);
    ctx->pc = 0x2CB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB2F0u, 0x2CAA50u, 0x2CAA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA58u;
label_2caa58:
    // 0x2caa58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2caa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa60: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CAA60u;
    ctx->pc = 0x2CAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA60u;
    // 0x2caa64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CAA68u;
    // 0x2caa68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa70: 0xc0b2d4c  jal         func_2CB530
    ctx->pc = 0x2CAA70u;
    SET_GPR_U32(ctx, 31, 0x2CAA78u);
    ctx->pc = 0x2CB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB530u, 0x2CAA70u, 0x2CAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA78u;
label_2caa78:
    // 0x2caa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2caa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa80: 0x80b29f8  j           func_2CA7E0
    ctx->pc = 0x2CAA80u;
    ctx->pc = 0x2CAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA80u;
    // 0x2caa84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2ca7e0;
    ctx->pc = 0x2CAA88u;
}
