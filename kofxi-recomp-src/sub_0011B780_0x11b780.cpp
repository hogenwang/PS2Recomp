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

// Function: sub_0011B780
// Address: 0x11b780 - 0x11b8d8
void sub_0011B780_0x11b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B780_0x11b780");
#endif

    switch (ctx->pc) {
        case 0x11b7a0u: goto label_11b7a0;
        case 0x11b7acu: goto label_11b7ac;
        case 0x11b7d8u: goto label_11b7d8;
        case 0x11b7f0u: goto label_11b7f0;
        case 0x11b804u: goto label_11b804;
        case 0x11b814u: goto label_11b814;
        case 0x11b828u: goto label_11b828;
        case 0x11b830u: goto label_11b830;
        case 0x11b850u: goto label_11b850;
        case 0x11b864u: goto label_11b864;
        case 0x11b888u: goto label_11b888;
        case 0x11b890u: goto label_11b890;
        default: break;
    }

    ctx->pc = 0x11b780u;

    // 0x11b780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b784: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11b788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b790: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b794: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11b794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11b798: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11B798u;
    SET_GPR_U32(ctx, 31, 0x11B7A0u);
    ctx->pc = 0x11B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B798u;
    // 0x11b79c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B188u, 0x11B798u, 0x11B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7A0u;
label_11b7a0:
    // 0x11b7a0: 0x8e049de8  lw          $a0, -0x6218($s0)
    ctx->pc = 0x11b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    // 0x11b7a4: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11B7A4u;
    SET_GPR_U32(ctx, 31, 0x11B7ACu);
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11B7A4u, 0x11B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7ACu;
label_11b7ac:
    // 0x11b7ac: 0x8e039de8  lw          $v1, -0x6218($s0)
    ctx->pc = 0x11b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    // 0x11b7b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B7B0u;
    {
        const bool branch_taken_0x11b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7B0u;
        // 0x11b7b4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b0) {
            ctx->pc = 0x11B7E0u;
            goto label_11b7e0;
        }
    }
    ctx->pc = 0x11B7B8u;
    // 0x11b7b8: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11b7bc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B7BCu;
    {
        const bool branch_taken_0x11b7bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7BCu;
        // 0x11b7c0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7bc) {
            ctx->pc = 0x11B804u;
            goto label_11b804;
        }
    }
    ctx->pc = 0x11B7C4u;
    // 0x11b7c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11b7c8: 0x8c469ddc  lw          $a2, -0x6224($v0)
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
    // 0x11b7cc: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x11b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
    // 0x11b7d0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B7D0u;
    SET_GPR_U32(ctx, 31, 0x11B7D8u);
    ctx->pc = 0x11B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7D0u;
    // 0x11b7d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11B7D0u, 0x11B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7D8u;
label_11b7d8:
    // 0x11b7d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11B7D8u;
    {
        const bool branch_taken_0x11b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D8u;
        // 0x11b7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7d8) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B7E0u;
label_11b7e0:
    // 0x11b7e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b7e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b7e8: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x11B7E8u;
    SET_GPR_U32(ctx, 31, 0x11B7F0u);
    ctx->pc = 0x11B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B7E8u;
    // 0x11b7ec: 0xac519ddc  sw          $s1, -0x6224($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942172), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x11B7E8u, 0x11B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B7F0u;
label_11b7f0:
    // 0x11b7f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B7F0u;
    {
        const bool branch_taken_0x11b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7F0u;
        // 0x11b7f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7f0) {
            ctx->pc = 0x11B80Cu;
            goto label_11b80c;
        }
    }
    ctx->pc = 0x11B7F8u;
    // 0x11b7f8: 0x8e049de8  lw          $a0, -0x6218($s0)
    ctx->pc = 0x11b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942184)));
    // 0x11b7fc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11B7FCu;
    SET_GPR_U32(ctx, 31, 0x11B804u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11B7FCu, 0x11B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B804u;
label_11b804:
    // 0x11b804: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11B804u;
    {
        const bool branch_taken_0x11b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B804u;
        // 0x11b808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b804) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B80Cu;
label_11b80c:
    // 0x11b80c: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11B80Cu;
    SET_GPR_U32(ctx, 31, 0x11B814u);
    ctx->pc = 0x11B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B80Cu;
    // 0x11b810: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11B80Cu, 0x11B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B814u;
label_11b814:
    // 0x11b814: 0x8e429dfc  lw          $v0, -0x6204($s2)
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942204)));
    // 0x11b818: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11B818u;
    {
        const bool branch_taken_0x11b818 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B818u;
        // 0x11b81c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b818) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B820u;
    // 0x11b820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B820u;
    {
        const bool branch_taken_0x11b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B820u;
        // 0x11b824: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b820) {
            ctx->pc = 0x11B84Cu;
            goto label_11b84c;
        }
    }
    ctx->pc = 0x11B828u;
