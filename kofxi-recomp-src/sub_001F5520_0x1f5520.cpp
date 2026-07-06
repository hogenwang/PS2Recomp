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

// Function: sub_001F5520
// Address: 0x1f5520 - 0x1f5610
void sub_001F5520_0x1f5520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5520_0x1f5520");
#endif

    switch (ctx->pc) {
        case 0x1f553cu: goto label_1f553c;
        case 0x1f5580u: goto label_1f5580;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f55b4u: goto label_1f55b4;
        case 0x1f55c8u: goto label_1f55c8;
        default: break;
    }

    ctx->pc = 0x1f5520u;

    // 0x1f5520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5528: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f552c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5534: 0xc07d5cc  jal         func_1F5730
    ctx->pc = 0x1F5534u;
    SET_GPR_U32(ctx, 31, 0x1F553Cu);
    ctx->pc = 0x1F5538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5534u;
    // 0x1f5538: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5730u, 0x1F5534u, 0x1F553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F553Cu;
label_1f553c:
    // 0x1f553c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F553Cu;
    {
        const bool branch_taken_0x1f553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f553c) {
            ctx->pc = 0x1F5540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F553Cu;
            // 0x1f5540: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5554u;
            goto label_1f5554;
        }
    }
    ctx->pc = 0x1F5544u;
    // 0x1f5544: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1f5544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f5548: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5548u;
    {
        const bool branch_taken_0x1f5548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5548) {
            ctx->pc = 0x1F554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5548u;
            // 0x1f554c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5560u;
            goto label_1f5560;
        }
    }
    ctx->pc = 0x1F5550u;
    // 0x1f5550: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f5550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1f5554:
    // 0x1f5554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5554u;
    {
        const bool branch_taken_0x1f5554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5554u;
        // 0x1f5558: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5554) {
            ctx->pc = 0x1F556Cu;
            goto label_1f556c;
        }
    }
    ctx->pc = 0x1F555Cu;
    // 0x1f555c: 0x0  nop
    ctx->pc = 0x1f555cu;
    // NOP
label_1f5560:
    // 0x1f5560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f5560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5564: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f5564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f5568: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f5568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1f556c:
    // 0x1f556c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f556cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5578: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5578u;
        // 0x1f557c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5580u;
label_1f5580:
    // 0x1f5580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f558c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f5590: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F5590u;
    SET_GPR_U32(ctx, 31, 0x1F5598u);
    ctx->pc = 0x1F5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5590u;
    // 0x1f5594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F5590u, 0x1F5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f559c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f55a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f55a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F55A4u;
    {
        const bool branch_taken_0x1f55a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55A4u;
        // 0x1f55a8: 0x34a50187  ori         $a1, $a1, 0x187 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)391);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55a4) {
            ctx->pc = 0x1F55C0u;
            goto label_1f55c0;
        }
    }
    ctx->pc = 0x1F55ACu;
    // 0x1f55ac: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F55ACu;
    SET_GPR_U32(ctx, 31, 0x1F55B4u);
    ctx->pc = 0x1F55B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F55ACu;
    // 0x1f55b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F55ACu, 0x1F55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55B4u;
label_1f55b4:
    // 0x1f55b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F55B4u;
    {
        const bool branch_taken_0x1f55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55B4u;
        // 0x1f55b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55b4) {
            ctx->pc = 0x1F55FCu;
            goto label_1f55fc;
        }
    }
    ctx->pc = 0x1F55BCu;
    // 0x1f55bc: 0x0  nop
    ctx->pc = 0x1f55bcu;
    // NOP
label_1f55c0:
    // 0x1f55c0: 0xc07d584  jal         func_1F5610
    ctx->pc = 0x1F55C0u;
    SET_GPR_U32(ctx, 31, 0x1F55C8u);
    ctx->pc = 0x1F5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5610u, 0x1F55C0u, 0x1F55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F55C8u;
label_1f55c8:
    // 0x1f55c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f55cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f55ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f55d0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1f55d4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F55D4u;
    {
        const bool branch_taken_0x1f55d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55D4u;
        // 0x1f55d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55d4) {
            ctx->pc = 0x1F55FCu;
            goto label_1f55fc;
        }
    }
    ctx->pc = 0x1F55DCu;
    // 0x1f55dc: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1f55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1f55e0: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1f55e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f55e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f55e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F55E8u;
    {
        const bool branch_taken_0x1f55e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55E8u;
        // 0x1f55ec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55e8) {
            ctx->pc = 0x1F55FCu;
            goto label_1f55fc;
        }
    }
    ctx->pc = 0x1F55F0u;
    // 0x1f55f0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x1f55f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f55f4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f55f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f55f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f55fc:
    // 0x1f55fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f55fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5608: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5608u;
        // 0x1f560c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5610u;
}
