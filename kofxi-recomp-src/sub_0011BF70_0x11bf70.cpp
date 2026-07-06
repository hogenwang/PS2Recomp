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

// Function: sub_0011BF70
// Address: 0x11bf70 - 0x11c188
void sub_0011BF70_0x11bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BF70_0x11bf70");
#endif

    switch (ctx->pc) {
        case 0x11bfb4u: goto label_11bfb4;
        case 0x11bfbcu: goto label_11bfbc;
        case 0x11bfd4u: goto label_11bfd4;
        case 0x11bfdcu: goto label_11bfdc;
        case 0x11bfe8u: goto label_11bfe8;
        case 0x11bffcu: goto label_11bffc;
        case 0x11c00cu: goto label_11c00c;
        case 0x11c028u: goto label_11c028;
        case 0x11c030u: goto label_11c030;
        case 0x11c050u: goto label_11c050;
        case 0x11c064u: goto label_11c064;
        case 0x11c084u: goto label_11c084;
        case 0x11c090u: goto label_11c090;
        case 0x11c0e0u: goto label_11c0e0;
        case 0x11c10cu: goto label_11c10c;
        case 0x11c120u: goto label_11c120;
        case 0x11c144u: goto label_11c144;
        case 0x11c158u: goto label_11c158;
        default: break;
    }

    ctx->pc = 0x11bf70u;

    // 0x11bf70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11bf74: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11bf78: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x11bf7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11bf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11bf80: 0x8ec29dd0  lw          $v0, -0x6230($s6)
    ctx->pc = 0x11bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
    // 0x11bf84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11bf84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11bf8c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11bf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11bf90: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11bf94: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11bf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11bf98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11bf9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11bfa0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BFA0u;
    {
        const bool branch_taken_0x11bfa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFA0u;
        // 0x11bfa4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfa0) {
            ctx->pc = 0x11BFB4u;
            goto label_11bfb4;
        }
    }
    ctx->pc = 0x11BFA8u;
    // 0x11bfa8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11bfac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BFACu;
    SET_GPR_U32(ctx, 31, 0x11BFB4u);
    ctx->pc = 0x11BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFACu;
    // 0x11bfb0: 0x2484b350  addiu       $a0, $a0, -0x4CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11BFACu, 0x11BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFB4u;
label_11bfb4:
    // 0x11bfb4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11BFB4u;
    SET_GPR_U32(ctx, 31, 0x11BFBCu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11BFB4u, 0x11BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFBCu;
label_11bfbc:
    // 0x11bfbc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11bfc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bfc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFC4u;
    {
        const bool branch_taken_0x11bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bfc4) {
            ctx->pc = 0x11BFD4u;
            goto label_11bfd4;
        }
    }
    ctx->pc = 0x11BFCCu;
    // 0x11bfcc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11BFCCu;
    SET_GPR_U32(ctx, 31, 0x11BFD4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11BFCCu, 0x11BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFD4u;
label_11bfd4:
    // 0x11bfd4: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11BFD4u;
    SET_GPR_U32(ctx, 31, 0x11BFDCu);
    ctx->pc = 0x11BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFD4u;
    // 0x11bfd8: 0x3c130036  lui         $s3, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B188u, 0x11BFD4u, 0x11BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFDCu;
label_11bfdc:
    // 0x11bfdc: 0x8e649dec  lw          $a0, -0x6214($s3)
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    // 0x11bfe0: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11BFE0u;
    SET_GPR_U32(ctx, 31, 0x11BFE8u);
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x11BFE0u, 0x11BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFE8u;
label_11bfe8:
    // 0x11bfe8: 0x8e639dec  lw          $v1, -0x6214($s3)
    ctx->pc = 0x11bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    // 0x11bfec: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11BFECu;
    {
        const bool branch_taken_0x11bfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFECu;
        // 0x11bff0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfec) {
            ctx->pc = 0x11C15Cu;
            goto label_11c15c;
        }
    }
    ctx->pc = 0x11BFF4u;
    // 0x11bff4: 0xc046e84  jal         func_11BA10
    ctx->pc = 0x11BFF4u;
    SET_GPR_U32(ctx, 31, 0x11BFFCu);
    ctx->pc = 0x11BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFF4u;
    // 0x11bff8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA10u, 0x11BFF4u, 0x11BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFFCu;