label_11b828:
    // 0x11b828: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11b82c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b830:
    // 0x11b830: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b834: 0x0  nop
    ctx->pc = 0x11b834u;
    // NOP
    // 0x11b838: 0x0  nop
    ctx->pc = 0x11b838u;
    // NOP
    // 0x11b83c: 0x0  nop
    ctx->pc = 0x11b83cu;
    // NOP
    // 0x11b840: 0x0  nop
    ctx->pc = 0x11b840u;
    // NOP
    // 0x11b844: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B844u;
    {
        const bool branch_taken_0x11b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b844) {
            ctx->pc = 0x11B830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b830;
        }
    }
    ctx->pc = 0x11B84Cu;
label_11b84c:
    // 0x11b84c: 0x2630af90  addiu       $s0, $s1, -0x5070
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946704));
label_11b850:
    // 0x11b850: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11b854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b858: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x11b858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x11b85c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11B85Cu;
    SET_GPR_U32(ctx, 31, 0x11B864u);
    ctx->pc = 0x11B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B85Cu;
    // 0x11b860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11B85Cu, 0x11B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B864u;
label_11b864:
    // 0x11b864: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B864u;
    {
        const bool branch_taken_0x11b864 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11b864) {
            ctx->pc = 0x11B868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B864u;
            // 0x11b868: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B8B4u;
            goto label_11b8b4;
        }
    }
    ctx->pc = 0x11B86Cu;
    // 0x11b86c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11b870: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11b874: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B874u;
    {
        const bool branch_taken_0x11b874 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B874u;
        // 0x11b878: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b874) {
            ctx->pc = 0x11B88Cu;
            goto label_11b88c;
        }
    }
    ctx->pc = 0x11B87Cu;
    // 0x11b87c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11b880: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11B880u;
    SET_GPR_U32(ctx, 31, 0x11B888u);
    ctx->pc = 0x11B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B880u;
    // 0x11b884: 0x2484b2a8  addiu       $a0, $a0, -0x4D58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11B880u, 0x11B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B888u;
label_11b888:
    // 0x11b888: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11b88c:
    // 0x11b88c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11b890:
    // 0x11b890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b894: 0x0  nop
    ctx->pc = 0x11b894u;
    // NOP
    // 0x11b898: 0x0  nop
    ctx->pc = 0x11b898u;
    // NOP
    // 0x11b89c: 0x0  nop
    ctx->pc = 0x11b89cu;
    // NOP
    // 0x11b8a0: 0x0  nop
    ctx->pc = 0x11b8a0u;
    // NOP
    // 0x11b8a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B8A4u;
    {
        const bool branch_taken_0x11b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b8a4) {
            ctx->pc = 0x11B890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b890;
        }
    }
    ctx->pc = 0x11B8ACu;
    // 0x11b8ac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11B8ACu;
    {
        const bool branch_taken_0x11b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8ACu;
        // 0x11b8b0: 0x2630af90  addiu       $s0, $s1, -0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8ac) {
            ctx->pc = 0x11B850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b850;
        }
    }
    ctx->pc = 0x11B8B4u;
label_11b8b4:
    // 0x11b8b4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11B8B4u;
    {
        const bool branch_taken_0x11b8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8B4u;
        // 0x11b8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8b4) {
            ctx->pc = 0x11B828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b828;
        }
    }
    ctx->pc = 0x11B8BCu;
    // 0x11b8bc: 0xae409dfc  sw          $zero, -0x6204($s2)
    ctx->pc = 0x11b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942204), GPR_U32(ctx, 0));
label_11b8c0:
    // 0x11b8c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b8c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11b8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b8c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D0u;
        // 0x11b8d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B8D8u;
}
