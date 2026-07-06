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

// Function: sub_002A12B8
// Address: 0x2a12b8 - 0x2a14b8
void sub_002A12B8_0x2a12b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A12B8_0x2a12b8");
#endif

    switch (ctx->pc) {
        case 0x2a12b8u: goto label_2a12b8;
        case 0x2a12bcu: goto label_2a12bc;
        case 0x2a12c0u: goto label_2a12c0;
        case 0x2a12c4u: goto label_2a12c4;
        case 0x2a12c8u: goto label_2a12c8;
        case 0x2a12ccu: goto label_2a12cc;
        case 0x2a12d0u: goto label_2a12d0;
        case 0x2a12d4u: goto label_2a12d4;
        case 0x2a12d8u: goto label_2a12d8;
        case 0x2a12dcu: goto label_2a12dc;
        case 0x2a12e0u: goto label_2a12e0;
        case 0x2a12e4u: goto label_2a12e4;
        case 0x2a12e8u: goto label_2a12e8;
        case 0x2a12ecu: goto label_2a12ec;
        case 0x2a12f0u: goto label_2a12f0;
        case 0x2a12f4u: goto label_2a12f4;
        case 0x2a12f8u: goto label_2a12f8;
        case 0x2a12fcu: goto label_2a12fc;
        case 0x2a1300u: goto label_2a1300;
        case 0x2a1304u: goto label_2a1304;
        case 0x2a1308u: goto label_2a1308;
        case 0x2a130cu: goto label_2a130c;
        case 0x2a1310u: goto label_2a1310;
        case 0x2a1314u: goto label_2a1314;
        case 0x2a1318u: goto label_2a1318;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1320u: goto label_2a1320;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1328u: goto label_2a1328;
        case 0x2a132cu: goto label_2a132c;
        case 0x2a1330u: goto label_2a1330;
        case 0x2a1334u: goto label_2a1334;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1340u: goto label_2a1340;
        case 0x2a1344u: goto label_2a1344;
        case 0x2a1348u: goto label_2a1348;
        case 0x2a134cu: goto label_2a134c;
        case 0x2a1350u: goto label_2a1350;
        case 0x2a1354u: goto label_2a1354;
        case 0x2a1358u: goto label_2a1358;
        case 0x2a135cu: goto label_2a135c;
        case 0x2a1360u: goto label_2a1360;
        case 0x2a1364u: goto label_2a1364;
        case 0x2a1368u: goto label_2a1368;
        case 0x2a136cu: goto label_2a136c;
        case 0x2a1370u: goto label_2a1370;
        case 0x2a1374u: goto label_2a1374;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a137cu: goto label_2a137c;
        case 0x2a1380u: goto label_2a1380;
        case 0x2a1384u: goto label_2a1384;
        case 0x2a1388u: goto label_2a1388;
        case 0x2a138cu: goto label_2a138c;
        case 0x2a1390u: goto label_2a1390;
        case 0x2a1394u: goto label_2a1394;
        case 0x2a1398u: goto label_2a1398;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13a0u: goto label_2a13a0;
        case 0x2a13a4u: goto label_2a13a4;
        case 0x2a13a8u: goto label_2a13a8;
        case 0x2a13acu: goto label_2a13ac;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13b4u: goto label_2a13b4;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a13bcu: goto label_2a13bc;
        case 0x2a13c0u: goto label_2a13c0;
        case 0x2a13c4u: goto label_2a13c4;
        case 0x2a13c8u: goto label_2a13c8;
        case 0x2a13ccu: goto label_2a13cc;
        case 0x2a13d0u: goto label_2a13d0;
        case 0x2a13d4u: goto label_2a13d4;
        case 0x2a13d8u: goto label_2a13d8;
        case 0x2a13dcu: goto label_2a13dc;
        case 0x2a13e0u: goto label_2a13e0;
        case 0x2a13e4u: goto label_2a13e4;
        case 0x2a13e8u: goto label_2a13e8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13f0u: goto label_2a13f0;
        case 0x2a13f4u: goto label_2a13f4;
        case 0x2a13f8u: goto label_2a13f8;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1400u: goto label_2a1400;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1408u: goto label_2a1408;
        case 0x2a140cu: goto label_2a140c;
        case 0x2a1410u: goto label_2a1410;
        case 0x2a1414u: goto label_2a1414;
        case 0x2a1418u: goto label_2a1418;
        case 0x2a141cu: goto label_2a141c;
        case 0x2a1420u: goto label_2a1420;
        case 0x2a1424u: goto label_2a1424;
        case 0x2a1428u: goto label_2a1428;
        case 0x2a142cu: goto label_2a142c;
        case 0x2a1430u: goto label_2a1430;
        case 0x2a1434u: goto label_2a1434;
        case 0x2a1438u: goto label_2a1438;
        case 0x2a143cu: goto label_2a143c;
        case 0x2a1440u: goto label_2a1440;
        case 0x2a1444u: goto label_2a1444;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a144cu: goto label_2a144c;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a1454u: goto label_2a1454;
        case 0x2a1458u: goto label_2a1458;
        case 0x2a145cu: goto label_2a145c;
        case 0x2a1460u: goto label_2a1460;
        case 0x2a1464u: goto label_2a1464;
        case 0x2a1468u: goto label_2a1468;
        case 0x2a146cu: goto label_2a146c;
        case 0x2a1470u: goto label_2a1470;
        case 0x2a1474u: goto label_2a1474;
        case 0x2a1478u: goto label_2a1478;
        case 0x2a147cu: goto label_2a147c;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a1484u: goto label_2a1484;
        case 0x2a1488u: goto label_2a1488;
        case 0x2a148cu: goto label_2a148c;
        case 0x2a1490u: goto label_2a1490;
        case 0x2a1494u: goto label_2a1494;
        case 0x2a1498u: goto label_2a1498;
        case 0x2a149cu: goto label_2a149c;
        case 0x2a14a0u: goto label_2a14a0;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14a8u: goto label_2a14a8;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14b0u: goto label_2a14b0;
        case 0x2a14b4u: goto label_2a14b4;
        default: break;
    }

    ctx->pc = 0x2a12b8u;

