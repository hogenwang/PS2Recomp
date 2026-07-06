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

// Function: sub_0011E838
// Address: 0x11e838 - 0x11ea88
void sub_0011E838_0x11e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E838_0x11e838");
#endif

    switch (ctx->pc) {
        case 0x11e874u: goto label_11e874;
        case 0x11e8b8u: goto label_11e8b8;
        case 0x11e8c8u: goto label_11e8c8;
        case 0x11e944u: goto label_11e944;
        case 0x11e994u: goto label_11e994;
        case 0x11e9a4u: goto label_11e9a4;
        case 0x11ea00u: goto label_11ea00;
        case 0x11ea58u: goto label_11ea58;
        default: break;
    }

    ctx->pc = 0x11e838u;

    // 0x11e838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11e838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11e83c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11e840: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e848: 0x2471de00  addiu       $s1, $v1, -0x2200
    ctx->pc = 0x11e848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
    // 0x11e84c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11e850: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e854: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x11e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11e858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E858u;
    {
        const bool branch_taken_0x11e858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E858u;
        // 0x11e85c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e858) {
            ctx->pc = 0x11E868u;
            goto label_11e868;
        }
    }
    ctx->pc = 0x11E860u;
    // 0x11e860: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11E860u;
    {
        const bool branch_taken_0x11e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E860u;
        // 0x11e864: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e860) {
            ctx->pc = 0x11E8DCu;
            goto label_11e8dc;
        }
    }
    ctx->pc = 0x11E868u;
label_11e868:
    // 0x11e868: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x11e86c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11E86Cu;
    SET_GPR_U32(ctx, 31, 0x11E874u);
    ctx->pc = 0x11E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E86Cu;
    // 0x11e870: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11E86Cu, 0x11E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E874u;
label_11e874:
    // 0x11e874: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E874u;
    {
        const bool branch_taken_0x11e874 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E874u;
        // 0x11e878: 0x3c070041  lui         $a3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e874) {
            ctx->pc = 0x11E884u;
            goto label_11e884;
        }
    }
    ctx->pc = 0x11E87Cu;
    // 0x11e87c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11E87Cu;
    {
        const bool branch_taken_0x11e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E87Cu;
        // 0x11e880: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e87c) {
            ctx->pc = 0x11E8DCu;
            goto label_11e8dc;
        }
    }
    ctx->pc = 0x11E884u;
label_11e884:
    // 0x11e884: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11e884u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11e888: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11e888u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11e88c: 0xacf0de80  sw          $s0, -0x2180($a3)
    ctx->pc = 0x11e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294958720), GPR_U32(ctx, 16));
    // 0x11e890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e894: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11e898: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11e898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11e89c: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11e89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11e8a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e8a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11e8a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e8ac: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11e8b0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E8B0u;
    SET_GPR_U32(ctx, 31, 0x11E8B8u);
    ctx->pc = 0x11E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8B0u;
    // 0x11e8b4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E8B0u, 0x11E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8B8u;
label_11e8b8:
    // 0x11e8b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E8B8u;
    {
        const bool branch_taken_0x11e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B8u;
        // 0x11e8bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8b8) {
            ctx->pc = 0x11E8D0u;
            goto label_11e8d0;
        }
    }
    ctx->pc = 0x11E8C0u;
    // 0x11e8c0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E8C0u;
    SET_GPR_U32(ctx, 31, 0x11E8C8u);
    ctx->pc = 0x11E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E8C0u;
    // 0x11e8c4: 0x8e44b9dc  lw          $a0, -0x4624($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E8C0u, 0x11E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E8C8u;
label_11e8c8:
    // 0x11e8c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E8C8u;
    {
        const bool branch_taken_0x11e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8C8u;
        // 0x11e8cc: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8c8) {
            ctx->pc = 0x11E8DCu;
            goto label_11e8dc;
        }
    }
    ctx->pc = 0x11E8D0u;
label_11e8d0:
    // 0x11e8d0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e8d4: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11e8d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e8dc:
    // 0x11e8dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11e8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e8e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e8e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e8e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e8e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8ECu;
        // 0x11e8f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8F4u;
    // 0x11e8f4: 0x0  nop
    ctx->pc = 0x11e8f4u;
    // NOP
    // 0x11e8f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11e8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11e8fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11e900: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11e900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11e904: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11e904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11e908: 0x2453de00  addiu       $s3, $v0, -0x2200
    ctx->pc = 0x11e908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x11e90c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11e910: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11e910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e914: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e918: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11e918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e91c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11e91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11e920: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11e924: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x11e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x11e928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E928u;
    {
        const bool branch_taken_0x11e928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E928u;
        // 0x11e92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e928) {
            ctx->pc = 0x11E938u;
            goto label_11e938;
        }
    }
    ctx->pc = 0x11E930u;
    // 0x11e930: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11E930u;
    {
        const bool branch_taken_0x11e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E930u;
        // 0x11e934: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e930) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E938u;
label_11e938:
    // 0x11e938: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11e938u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x11e93c: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11E93Cu;
    SET_GPR_U32(ctx, 31, 0x11E944u);
    ctx->pc = 0x11E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E93Cu;
    // 0x11e940: 0x8e84b9dc  lw          $a0, -0x4624($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11E93Cu, 0x11E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E944u;
label_11e944:
    // 0x11e944: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E944u;
    {
        const bool branch_taken_0x11e944 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E944u;
        // 0x11e948: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e944) {
            ctx->pc = 0x11E954u;
            goto label_11e954;
        }
    }
    ctx->pc = 0x11E94Cu;
    // 0x11e94c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11E94Cu;
    {
        const bool branch_taken_0x11e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E94Cu;
        // 0x11e950: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e94c) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E954u;
label_11e954:
    // 0x11e954: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11e954u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11e958: 0x2462de80  addiu       $v0, $v1, -0x2180
    ctx->pc = 0x11e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958720));
    // 0x11e95c: 0xac70de80  sw          $s0, -0x2180($v1)
    ctx->pc = 0x11e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958720), GPR_U32(ctx, 16));
    // 0x11e960: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11e960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11e964: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x11e964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x11e968: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x11e968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
    // 0x11e96c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e970: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11e970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e974: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11e974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11e978: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11e978u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11e97c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e980: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e988: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11e988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11e98c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E98Cu;
    SET_GPR_U32(ctx, 31, 0x11E994u);
    ctx->pc = 0x11E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E98Cu;
    // 0x11e990: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E98Cu, 0x11E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E994u;
