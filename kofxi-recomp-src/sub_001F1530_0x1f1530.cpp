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

// Function: sub_001F1530
// Address: 0x1f1530 - 0x1f1600
void sub_001F1530_0x1f1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1530_0x1f1530");
#endif

    switch (ctx->pc) {
        case 0x1f1558u: goto label_1f1558;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f1578u: goto label_1f1578;
        case 0x1f1594u: goto label_1f1594;
        case 0x1f15a8u: goto label_1f15a8;
        case 0x1f15b8u: goto label_1f15b8;
        case 0x1f15d0u: goto label_1f15d0;
        case 0x1f15dcu: goto label_1f15dc;
        default: break;
    }

    ctx->pc = 0x1f1530u;

    // 0x1f1530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1534: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f1538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f153c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1544: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1f1548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f154c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f1550: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F1550u;
    SET_GPR_U32(ctx, 31, 0x1F1558u);
    ctx->pc = 0x1F1554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1550u;
    // 0x1f1554: 0x8e122018  lw          $s2, 0x2018($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F1550u, 0x1F1558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1558u;
label_1f1558:
    // 0x1f1558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1558u;
    {
        const bool branch_taken_0x1f1558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1558u;
        // 0x1f155c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1558) {
            ctx->pc = 0x1F1570u;
            goto label_1f1570;
        }
    }
    ctx->pc = 0x1F1560u;
    // 0x1f1560: 0xc07c580  jal         func_1F1600
    ctx->pc = 0x1F1560u;
    SET_GPR_U32(ctx, 31, 0x1F1568u);
    ctx->pc = 0x1F1600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1600u, 0x1F1560u, 0x1F1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1568u;
label_1f1568:
    // 0x1f1568: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1568u;
    {
        const bool branch_taken_0x1f1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1568u;
        // 0x1f156c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1568) {
            ctx->pc = 0x1F1584u;
            goto label_1f1584;
        }
    }
    ctx->pc = 0x1F1570u;
label_1f1570:
    // 0x1f1570: 0xc07c598  jal         func_1F1660
    ctx->pc = 0x1F1570u;
    SET_GPR_U32(ctx, 31, 0x1F1578u);
    ctx->pc = 0x1F1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1660u, 0x1F1570u, 0x1F1578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1578u;
label_1f1578:
    // 0x1f1578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f157c: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F157Cu;
    {
        const bool branch_taken_0x1f157c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1F1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F157Cu;
        // 0x1f1580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f157c) {
            ctx->pc = 0x1F15E8u;
            goto label_1f15e8;
        }
    }
    ctx->pc = 0x1F1584u;
label_1f1584:
    // 0x1f1584: 0x58a0000f  blezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1584u;
    {
        const bool branch_taken_0x1f1584 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1f1584) {
            ctx->pc = 0x1F1588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1584u;
            // 0x1f1588: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F15C4u;
            goto label_1f15c4;
        }
    }
    ctx->pc = 0x1F158Cu;
    // 0x1f158c: 0xc07ae58  jal         func_1EB960
    ctx->pc = 0x1F158Cu;
    SET_GPR_U32(ctx, 31, 0x1F1594u);
    ctx->pc = 0x1F1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F158Cu;
    // 0x1f1590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB960u, 0x1F158Cu, 0x1F1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1594u;
label_1f1594:
    // 0x1f1594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1598: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1f159c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f15a0: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F15A0u;
    SET_GPR_U32(ctx, 31, 0x1F15A8u);
    ctx->pc = 0x1F15A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15A0u;
    // 0x1f15a4: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F64A0u, 0x1F15A0u, 0x1F15A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15A8u;
label_1f15a8:
    // 0x1f15a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F15A8u;
    {
        const bool branch_taken_0x1f15a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15A8u;
        // 0x1f15ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15a8) {
            ctx->pc = 0x1F15C0u;
            goto label_1f15c0;
        }
    }
    ctx->pc = 0x1F15B0u;
    // 0x1f15b0: 0xc07db80  jal         func_1F6E00
    ctx->pc = 0x1F15B0u;
    SET_GPR_U32(ctx, 31, 0x1F15B8u);
    ctx->pc = 0x1F6E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6E00u, 0x1F15B0u, 0x1F15B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15B8u;
label_1f15b8:
    // 0x1f15b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f15bc: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1f15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1f15c0:
    // 0x1f15c0: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1f15c4:
    // 0x1f15c4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1f15c8: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1F15C8u;
    SET_GPR_U32(ctx, 31, 0x1F15D0u);
    ctx->pc = 0x1F15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15C8u;
    // 0x1f15cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1F15C8u, 0x1F15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15D0u;
label_1f15d0:
    // 0x1f15d0: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x1f15d4: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1F15D4u;
    SET_GPR_U32(ctx, 31, 0x1F15DCu);
    ctx->pc = 0x1F15D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15D4u;
    // 0x1f15d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1F15D4u, 0x1F15DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15DCu;
label_1f15dc:
    // 0x1f15dc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f15e0: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x1f15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x1f15e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f15e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f15e8:
    // 0x1f15e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f15e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f15ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f15ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f15f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f15f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f15f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f15f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f15f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F15F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15F8u;
        // 0x1f15fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1600u;
}