label_2a12b8:
    // 0x2a12b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a12b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a12bc:
    // 0x2a12bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a12c0:
    // 0x2a12c0: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2a12c4:
    // 0x2a12c4: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2a12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2a12c8:
    // 0x2a12c8: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2a12c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a12cc:
    // 0x2a12cc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a12ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2a12d0:
    // 0x2a12d0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2a12d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a12d4:
    // 0x2a12d4: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2a12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2a12d8:
    // 0x2a12d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a12d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a12dc:
    // 0x2a12dc: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2a12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2a12e0:
    // 0x2a12e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a12e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a12e4:
    // 0x2a12e4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2a12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2a12e8:
    // 0x2a12e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a12e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a12ec:
    // 0x2a12ec: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2a12f0:
    // 0x2a12f0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2a12f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a12f4:
    // 0x2a12f4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2a12f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2a12f8:
    // 0x2a12f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a12f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a12fc:
    // 0x2a12fc: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a12fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2a1300:
    // 0x2a1300: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2a1304:
    // 0x2a1304: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2a1304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_2a1308:
    // 0x2a1308: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2a130c:
    if (ctx->pc == 0x2A130Cu) {
        ctx->pc = 0x2A130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1308u;
        // 0x2a130c: 0xafab0044  sw          $t3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1310u;
        goto label_2a1310;
    }
    ctx->pc = 0x2A1308u;
    {
        const bool branch_taken_0x2a1308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1308u;
        // 0x2a130c: 0xafab0044  sw          $t3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1308) {
            ctx->pc = 0x2A1318u;
            goto label_2a1318;
        }
    }
    ctx->pc = 0x2A1310u;
