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

// Function: sub_001E12B0
// Address: 0x1e12b0 - 0x1e13f0
void sub_001E12B0_0x1e12b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E12B0_0x1e12b0");
#endif

    switch (ctx->pc) {
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e12e4u: goto label_1e12e4;
        case 0x1e12f8u: goto label_1e12f8;
        case 0x1e132cu: goto label_1e132c;
        case 0x1e1338u: goto label_1e1338;
        case 0x1e1340u: goto label_1e1340;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e1378u: goto label_1e1378;
        case 0x1e1380u: goto label_1e1380;
        case 0x1e1388u: goto label_1e1388;
        case 0x1e1390u: goto label_1e1390;
        case 0x1e139cu: goto label_1e139c;
        case 0x1e13a8u: goto label_1e13a8;
        case 0x1e13b4u: goto label_1e13b4;
        case 0x1e13bcu: goto label_1e13bc;
        case 0x1e13c4u: goto label_1e13c4;
        default: break;
    }

    ctx->pc = 0x1e12b0u;

    // 0x1e12b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e12b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e12b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e12b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e12b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e12bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e12c0: 0x26110488  addiu       $s1, $s0, 0x488
    ctx->pc = 0x1e12c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    // 0x1e12c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e12c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e12cc: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E12CCu;
    SET_GPR_U32(ctx, 31, 0x1E12D4u);
    ctx->pc = 0x1E12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12CCu;
    // 0x1e12d0: 0x261204a8  addiu       $s2, $s0, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E12CCu, 0x1E12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12D4u;
label_1e12d4:
    // 0x1e12d4: 0xae000508  sw          $zero, 0x508($s0)
    ctx->pc = 0x1e12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
    // 0x1e12d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e12d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12dc: 0xc079694  jal         func_1E5A50
    ctx->pc = 0x1E12DCu;
    SET_GPR_U32(ctx, 31, 0x1E12E4u);
    ctx->pc = 0x1E12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12DCu;
    // 0x1e12e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A50u, 0x1E12DCu, 0x1E12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12E4u;
label_1e12e4:
    // 0x1e12e4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1e12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e12e8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E12E8u;
    {
        const bool branch_taken_0x1e12e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E8u;
        // 0x1e12ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e8) {
            ctx->pc = 0x1E1380u;
            goto label_1e1380;
        }
    }
    ctx->pc = 0x1E12F0u;
    // 0x1e12f0: 0xc077850  jal         func_1DE140
    ctx->pc = 0x1E12F0u;
    SET_GPR_U32(ctx, 31, 0x1E12F8u);
    ctx->pc = 0x1DE140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE140u, 0x1E12F0u, 0x1E12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12F8u;
label_1e12f8:
    // 0x1e12f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E12F8u;
    {
        const bool branch_taken_0x1e12f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12F8u;
        // 0x1e12fc: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12f8) {
            ctx->pc = 0x1E1320u;
            goto label_1e1320;
        }
    }
    ctx->pc = 0x1E1300u;
    // 0x1e1300: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e130c: 0x2484d148  addiu       $a0, $a0, -0x2EB8
    ctx->pc = 0x1e130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955336));
    // 0x1e1310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1314: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1314u;
    ctx->pc = 0x1E1318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1314u;
    // 0x1e1318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E131Cu;
    // 0x1e131c: 0x0  nop
    ctx->pc = 0x1e131cu;
    // NOP
label_1e1320:
    // 0x1e1320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1324: 0xc07999e  jal         func_1E6678
    ctx->pc = 0x1E1324u;
    SET_GPR_U32(ctx, 31, 0x1E132Cu);
    ctx->pc = 0x1E1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1324u;
    // 0x1e1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6678u, 0x1E1324u, 0x1E132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E132Cu;
label_1e132c:
    // 0x1e132c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1330: 0xc07999e  jal         func_1E6678
    ctx->pc = 0x1E1330u;
    SET_GPR_U32(ctx, 31, 0x1E1338u);
    ctx->pc = 0x1E1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1330u;
    // 0x1e1334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6678u, 0x1E1330u, 0x1E1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1338u;
label_1e1338:
    // 0x1e1338: 0xc0791cc  jal         func_1E4730
    ctx->pc = 0x1E1338u;
    SET_GPR_U32(ctx, 31, 0x1E1340u);
    ctx->pc = 0x1E133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1338u;
    // 0x1e133c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4730u, 0x1E1338u, 0x1E1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1340u;
