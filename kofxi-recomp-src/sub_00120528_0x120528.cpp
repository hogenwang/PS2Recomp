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

// Function: sub_00120528
// Address: 0x120528 - 0x120630
void sub_00120528_0x120528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120528_0x120528");
#endif

    switch (ctx->pc) {
        case 0x120540u: goto label_120540;
        case 0x120550u: goto label_120550;
        case 0x12056cu: goto label_12056c;
        case 0x120574u: goto label_120574;
        case 0x120594u: goto label_120594;
        case 0x120598u: goto label_120598;
        case 0x1205a0u: goto label_1205a0;
        case 0x1205b4u: goto label_1205b4;
        case 0x1205c8u: goto label_1205c8;
        case 0x1205d0u: goto label_1205d0;
        case 0x1205dcu: goto label_1205dc;
        case 0x120604u: goto label_120604;
        case 0x12061cu: goto label_12061c;
        case 0x120628u: goto label_120628;
        default: break;
    }

    ctx->pc = 0x120528u;

    // 0x120528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12052c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120530: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120538: 0xc048930  jal         func_1224C0
    ctx->pc = 0x120538u;
    SET_GPR_U32(ctx, 31, 0x120540u);
    ctx->pc = 0x12053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120538u;
    // 0x12053c: 0xffb20010  sd          $s2, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x120538u, 0x120540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120540u;
label_120540:
    // 0x120540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120548: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x120548u;
    SET_GPR_U32(ctx, 31, 0x120550u);
    ctx->pc = 0x12054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120548u;
    // 0x12054c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x120548u, 0x120550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120550u;
label_120550:
    // 0x120550: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x120554: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120558: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x120558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x12055c: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12055Cu;
    {
        const bool branch_taken_0x12055c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x120560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12055Cu;
        // 0x120560: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12055c) {
            ctx->pc = 0x1205E0u;
            goto label_1205e0;
        }
    }
    ctx->pc = 0x120564u;
    // 0x120564: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x120564u;
    SET_GPR_U32(ctx, 31, 0x12056Cu);
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x120564u, 0x12056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12056Cu;
label_12056c:
    // 0x12056c: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x12056Cu;
    SET_GPR_U32(ctx, 31, 0x120574u);
    ctx->pc = 0x120570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12056Cu;
    // 0x120570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x12056Cu, 0x120574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120574u;
label_120574:
    // 0x120574: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x120574u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120578: 0x12787a  dsrl        $t7, $s2, 1
    ctx->pc = 0x120578u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) >> 1);
    // 0x12057c: 0x324e0001  andi        $t6, $s2, 0x1
    ctx->pc = 0x12057cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x120580: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x120580u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x120584: 0x6400023  bltz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x120584u;
    {
        const bool branch_taken_0x120584 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x120588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120584u;
        // 0x120588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120584) {
            ctx->pc = 0x120614u;
            goto label_120614;
        }
    }
    ctx->pc = 0x12058Cu;
    // 0x12058c: 0xc048096  jal         func_120258
    ctx->pc = 0x12058Cu;
    SET_GPR_U32(ctx, 31, 0x120594u);
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x12058Cu, 0x120594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120594u;
label_120594:
    // 0x120594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120598:
    // 0x120598: 0xc048a5c  jal         func_122970
    ctx->pc = 0x120598u;
    SET_GPR_U32(ctx, 31, 0x1205A0u);
    ctx->pc = 0x12059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120598u;
    // 0x12059c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x120598u, 0x1205A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205A0u;
label_1205a0:
    // 0x1205a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1205a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1205a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1205a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205ac: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1205ACu;
    SET_GPR_U32(ctx, 31, 0x1205B4u);
    ctx->pc = 0x1205B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205ACu;
    // 0x1205b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1205ACu, 0x1205B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205B4u;
label_1205b4:
    // 0x1205b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1205b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205b8: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1205B8u;
    {
        const bool branch_taken_0x1205b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1205BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205B8u;
        // 0x1205bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205b8) {
            ctx->pc = 0x1205FCu;
            goto label_1205fc;
        }
    }
    ctx->pc = 0x1205C0u;
    // 0x1205c0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x1205C0u;
    SET_GPR_U32(ctx, 31, 0x1205C8u);
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x1205C0u, 0x1205C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205C8u;
label_1205c8:
    // 0x1205c8: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x1205C8u;
    SET_GPR_U32(ctx, 31, 0x1205D0u);
    ctx->pc = 0x1205CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205C8u;
    // 0x1205cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x1205C8u, 0x1205D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205D0u;
label_1205d0:
    // 0x1205d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1205d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1205d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1205d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1205d8: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x1205d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_1205dc:
    // 0x1205dc: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x1205dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1205e0:
    // 0x1205e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1205e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205e4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1205e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1205e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1205ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1205ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1205f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1205f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1205f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1205F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1205F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205F4u;
        // 0x1205f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1205F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1205FCu;
label_1205fc:
    // 0x1205fc: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x1205FCu;
    SET_GPR_U32(ctx, 31, 0x120604u);
    ctx->pc = 0x120600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205FCu;
    // 0x120600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x1205FCu, 0x120604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120604u;
label_120604:
    // 0x120604: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120608: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12060c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x12060Cu;
    {
        const bool branch_taken_0x12060c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12060Cu;
        // 0x120610: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12060c) {
            ctx->pc = 0x1205DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1205dc;
        }
    }
    ctx->pc = 0x120614u;
label_120614:
    // 0x120614: 0xc048096  jal         func_120258
    ctx->pc = 0x120614u;
    SET_GPR_U32(ctx, 31, 0x12061Cu);
    ctx->pc = 0x120618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120614u;
    // 0x120618: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x120614u, 0x12061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12061Cu;
label_12061c:
    // 0x12061c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120620: 0xc048a46  jal         func_122918
    ctx->pc = 0x120620u;
    SET_GPR_U32(ctx, 31, 0x120628u);
    ctx->pc = 0x120624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120620u;
    // 0x120624: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x120620u, 0x120628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120628u;
label_120628:
    // 0x120628: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x120628u;
    {
        const bool branch_taken_0x120628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120628u;
        // 0x12062c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120628) {
            ctx->pc = 0x120598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120598;
        }
    }
    ctx->pc = 0x120630u;
}