label_2a1310:
    // 0x2a1310: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2a1314:
    if (ctx->pc == 0x2A1314u) {
        ctx->pc = 0x2A1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1310u;
        // 0x2a1314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1318u;
        goto label_2a1318;
    }
    ctx->pc = 0x2A1310u;
    {
        const bool branch_taken_0x2a1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1310u;
        // 0x2a1314: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1310) {
            ctx->pc = 0x2A1484u;
            goto label_2a1484;
        }
    }
    ctx->pc = 0x2A1318u;
label_2a1318:
    // 0x2a1318: 0xc0a1a88  jal         func_286A20
label_2a131c:
    if (ctx->pc == 0x2A131Cu) {
        ctx->pc = 0x2A131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1318u;
        // 0x2a131c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1320u;
        goto label_2a1320;
    }
    ctx->pc = 0x2A1318u;
    SET_GPR_U32(ctx, 31, 0x2A1320u);
    ctx->pc = 0x2A131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1318u;
    // 0x2a131c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A1318u, 0x2A1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1320u;
label_2a1320:
    // 0x2a1320: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2a1320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a1324:
    // 0x2a1324: 0xc0a1a88  jal         func_286A20
label_2a1328:
    if (ctx->pc == 0x2A1328u) {
        ctx->pc = 0x2A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1324u;
        // 0x2a1328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A132Cu;
        goto label_2a132c;
    }
    ctx->pc = 0x2A1324u;
    SET_GPR_U32(ctx, 31, 0x2A132Cu);
    ctx->pc = 0x2A1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1324u;
    // 0x2a1328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A1324u, 0x2A132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A132Cu;
label_2a132c:
    // 0x2a132c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2a132cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a1330:
    // 0x2a1330: 0xc0a1a02  jal         func_286808
label_2a1334:
    if (ctx->pc == 0x2A1334u) {
        ctx->pc = 0x2A1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1330u;
        // 0x2a1334: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1338u;
        goto label_2a1338;
    }
    ctx->pc = 0x2A1330u;
    SET_GPR_U32(ctx, 31, 0x2A1338u);
    ctx->pc = 0x2A1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1330u;
    // 0x2a1334: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2A1330u, 0x2A1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1338u;
label_2a1338:
    // 0x2a1338: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2a133c:
    // 0x2a133c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a133cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a1340:
    // 0x2a1340: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2a1344:
    // 0x2a1344: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2a1344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a1348:
    // 0x2a1348: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a1348u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2a134c:
    // 0x2a134c: 0x290c3  sra         $s2, $v0, 3
    ctx->pc = 0x2a134cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