label_11bffc:
    // 0x11bffc: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x11BFFCu;
    {
        const bool branch_taken_0x11bffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFFCu;
        // 0x11c000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bffc) {
            ctx->pc = 0x11C114u;
            goto label_11c114;
        }
    }
    ctx->pc = 0x11C004u;
    // 0x11c004: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11C004u;
    SET_GPR_U32(ctx, 31, 0x11C00Cu);
    ctx->pc = 0x11C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C004u;
    // 0x11c008: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11C004u, 0x11C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C00Cu;
label_11c00c:
    // 0x11c00c: 0x8e229e10  lw          $v0, -0x61F0($s1)
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942224)));
    // 0x11c010: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11C010u;
    {
        const bool branch_taken_0x11c010 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C010u;
        // 0x11c014: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c010) {
            ctx->pc = 0x11C0C4u;
            goto label_11c0c4;
        }
    }
    ctx->pc = 0x11C018u;
    // 0x11c018: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x11c018u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x11c01c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C01Cu;
    {
        const bool branch_taken_0x11c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C01Cu;
        // 0x11c020: 0x3c170036  lui         $s7, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c01c) {
            ctx->pc = 0x11C04Cu;
            goto label_11c04c;
        }
    }
    ctx->pc = 0x11C024u;
    // 0x11c024: 0x0  nop
    ctx->pc = 0x11c024u;
    // NOP
label_11c028:
    // 0x11c028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c02c: 0x0  nop
    ctx->pc = 0x11c02cu;
    // NOP
label_11c030:
    // 0x11c030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c034: 0x0  nop
    ctx->pc = 0x11c034u;
    // NOP
    // 0x11c038: 0x0  nop
    ctx->pc = 0x11c038u;
    // NOP
    // 0x11c03c: 0x0  nop
    ctx->pc = 0x11c03cu;
    // NOP
    // 0x11c040: 0x0  nop
    ctx->pc = 0x11c040u;
    // NOP
    // 0x11c044: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C044u;
    {
        const bool branch_taken_0x11c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c044) {
            ctx->pc = 0x11C030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c030;
        }
    }
    ctx->pc = 0x11C04Cu;
label_11c04c:
    // 0x11c04c: 0x26b0da90  addiu       $s0, $s5, -0x2570
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
label_11c050:
    // 0x11c050: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11c050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11c054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c058: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x11c058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x11c05c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11C05Cu;
    SET_GPR_U32(ctx, 31, 0x11C064u);
    ctx->pc = 0x11C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C05Cu;
    // 0x11c060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11C05Cu, 0x11C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C064u;
label_11c064:
    // 0x11c064: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C064u;
            // 0x11c068: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C0B4u;
            goto label_11c0b4;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x8ec29dd0  lw          $v0, -0x6230($s6)
    ctx->pc = 0x11c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
    // 0x11c070: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C070u;
    {
        const bool branch_taken_0x11c070 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C070u;
        // 0x11c074: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c070) {
            ctx->pc = 0x11C088u;
            goto label_11c088;
        }
    }
    ctx->pc = 0x11C078u;
    // 0x11c078: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c07c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C07Cu;
    SET_GPR_U32(ctx, 31, 0x11C084u);
    ctx->pc = 0x11C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C07Cu;
    // 0x11c080: 0x2484b368  addiu       $a0, $a0, -0x4C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C07Cu, 0x11C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C084u;
label_11c084:
    // 0x11c084: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11c084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11c088:
    // 0x11c088: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c08c: 0x0  nop
    ctx->pc = 0x11c08cu;
    // NOP
label_11c090:
    // 0x11c090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11c094: 0x0  nop
    ctx->pc = 0x11c094u;
    // NOP
    // 0x11c098: 0x0  nop
    ctx->pc = 0x11c098u;
    // NOP
    // 0x11c09c: 0x0  nop
    ctx->pc = 0x11c09cu;
    // NOP
    // 0x11c0a0: 0x0  nop
    ctx->pc = 0x11c0a0u;
    // NOP
    // 0x11c0a4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C0A4u;
    {
        const bool branch_taken_0x11c0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c0a4) {
            ctx->pc = 0x11C090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c090;
        }
    }
    ctx->pc = 0x11C0ACu;
    // 0x11c0ac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11C0ACu;
    {
        const bool branch_taken_0x11c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0ACu;
        // 0x11c0b0: 0x26b0da90  addiu       $s0, $s5, -0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0ac) {
            ctx->pc = 0x11C050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c050;
        }
    }
    ctx->pc = 0x11C0B4u;