label_11e994:
    // 0x11e994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E994u;
    {
        const bool branch_taken_0x11e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E994u;
        // 0x11e998: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e994) {
            ctx->pc = 0x11E9ACu;
            goto label_11e9ac;
        }
    }
    ctx->pc = 0x11E99Cu;
    // 0x11e99c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11E99Cu;
    SET_GPR_U32(ctx, 31, 0x11E9A4u);
    ctx->pc = 0x11E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E99Cu;
    // 0x11e9a0: 0x8e84b9dc  lw          $a0, -0x4624($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11E99Cu, 0x11E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E9A4u;
label_11e9a4:
    // 0x11e9a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E9A4u;
    {
        const bool branch_taken_0x11e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9A4u;
        // 0x11e9a8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9a4) {
            ctx->pc = 0x11E9B8u;
            goto label_11e9b8;
        }
    }
    ctx->pc = 0x11E9ACu;
label_11e9ac:
    // 0x11e9ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e9b0: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11e9b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e9b8:
    // 0x11e9b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e9bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11e9bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e9c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11e9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e9c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11e9c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e9c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11e9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e9cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9D0u;
        // 0x11e9d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E9D8u;
    // 0x11e9d8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11e9dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x11e9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x11e9e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e9e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E9E4u;
    {
        const bool branch_taken_0x11e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9E4u;
        // 0x11e9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9e4) {
            ctx->pc = 0x11EA30u;
            goto label_11ea30;
        }
    }
    ctx->pc = 0x11E9ECu;
    // 0x11e9ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x11e9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11e9f0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E9F0u;
    {
        const bool branch_taken_0x11e9f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9F0u;
        // 0x11e9f4: 0xc33825  or          $a3, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f0) {
            ctx->pc = 0x11EA30u;
            goto label_11ea30;
        }
    }
    ctx->pc = 0x11E9F8u;
    // 0x11e9f8: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x11e9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x11e9fc: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x11e9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
label_11ea00:
    // 0x11ea00: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11ea04: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11ea04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ea08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ea0c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x11ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ea10: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x11ea10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ea14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ea14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ea18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ea1c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11ea1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ea20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11EA20u;
    {
        const bool branch_taken_0x11ea20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA20u;
        // 0x11ea24: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea20) {
            ctx->pc = 0x11EA00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ea00;
        }
    }
    ctx->pc = 0x11EA28u;
    // 0x11ea28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EA28u;
    {
        const bool branch_taken_0x11ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA28u;
        // 0x11ea2c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea28) {
            ctx->pc = 0x11EA38u;
            goto label_11ea38;
        }
    }
    ctx->pc = 0x11EA30u;
label_11ea30:
    // 0x11ea30: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x11ea30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x11ea34: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x11ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_11ea38:
    // 0x11ea38: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EA38u;
    {
        const bool branch_taken_0x11ea38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA38u;
        // 0x11ea3c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea38) {
            ctx->pc = 0x11EA80u;
            goto label_11ea80;
        }
    }
    ctx->pc = 0x11EA40u;
    // 0x11ea40: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x11ea40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11ea44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ea44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea48: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11EA48u;
    {
        const bool branch_taken_0x11ea48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA48u;
        // 0x11ea4c: 0xc23825  or          $a3, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea48) {
            ctx->pc = 0x11EA80u;
            goto label_11ea80;
        }
    }
    ctx->pc = 0x11EA50u;
    // 0x11ea50: 0x24880050  addiu       $t0, $a0, 0x50
    ctx->pc = 0x11ea50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x11ea54: 0x0  nop
    ctx->pc = 0x11ea54u;
    // NOP
label_11ea58:
    // 0x11ea58: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x11ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11ea5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11ea5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ea60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ea64: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x11ea64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ea68: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x11ea68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ea6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ea6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ea70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11ea74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11ea74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ea78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11EA78u;
    {
        const bool branch_taken_0x11ea78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA78u;
        // 0x11ea7c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea78) {
            ctx->pc = 0x11EA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ea58;
        }
    }
    ctx->pc = 0x11EA80u;
label_11ea80:
    // 0x11ea80: 0x8043324  j           func_10CC90
    ctx->pc = 0x11EA80u;
    ctx->pc = 0x11EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA80u;
    // 0x11ea84: 0x8d24b9e0  lw          $a0, -0x4620($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294949344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime); return;
    ctx->pc = 0x11EA88u;
}