label_1e1340:
    // 0x1e1340: 0xc0791ac  jal         func_1E46B0
    ctx->pc = 0x1E1340u;
    SET_GPR_U32(ctx, 31, 0x1E1348u);
    ctx->pc = 0x1E1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1340u;
    // 0x1e1344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E46B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E46B0u, 0x1E1340u, 0x1E1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1348u;
label_1e1348:
    // 0x1e1348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1348u;
    {
        const bool branch_taken_0x1e1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1348u;
        // 0x1e134c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1348) {
            ctx->pc = 0x1E1370u;
            goto label_1e1370;
        }
    }
    ctx->pc = 0x1E1350u;
    // 0x1e1350: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e135c: 0x2484d170  addiu       $a0, $a0, -0x2E90
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
    // 0x1e1360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1364: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1368: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E1368u;
    ctx->pc = 0x1E136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1368u;
    // 0x1e136c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1370u;
label_1e1370:
    // 0x1e1370: 0xc0791c4  jal         func_1E4710
    ctx->pc = 0x1E1370u;
    SET_GPR_U32(ctx, 31, 0x1E1378u);
    ctx->pc = 0x1E4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4710u, 0x1E1370u, 0x1E1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1378u;
label_1e1378:
    // 0x1e1378: 0xc078008  jal         func_1E0020
    ctx->pc = 0x1E1378u;
    SET_GPR_U32(ctx, 31, 0x1E1380u);
    ctx->pc = 0x1E137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1378u;
    // 0x1e137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0020u, 0x1E1378u, 0x1E1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1380u;
label_1e1380:
    // 0x1e1380: 0xc0784fc  jal         func_1E13F0
    ctx->pc = 0x1E1380u;
    SET_GPR_U32(ctx, 31, 0x1E1388u);
    ctx->pc = 0x1E1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1380u;
    // 0x1e1384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E13F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E13F0u, 0x1E1380u, 0x1E1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1388u;
label_1e1388:
    // 0x1e1388: 0xc07844c  jal         func_1E1130
    ctx->pc = 0x1E1388u;
    SET_GPR_U32(ctx, 31, 0x1E1390u);
    ctx->pc = 0x1E138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1388u;
    // 0x1e138c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1130u, 0x1E1388u, 0x1E1390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1390u;
label_1e1390:
    // 0x1e1390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1394: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E1394u;
    SET_GPR_U32(ctx, 31, 0x1E139Cu);
    ctx->pc = 0x1E1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1394u;
    // 0x1e1398: 0x82050072  lb          $a1, 0x72($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E1394u, 0x1E139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E139Cu;
label_1e139c:
    // 0x1e139c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e139cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13a0: 0xc0798ea  jal         func_1E63A8
    ctx->pc = 0x1E13A0u;
    SET_GPR_U32(ctx, 31, 0x1E13A8u);
    ctx->pc = 0x1E13A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13A0u;
    // 0x1e13a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A8u, 0x1E13A0u, 0x1E13A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13A8u;
label_1e13a8:
    // 0x1e13a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e13a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13ac: 0xc0798ea  jal         func_1E63A8
    ctx->pc = 0x1E13ACu;
    SET_GPR_U32(ctx, 31, 0x1E13B4u);
    ctx->pc = 0x1E13B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13ACu;
    // 0x1e13b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A8u, 0x1E13ACu, 0x1E13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13B4u;
label_1e13b4:
    // 0x1e13b4: 0xc07988c  jal         func_1E6230
    ctx->pc = 0x1E13B4u;
    SET_GPR_U32(ctx, 31, 0x1E13BCu);
    ctx->pc = 0x1E13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13B4u;
    // 0x1e13b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6230u, 0x1E13B4u, 0x1E13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13BCu;
label_1e13bc:
    // 0x1e13bc: 0xc07988c  jal         func_1E6230
    ctx->pc = 0x1E13BCu;
    SET_GPR_U32(ctx, 31, 0x1E13C4u);
    ctx->pc = 0x1E13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E13BCu;
    // 0x1e13c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6230u, 0x1E13BCu, 0x1E13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13C4u;
label_1e13c4:
    // 0x1e13c4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1e13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1e13c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e13cc: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x1e13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x1e13d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e13d4: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x1e13d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e13d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e13d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e13dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e13dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e13e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e13e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e13e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e13e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e13e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E13E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E13E8u;
        // 0x1e13ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E13E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E13F0u;
}