label_11c0b4:
    // 0x11c0b4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11C0B4u;
    {
        const bool branch_taken_0x11c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0B4u;
        // 0x11c0b8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0b4) {
            ctx->pc = 0x11C028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c028;
        }
    }
    ctx->pc = 0x11C0BCu;
    // 0x11c0bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11C0BCu;
    {
        const bool branch_taken_0x11c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0BCu;
        // 0x11c0c0: 0xae209e10  sw          $zero, -0x61F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0bc) {
            ctx->pc = 0x11C0CCu;
            goto label_11c0cc;
        }
    }
    ctx->pc = 0x11C0C4u;
label_11c0c4:
    // 0x11c0c4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x11c0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x11c0c8: 0x3c170036  lui         $s7, 0x36
    ctx->pc = 0x11c0c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
label_11c0cc:
    // 0x11c0cc: 0x2690dad0  addiu       $s0, $s4, -0x2530
    ctx->pc = 0x11c0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957776));
    // 0x11c0d0: 0xae92dad0  sw          $s2, -0x2530($s4)
    ctx->pc = 0x11c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294957776), GPR_U32(ctx, 18));
    // 0x11c0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0d8: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C0D8u;
    SET_GPR_U32(ctx, 31, 0x11C0E0u);
    ctx->pc = 0x11C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0D8u;
    // 0x11c0dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C0D8u, 0x11C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0E0u;
label_11c0e0:
    // 0x11c0e0: 0x26f1afc0  addiu       $s1, $s7, -0x5040
    ctx->pc = 0x11c0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946752));
    // 0x11c0e4: 0x26a4da90  addiu       $a0, $s5, -0x2570
    ctx->pc = 0x11c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957712));
    // 0x11c0e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11c0e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c0fc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11c0fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c100: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11c100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c104: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C104u;
    SET_GPR_U32(ctx, 31, 0x11C10Cu);
    ctx->pc = 0x11C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C104u;
    // 0x11c108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C104u, 0x11C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C10Cu;
label_11c10c:
    // 0x11c10c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C10Cu;
    {
        const bool branch_taken_0x11c10c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c10c) {
            ctx->pc = 0x11C110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C10Cu;
            // 0x11c110: 0x8ec29dd0  lw          $v0, -0x6230($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294942160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C134u;
            goto label_11c134;
        }
    }
    ctx->pc = 0x11C114u;
label_11c114:
    // 0x11c114: 0x8e649dec  lw          $a0, -0x6214($s3)
    ctx->pc = 0x11c114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    // 0x11c118: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C118u;
    SET_GPR_U32(ctx, 31, 0x11C120u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C118u, 0x11C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C120u;
label_11c120:
    // 0x11c120: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x11c120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x11c124: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c128: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x11c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c12c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C12Cu;
    {
        const bool branch_taken_0x11c12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C12Cu;
        // 0x11c130: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c12c) {
            ctx->pc = 0x11C15Cu;
            goto label_11c15c;
        }
    }
    ctx->pc = 0x11C134u;
label_11c134:
    // 0x11c134: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C134u;
    {
        const bool branch_taken_0x11c134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C134u;
        // 0x11c138: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c134) {
            ctx->pc = 0x11C144u;
            goto label_11c144;
        }
    }
    ctx->pc = 0x11C13Cu;
    // 0x11c13c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C13Cu;
    SET_GPR_U32(ctx, 31, 0x11C144u);
    ctx->pc = 0x11C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C13Cu;
    // 0x11c140: 0x2484b388  addiu       $a0, $a0, -0x4C78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C13Cu, 0x11C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C144u;
label_11c144:
    // 0x11c144: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11c144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11c148: 0x8e649dec  lw          $a0, -0x6214($s3)
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942188)));
    // 0x11c14c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x11c14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x11c150: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C150u;
    SET_GPR_U32(ctx, 31, 0x11C158u);
    ctx->pc = 0x11C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C150u;
    // 0x11c154: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C150u, 0x11C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C158u;
label_11c158:
    // 0x11c158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c15c:
    // 0x11c15c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11c15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11c160: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11c160u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11c164: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c168: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11c168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c16c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11c16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c170: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11c170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c174: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c178: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c17c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c180: 0x3e00008  jr          $ra
    ctx->pc = 0x11C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C180u;
        // 0x11c184: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C188u;
}