label_2a1350:
    // 0x2a1350: 0x2f2102b  sltu        $v0, $s7, $s2
    ctx->pc = 0x2a1350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2a1354:
    // 0x2a1354: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_2a1358:
    if (ctx->pc == 0x2A1358u) {
        ctx->pc = 0x2A1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1354u;
        // 0x2a1358: 0x251102b  sltu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A135Cu;
        goto label_2a135c;
    }
    ctx->pc = 0x2A1354u;
    {
        const bool branch_taken_0x2a1354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1354u;
        // 0x2a1358: 0x251102b  sltu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1354) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A135Cu;
label_2a135c:
    // 0x2a135c: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_2a1360:
    if (ctx->pc == 0x2A1360u) {
        ctx->pc = 0x2A1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A135Cu;
        // 0x2a1360: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1364u;
        goto label_2a1364;
    }
    ctx->pc = 0x2A135Cu;
    {
        const bool branch_taken_0x2a135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A135Cu;
        // 0x2a1360: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a135c) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A1364u;
label_2a1364:
    // 0x2a1364: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a1368:
    // 0x2a1368: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a136c:
    // 0x2a136c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2a136cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1370:
    // 0x2a1370: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2a1374:
    // 0x2a1374: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a1374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a1378:
    // 0x2a1378: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2a137c:
    // 0x2a137c: 0x40f809  jalr        $v0
label_2a1380:
    if (ctx->pc == 0x2A1380u) {
        ctx->pc = 0x2A1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A137Cu;
        // 0x2a1380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1384u;
        goto label_2a1384;
    }
    ctx->pc = 0x2A137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A1384u);
        ctx->pc = 0x2A1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A137Cu;
        // 0x2a1380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A137Cu, 0x2A1384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A1384u;
label_2a1384:
    // 0x2a1384: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a1384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1388:
    // 0x2a1388: 0x16600035  bnez        $s3, . + 4 + (0x35 << 2)
label_2a138c:
    if (ctx->pc == 0x2A138Cu) {
        ctx->pc = 0x2A138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1388u;
        // 0x2a138c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1390u;
        goto label_2a1390;
    }
    ctx->pc = 0x2A1388u;
    {
        const bool branch_taken_0x2a1388 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1388u;
        // 0x2a138c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1388) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A1390u;
label_2a1390:
    // 0x2a1390: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a1394:
    // 0x2a1394: 0xc0a1b8c  jal         func_286E30
label_2a1398:
    if (ctx->pc == 0x2A1398u) {
        ctx->pc = 0x2A1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1394u;
        // 0x2a1398: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A139Cu;
        goto label_2a139c;
    }
    ctx->pc = 0x2A1394u;
    SET_GPR_U32(ctx, 31, 0x2A139Cu);
    ctx->pc = 0x2A1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1394u;
    // 0x2a1398: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x2A1394u, 0x2A139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A139Cu;
label_2a139c:
    // 0x2a139c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2a13a0:
    if (ctx->pc == 0x2A13A0u) {
        ctx->pc = 0x2A13A4u;
        goto label_2a13a4;
    }
    ctx->pc = 0x2A139Cu;
    {
        const bool branch_taken_0x2a139c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a139c) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A13A4u;
label_2a13a4:
    // 0x2a13a4: 0xc0a1a9e  jal         func_286A78
label_2a13a8:
    if (ctx->pc == 0x2A13A8u) {
        ctx->pc = 0x2A13ACu;
        goto label_2a13ac;
    }
    ctx->pc = 0x2A13A4u;
    SET_GPR_U32(ctx, 31, 0x2A13ACu);
    ctx->pc = 0x286A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A78u, 0x2A13A4u, 0x2A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ACu;
label_2a13ac:
    // 0x2a13ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a13acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a13b0:
    // 0x2a13b0: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
label_2a13b4:
    if (ctx->pc == 0x2A13B4u) {
        ctx->pc = 0x2A13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B0u;
        // 0x2a13b4: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13B8u;
        goto label_2a13b8;
    }
    ctx->pc = 0x2A13B0u;
    {
        const bool branch_taken_0x2a13b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a13b0) {
            ctx->pc = 0x2A13B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A13B0u;
            // 0x2a13b4: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A13C0u;
            goto label_2a13c0;
        }
    }
    ctx->pc = 0x2A13B8u;
label_2a13b8:
    // 0x2a13b8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2a13bc:
    if (ctx->pc == 0x2A13BCu) {
        ctx->pc = 0x2A13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B8u;
        // 0x2a13bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13C0u;
        goto label_2a13c0;
    }
    ctx->pc = 0x2A13B8u;
    {
        const bool branch_taken_0x2a13b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13B8u;
        // 0x2a13bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a13b8) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A13C0u;
label_2a13c0:
    // 0x2a13c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a13c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a13c4:
    // 0x2a13c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a13c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a13c8:
    // 0x2a13c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13cc:
    // 0x2a13cc: 0xaec2010c  sw          $v0, 0x10C($s6)
    ctx->pc = 0x2a13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 268), GPR_U32(ctx, 2));
label_2a13d0:
    // 0x2a13d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a13d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d4:
    // 0x2a13d4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a13d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a13d8:
    // 0x2a13d8: 0xc0a1d96  jal         func_287658
