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

// Function: sub_001E7560
// Address: 0x1e7560 - 0x1e7670
void sub_001E7560_0x1e7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7560_0x1e7560");
#endif

    switch (ctx->pc) {
        case 0x1e75a8u: goto label_1e75a8;
        case 0x1e75b4u: goto label_1e75b4;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75d0u: goto label_1e75d0;
        case 0x1e75e0u: goto label_1e75e0;
        case 0x1e75f0u: goto label_1e75f0;
        case 0x1e7608u: goto label_1e7608;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7624u: goto label_1e7624;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7654u: goto label_1e7654;
        default: break;
    }

    ctx->pc = 0x1e7560u;

    // 0x1e7560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e756c: 0x8079d5e  j           func_1E7578
    ctx->pc = 0x1E756Cu;
    ctx->pc = 0x1E7570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E756Cu;
    // 0x1e7570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7578u;
    goto label_1e7578;
    ctx->pc = 0x1E7574u;
    // 0x1e7574: 0x0  nop
    ctx->pc = 0x1e7574u;
    // NOP
label_1e7578:
    // 0x1e7578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e757c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e7580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7588: 0x8c52ec14  lw          $s2, -0x13EC($v0)
    ctx->pc = 0x1e7588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962196)));
    // 0x1e758c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e758cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7598: 0x1643002f  bne         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E7598u;
    {
        const bool branch_taken_0x1e7598 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7598u;
        // 0x1e759c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7598) {
            ctx->pc = 0x1E7658u;
            goto label_1e7658;
        }
    }
    ctx->pc = 0x1E75A0u;
    // 0x1e75a0: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E75A0u;
    SET_GPR_U32(ctx, 31, 0x1E75A8u);
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E75A0u, 0x1E75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75A8u;
label_1e75a8:
    // 0x1e75a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e75a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75ac: 0xc079af4  jal         func_1E6BD0
    ctx->pc = 0x1E75ACu;
    SET_GPR_U32(ctx, 31, 0x1E75B4u);
    ctx->pc = 0x1E75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75ACu;
    // 0x1e75b0: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BD0u, 0x1E75ACu, 0x1E75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75B4u;
label_1e75b4:
    // 0x1e75b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e75b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75b8: 0x16120027  bne         $s0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E75B8u;
    {
        const bool branch_taken_0x1e75b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1E75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75B8u;
        // 0x1e75bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75b8) {
            ctx->pc = 0x1E7658u;
            goto label_1e7658;
        }
    }
    ctx->pc = 0x1E75C0u;
    // 0x1e75c0: 0xc079d26  jal         func_1E7498
    ctx->pc = 0x1E75C0u;
    SET_GPR_U32(ctx, 31, 0x1E75C8u);
    ctx->pc = 0x1E7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7498u, 0x1E75C0u, 0x1E75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75C8u;
label_1e75c8:
    // 0x1e75c8: 0xc079e9c  jal         func_1E7A70
    ctx->pc = 0x1E75C8u;
    SET_GPR_U32(ctx, 31, 0x1E75D0u);
    ctx->pc = 0x1E7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A70u, 0x1E75C8u, 0x1E75D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75D0u;
label_1e75d0:
    // 0x1e75d0: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E75D0u;
    {
        const bool branch_taken_0x1e75d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75D0u;
        // 0x1e75d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75d0) {
            ctx->pc = 0x1E7600u;
            goto label_1e7600;
        }
    }
    ctx->pc = 0x1E75D8u;
    // 0x1e75d8: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x1e75d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x1e75dc: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1e75dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e75e0:
    // 0x1e75e0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E75E0u;
    {
        const bool branch_taken_0x1e75e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e75e0) {
            ctx->pc = 0x1E75E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E75E0u;
            // 0x1e75e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E75F4u;
            goto label_1e75f4;
        }
    }
    ctx->pc = 0x1E75E8u;
    // 0x1e75e8: 0xc079d9c  jal         func_1E7670
    ctx->pc = 0x1E75E8u;
    SET_GPR_U32(ctx, 31, 0x1E75F0u);
    ctx->pc = 0x1E75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75E8u;
    // 0x1e75ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7670u, 0x1E75E8u, 0x1E75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E75F0u;
label_1e75f0:
    // 0x1e75f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e75f4:
    // 0x1e75f4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E75F4u;
    {
        const bool branch_taken_0x1e75f4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1E75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75F4u;
        // 0x1e75f8: 0x2610050c  addiu       $s0, $s0, 0x50C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75f4) {
            ctx->pc = 0x1E75E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e75e0;
        }
    }
    ctx->pc = 0x1E75FCu;
    // 0x1e75fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e75fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7600:
    // 0x1e7600: 0xc079e0c  jal         func_1E7830
    ctx->pc = 0x1E7600u;
    SET_GPR_U32(ctx, 31, 0x1E7608u);
    ctx->pc = 0x1E7604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7600u;
    // 0x1e7604: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7830u, 0x1E7600u, 0x1E7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7608u;
label_1e7608:
    // 0x1e7608: 0xc079e9c  jal         func_1E7A70
    ctx->pc = 0x1E7608u;
    SET_GPR_U32(ctx, 31, 0x1E7610u);
    ctx->pc = 0x1E7A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A70u, 0x1E7608u, 0x1E7610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7610u;
label_1e7610:
    // 0x1e7610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7614: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7614u;
    {
        const bool branch_taken_0x1e7614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7614) {
            ctx->pc = 0x1E762Cu;
            goto label_1e762c;
        }
    }
    ctx->pc = 0x1E761Cu;
    // 0x1e761c: 0xc07dd44  jal         func_1F7510
    ctx->pc = 0x1E761Cu;
    SET_GPR_U32(ctx, 31, 0x1E7624u);
    ctx->pc = 0x1F7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7510u, 0x1E761Cu, 0x1E7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7624u;
label_1e7624:
    // 0x1e7624: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e7624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e7628: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1e7628u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e762c:
    // 0x1e762c: 0xc079d32  jal         func_1E74C8
    ctx->pc = 0x1E762Cu;
    SET_GPR_U32(ctx, 31, 0x1E7634u);
    ctx->pc = 0x1E7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E762Cu;
    // 0x1e7630: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E74C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E74C8u, 0x1E762Cu, 0x1E7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7634u;
label_1e7634:
    // 0x1e7634: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7634u;
    {
        const bool branch_taken_0x1e7634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7634u;
        // 0x1e7638: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7634) {
            ctx->pc = 0x1E7658u;
            goto label_1e7658;
        }
    }
    ctx->pc = 0x1E763Cu;
    // 0x1e763c: 0xc079e52  jal         func_1E7948
    ctx->pc = 0x1E763Cu;
    SET_GPR_U32(ctx, 31, 0x1E7644u);
    ctx->pc = 0x1E7948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7948u, 0x1E763Cu, 0x1E7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7644u;
label_1e7644:
    // 0x1e7644: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7644u;
    {
        const bool branch_taken_0x1e7644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7644u;
        // 0x1e7648: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7644) {
            ctx->pc = 0x1E7658u;
            goto label_1e7658;
        }
    }
    ctx->pc = 0x1E764Cu;
    // 0x1e764c: 0xc079d4c  jal         func_1E7530
    ctx->pc = 0x1E764Cu;
    SET_GPR_U32(ctx, 31, 0x1E7654u);
    ctx->pc = 0x1E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7530u, 0x1E764Cu, 0x1E7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7654u;
label_1e7654:
    // 0x1e7654: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7658:
    // 0x1e7658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e765c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e765cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7664: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e7664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7668: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7668u;
        // 0x1e766c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7670u;
}