label_2a13dc:
    if (ctx->pc == 0x2A13DCu) {
        ctx->pc = 0x2A13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D8u;
        // 0x2a13dc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13E0u;
        goto label_2a13e0;
    }
    ctx->pc = 0x2A13D8u;
    SET_GPR_U32(ctx, 31, 0x2A13E0u);
    ctx->pc = 0x2A13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13D8u;
    // 0x2a13dc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287658u, 0x2A13D8u, 0x2A13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13E0u;
label_2a13e0:
    // 0x2a13e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a13e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a13e4:
    // 0x2a13e4: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
label_2a13e8:
    if (ctx->pc == 0x2A13E8u) {
        ctx->pc = 0x2A13ECu;
        goto label_2a13ec;
    }
    ctx->pc = 0x2A13E4u;
    {
        const bool branch_taken_0x2a13e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a13e4) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0xc0a1a02  jal         func_286808
label_2a13f0:
    if (ctx->pc == 0x2A13F0u) {
        ctx->pc = 0x2A13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13ECu;
        // 0x2a13f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A13F4u;
        goto label_2a13f4;
    }
    ctx->pc = 0x2A13ECu;
    SET_GPR_U32(ctx, 31, 0x2A13F4u);
    ctx->pc = 0x2A13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13ECu;
    // 0x2a13f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2A13ECu, 0x2A13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13F4u;
label_2a13f4:
    // 0x2a13f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a13f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a13f8:
    // 0x2a13f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a13fc:
    // 0x2a13fc: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2a13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
label_2a1400:
    // 0x2a1400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a1400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1404:
    // 0x2a1404: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2a1404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2a1408:
    // 0x2a1408: 0x2610000e  addiu       $s0, $s0, 0xE
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_2a140c:
    // 0x2a140c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2a140cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2a1410:
    // 0x2a1410: 0x1080c3  sra         $s0, $s0, 3
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 3));
label_2a1414:
    // 0x2a1414: 0x2508823  subu        $s1, $s2, $s0
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2a1418:
    // 0x2a1418: 0xc0a1bdc  jal         func_286F70
label_2a141c:
    if (ctx->pc == 0x2A141Cu) {
        ctx->pc = 0x2A141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1418u;
        // 0x2a141c: 0x2b12821  addu        $a1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1420u;
        goto label_2a1420;
    }
    ctx->pc = 0x2A1418u;
    SET_GPR_U32(ctx, 31, 0x2A1420u);
    ctx->pc = 0x2A141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1418u;
    // 0x2a141c: 0x2b12821  addu        $a1, $s5, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286F70u, 0x2A1418u, 0x2A1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1420u;
label_2a1420:
    // 0x2a1420: 0x250802a  slt         $s0, $s2, $s0
    ctx->pc = 0x2a1420u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2a1424:
    // 0x2a1424: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_2a1428:
    if (ctx->pc == 0x2A1428u) {
        ctx->pc = 0x2A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1424u;
        // 0x2a1428: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A142Cu;
        goto label_2a142c;
    }
    ctx->pc = 0x2A1424u;
    {
        const bool branch_taken_0x2a1424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1424u;
        // 0x2a1428: 0x271102a  slt         $v0, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1424) {
            ctx->pc = 0x2A1460u;
            goto label_2a1460;
        }
    }
    ctx->pc = 0x2A142Cu;
label_2a142c:
    // 0x2a142c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a1430:
    if (ctx->pc == 0x2A1430u) {
        ctx->pc = 0x2A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A142Cu;
        // 0x2a1430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1434u;
        goto label_2a1434;
    }
    ctx->pc = 0x2A142Cu;
    {
        const bool branch_taken_0x2a142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A142Cu;
        // 0x2a1430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a142c) {
            ctx->pc = 0x2A1454u;
            goto label_2a1454;
        }
    }
    ctx->pc = 0x2A1434u;
label_2a1434:
    // 0x2a1434: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a1438:
    // 0x2a1438: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_2a143c:
    // 0x2a143c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a1440:
    // 0x2a1440: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2a1440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a1444:
    // 0x2a1444: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2a1444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2a1448:
    // 0x2a1448: 0x0  nop
    ctx->pc = 0x2a1448u;
    // NOP
label_2a144c:
    // 0x2a144c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2a1450:
    if (ctx->pc == 0x2A1450u) {
        ctx->pc = 0x2A1454u;
        goto label_2a1454;
    }
    ctx->pc = 0x2A144Cu;
    {
        const bool branch_taken_0x2a144c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a144c) {
            ctx->pc = 0x2A1438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a1438;
        }
    }
    ctx->pc = 0x2A1454u;
label_2a1454:
    // 0x2a1454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a1458:
    // 0x2a1458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a1458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a145c:
    // 0x2a145c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2a145cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_2a1460:
    // 0x2a1460: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_2a1464:
    if (ctx->pc == 0x2A1464u) {
        ctx->pc = 0x2A1468u;
        goto label_2a1468;
    }
    ctx->pc = 0x2A1460u;
    {
        const bool branch_taken_0x2a1460 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1460) {
            ctx->pc = 0x2A1470u;
            goto label_2a1470;
        }
    }
    ctx->pc = 0x2A1468u;
label_2a1468:
    // 0x2a1468: 0xc0a1abe  jal         func_286AF8
label_2a146c:
    if (ctx->pc == 0x2A146Cu) {
        ctx->pc = 0x2A146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1468u;
        // 0x2a146c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1470u;
        goto label_2a1470;
    }
    ctx->pc = 0x2A1468u;
    SET_GPR_U32(ctx, 31, 0x2A1470u);
    ctx->pc = 0x2A146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1468u;
    // 0x2a146c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2A1468u, 0x2A1470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1470u;
label_2a1470:
    // 0x2a1470: 0xc0a1a36  jal         func_2868D8
label_2a1474:
    if (ctx->pc == 0x2A1474u) {
        ctx->pc = 0x2A1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1470u;
        // 0x2a1474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1478u;
        goto label_2a1478;
    }
    ctx->pc = 0x2A1470u;
    SET_GPR_U32(ctx, 31, 0x2A1478u);
    ctx->pc = 0x2A1474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1470u;
    // 0x2a1474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2A1470u, 0x2A1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1478u;
label_2a1478:
    // 0x2a1478: 0xc0a1a36  jal         func_2868D8
label_2a147c:
    if (ctx->pc == 0x2A147Cu) {
        ctx->pc = 0x2A147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1478u;
        // 0x2a147c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A1480u;
        goto label_2a1480;
    }
    ctx->pc = 0x2A1478u;
    SET_GPR_U32(ctx, 31, 0x2A1480u);
    ctx->pc = 0x2A147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1478u;
    // 0x2a147c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2A1478u, 0x2A1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1480u;
label_2a1480:
    // 0x2a1480: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a1480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a1484:
    // 0x2a1484: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a1488:
    // 0x2a1488: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a1488u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a148c:
    // 0x2a148c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a148cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a1490:
    // 0x2a1490: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a1490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a1494:
    // 0x2a1494: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a1494u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a1498:
    // 0x2a1498: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a1498u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a149c:
    // 0x2a149c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a149cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a14a0:
    // 0x2a14a0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a14a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a14a4:
    // 0x2a14a4: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a14a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a14a8:
    // 0x2a14a8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a14a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a14ac:
    // 0x2a14ac: 0x3e00008  jr          $ra
label_2a14b0:
    if (ctx->pc == 0x2A14B0u) {
        ctx->pc = 0x2A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14ACu;
        // 0x2a14b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A14B4u;
        goto label_2a14b4;
    }
    ctx->pc = 0x2A14ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A14ACu;
        // 0x2a14b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A14ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A14B4u;
label_2a14b4:
    // 0x2a14b4: 0x0  nop
    ctx->pc = 0x2a14b4u;
    // NOP
    if (ctx->pc == 0x2a14b4u) { ctx->pc = 0x2a14b8u; }
}
