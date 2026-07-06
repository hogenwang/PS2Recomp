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

// Function: sub_001E1400
// Address: 0x1e1400 - 0x1e1638
void sub_001E1400_0x1e1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1400_0x1e1400");
#endif

    switch (ctx->pc) {
        case 0x1e1400u: goto label_1e1400;
        case 0x1e1404u: goto label_1e1404;
        case 0x1e1408u: goto label_1e1408;
        case 0x1e140cu: goto label_1e140c;
        case 0x1e1410u: goto label_1e1410;
        case 0x1e1414u: goto label_1e1414;
        case 0x1e1418u: goto label_1e1418;
        case 0x1e141cu: goto label_1e141c;
        case 0x1e1420u: goto label_1e1420;
        case 0x1e1424u: goto label_1e1424;
        case 0x1e1428u: goto label_1e1428;
        case 0x1e142cu: goto label_1e142c;
        case 0x1e1430u: goto label_1e1430;
        case 0x1e1434u: goto label_1e1434;
        case 0x1e1438u: goto label_1e1438;
        case 0x1e143cu: goto label_1e143c;
        case 0x1e1440u: goto label_1e1440;
        case 0x1e1444u: goto label_1e1444;
        case 0x1e1448u: goto label_1e1448;
        case 0x1e144cu: goto label_1e144c;
        case 0x1e1450u: goto label_1e1450;
        case 0x1e1454u: goto label_1e1454;
        case 0x1e1458u: goto label_1e1458;
        case 0x1e145cu: goto label_1e145c;
        case 0x1e1460u: goto label_1e1460;
        case 0x1e1464u: goto label_1e1464;
        case 0x1e1468u: goto label_1e1468;
        case 0x1e146cu: goto label_1e146c;
        case 0x1e1470u: goto label_1e1470;
        case 0x1e1474u: goto label_1e1474;
        case 0x1e1478u: goto label_1e1478;
        case 0x1e147cu: goto label_1e147c;
        case 0x1e1480u: goto label_1e1480;
        case 0x1e1484u: goto label_1e1484;
        case 0x1e1488u: goto label_1e1488;
        case 0x1e148cu: goto label_1e148c;
        case 0x1e1490u: goto label_1e1490;
        case 0x1e1494u: goto label_1e1494;
        case 0x1e1498u: goto label_1e1498;
        case 0x1e149cu: goto label_1e149c;
        case 0x1e14a0u: goto label_1e14a0;
        case 0x1e14a4u: goto label_1e14a4;
        case 0x1e14a8u: goto label_1e14a8;
        case 0x1e14acu: goto label_1e14ac;
        case 0x1e14b0u: goto label_1e14b0;
        case 0x1e14b4u: goto label_1e14b4;
        case 0x1e14b8u: goto label_1e14b8;
        case 0x1e14bcu: goto label_1e14bc;
        case 0x1e14c0u: goto label_1e14c0;
        case 0x1e14c4u: goto label_1e14c4;
        case 0x1e14c8u: goto label_1e14c8;
        case 0x1e14ccu: goto label_1e14cc;
        case 0x1e14d0u: goto label_1e14d0;
        case 0x1e14d4u: goto label_1e14d4;
        case 0x1e14d8u: goto label_1e14d8;
        case 0x1e14dcu: goto label_1e14dc;
        case 0x1e14e0u: goto label_1e14e0;
        case 0x1e14e4u: goto label_1e14e4;
        case 0x1e14e8u: goto label_1e14e8;
        case 0x1e14ecu: goto label_1e14ec;
        case 0x1e14f0u: goto label_1e14f0;
        case 0x1e14f4u: goto label_1e14f4;
        case 0x1e14f8u: goto label_1e14f8;
        case 0x1e14fcu: goto label_1e14fc;
        case 0x1e1500u: goto label_1e1500;
        case 0x1e1504u: goto label_1e1504;
        case 0x1e1508u: goto label_1e1508;
        case 0x1e150cu: goto label_1e150c;
        case 0x1e1510u: goto label_1e1510;
        case 0x1e1514u: goto label_1e1514;
        case 0x1e1518u: goto label_1e1518;
        case 0x1e151cu: goto label_1e151c;
        case 0x1e1520u: goto label_1e1520;
        case 0x1e1524u: goto label_1e1524;
        case 0x1e1528u: goto label_1e1528;
        case 0x1e152cu: goto label_1e152c;
        case 0x1e1530u: goto label_1e1530;
        case 0x1e1534u: goto label_1e1534;
        case 0x1e1538u: goto label_1e1538;
        case 0x1e153cu: goto label_1e153c;
        case 0x1e1540u: goto label_1e1540;
        case 0x1e1544u: goto label_1e1544;
        case 0x1e1548u: goto label_1e1548;
        case 0x1e154cu: goto label_1e154c;
        case 0x1e1550u: goto label_1e1550;
        case 0x1e1554u: goto label_1e1554;
        case 0x1e1558u: goto label_1e1558;
        case 0x1e155cu: goto label_1e155c;
        case 0x1e1560u: goto label_1e1560;
        case 0x1e1564u: goto label_1e1564;
        case 0x1e1568u: goto label_1e1568;
        case 0x1e156cu: goto label_1e156c;
        case 0x1e1570u: goto label_1e1570;
        case 0x1e1574u: goto label_1e1574;
        case 0x1e1578u: goto label_1e1578;
        case 0x1e157cu: goto label_1e157c;
        case 0x1e1580u: goto label_1e1580;
        case 0x1e1584u: goto label_1e1584;
        case 0x1e1588u: goto label_1e1588;
        case 0x1e158cu: goto label_1e158c;
        case 0x1e1590u: goto label_1e1590;
        case 0x1e1594u: goto label_1e1594;
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15d8u: goto label_1e15d8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15e0u: goto label_1e15e0;
        case 0x1e15e4u: goto label_1e15e4;
        case 0x1e15e8u: goto label_1e15e8;
        case 0x1e15ecu: goto label_1e15ec;
        case 0x1e15f0u: goto label_1e15f0;
        case 0x1e15f4u: goto label_1e15f4;
        case 0x1e15f8u: goto label_1e15f8;
        case 0x1e15fcu: goto label_1e15fc;
        case 0x1e1600u: goto label_1e1600;
        case 0x1e1604u: goto label_1e1604;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e160cu: goto label_1e160c;
        case 0x1e1610u: goto label_1e1610;
        case 0x1e1614u: goto label_1e1614;
        case 0x1e1618u: goto label_1e1618;
        case 0x1e161cu: goto label_1e161c;
        case 0x1e1620u: goto label_1e1620;
        case 0x1e1624u: goto label_1e1624;
        case 0x1e1628u: goto label_1e1628;
        case 0x1e162cu: goto label_1e162c;
        case 0x1e1630u: goto label_1e1630;
        case 0x1e1634u: goto label_1e1634;
        default: break;
    }

    ctx->pc = 0x1e1400u;

label_1e1400:
    // 0x1e1400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1404:
    // 0x1e1404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1408:
    // 0x1e1408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e140c:
    // 0x1e140c: 0x8078506  j           func_1E1418
label_1e1410:
    if (ctx->pc == 0x1E1410u) {
        ctx->pc = 0x1E1410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E140Cu;
        // 0x1e1410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1414u;
        goto label_1e1414;
    }
    ctx->pc = 0x1E140Cu;
    ctx->pc = 0x1E1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E140Cu;
    // 0x1e1410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1418u;
    goto label_1e1418;
    ctx->pc = 0x1E1414u;
label_1e1414:
    // 0x1e1414: 0x0  nop
    ctx->pc = 0x1e1414u;
    // NOP
label_1e1418:
    // 0x1e1418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e141c:
    // 0x1e141c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e1420:
    // 0x1e1420: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1424:
    // 0x1e1424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e1428:
    // 0x1e1428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e142c:
    // 0x1e142c: 0xc078a58  jal         func_1E2960
label_1e1430:
    if (ctx->pc == 0x1E1430u) {
        ctx->pc = 0x1E1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E142Cu;
        // 0x1e1430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1434u;
        goto label_1e1434;
    }
    ctx->pc = 0x1E142Cu;
    SET_GPR_U32(ctx, 31, 0x1E1434u);
    ctx->pc = 0x1E1430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E142Cu;
    // 0x1e1430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E142Cu, 0x1E1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1434u;
label_1e1434:
    // 0x1e1434: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e1438:
    // 0x1e1438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e143c:
    // 0x1e143c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1e1440:
    if (ctx->pc == 0x1E1440u) {
        ctx->pc = 0x1E1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E143Cu;
        // 0x1e1440: 0x2484d1a0  addiu       $a0, $a0, -0x2E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1444u;
        goto label_1e1444;
    }
    ctx->pc = 0x1E143Cu;
    {
        const bool branch_taken_0x1e143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E143Cu;
        // 0x1e1440: 0x2484d1a0  addiu       $a0, $a0, -0x2E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e143c) {
            ctx->pc = 0x1E1458u;
            goto label_1e1458;
        }
    }
    ctx->pc = 0x1E1444u;
label_1e1444:
    // 0x1e1444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1448:
    // 0x1e1448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e144c:
    // 0x1e144c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e144cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1450:
    // 0x1e1450: 0x8079afa  j           func_1E6BE8
label_1e1454:
    if (ctx->pc == 0x1E1454u) {
        ctx->pc = 0x1E1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1450u;
        // 0x1e1454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1458u;
        goto label_1e1458;
    }
    ctx->pc = 0x1E1450u;
    ctx->pc = 0x1E1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1450u;
    // 0x1e1454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1458u;
label_1e1458:
    // 0x1e1458: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_1e145c:
    if (ctx->pc == 0x1E145Cu) {
        ctx->pc = 0x1E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1458u;
        // 0x1e145c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1460u;
        goto label_1e1460;
    }
    ctx->pc = 0x1E1458u;
    {
        const bool branch_taken_0x1e1458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1458u;
        // 0x1e145c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1458) {
            ctx->pc = 0x1E1480u;
            goto label_1e1480;
        }
    }
    ctx->pc = 0x1E1460u;
label_1e1460:
    // 0x1e1460: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e1464:
    // 0x1e1464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1468:
    // 0x1e1468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e146c:
    // 0x1e146c: 0x2484d1d0  addiu       $a0, $a0, -0x2E30
    ctx->pc = 0x1e146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955472));
label_1e1470:
    // 0x1e1470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1474:
    // 0x1e1474: 0x8079afa  j           func_1E6BE8
label_1e1478:
    if (ctx->pc == 0x1E1478u) {
        ctx->pc = 0x1E1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1474u;
        // 0x1e1478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E147Cu;
        goto label_1e147c;
    }
    ctx->pc = 0x1E1474u;
    ctx->pc = 0x1E1478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1474u;
    // 0x1e1478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E147Cu;
label_1e147c:
    // 0x1e147c: 0x0  nop
    ctx->pc = 0x1e147cu;
    // NOP
label_1e1480:
    // 0x1e1480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1484:
    // 0x1e1484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1488:
    // 0x1e1488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e148c:
    // 0x1e148c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1490:
    // 0x1e1490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1494:
    // 0x1e1494: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e1494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e1498:
    // 0x1e1498: 0x8078528  j           func_1E14A0
label_1e149c:
    if (ctx->pc == 0x1E149Cu) {
        ctx->pc = 0x1E149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1498u;
        // 0x1e149c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14A0u;
        goto label_1e14a0;
    }
    ctx->pc = 0x1E1498u;
    ctx->pc = 0x1E149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1498u;
    // 0x1e149c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E14A0u;
    goto label_1e14a0;
    ctx->pc = 0x1E14A0u;
label_1e14a0:
    // 0x1e14a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e14a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e14a4:
    // 0x1e14a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e14a8:
    // 0x1e14a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e14a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e14ac:
    // 0x1e14ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e14b0:
    // 0x1e14b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e14b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e14b4:
    // 0x1e14b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e14b8:
    // 0x1e14b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e14b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e14bc:
    // 0x1e14bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1e14c0:
    // 0x1e14c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e14c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e14c4:
    // 0x1e14c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e14c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e14c8:
    // 0x1e14c8: 0xc079e92  jal         func_1E7A48
label_1e14cc:
    if (ctx->pc == 0x1E14CCu) {
        ctx->pc = 0x1E14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14C8u;
        // 0x1e14cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14D0u;
        goto label_1e14d0;
    }
    ctx->pc = 0x1E14C8u;
    SET_GPR_U32(ctx, 31, 0x1E14D0u);
    ctx->pc = 0x1E14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14C8u;
    // 0x1e14cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1E14C8u, 0x1E14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14D0u;
label_1e14d0:
    // 0x1e14d0: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_1e14d4:
    // 0x1e14d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e14d8:
    // 0x1e14d8: 0xc0785ba  jal         func_1E16E8
label_1e14dc:
    if (ctx->pc == 0x1E14DCu) {
        ctx->pc = 0x1E14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14D8u;
        // 0x1e14dc: 0xae0203c0  sw          $v0, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14E0u;
        goto label_1e14e0;
    }
    ctx->pc = 0x1E14D8u;
    SET_GPR_U32(ctx, 31, 0x1E14E0u);
    ctx->pc = 0x1E14DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14D8u;
    // 0x1e14dc: 0xae0203c0  sw          $v0, 0x3C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E16E8u, 0x1E14D8u, 0x1E14E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14E0u;
label_1e14e0:
    // 0x1e14e0: 0xc0784ac  jal         func_1E12B0
label_1e14e4:
    if (ctx->pc == 0x1E14E4u) {
        ctx->pc = 0x1E14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14E0u;
        // 0x1e14e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14E8u;
        goto label_1e14e8;
    }
    ctx->pc = 0x1E14E0u;
    SET_GPR_U32(ctx, 31, 0x1E14E8u);
    ctx->pc = 0x1E14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14E0u;
    // 0x1e14e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E12B0u, 0x1E14E0u, 0x1E14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14E8u;
label_1e14e8:
    // 0x1e14e8: 0xc079e92  jal         func_1E7A48
label_1e14ec:
    if (ctx->pc == 0x1E14ECu) {
        ctx->pc = 0x1E14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14E8u;
        // 0x1e14ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14F0u;
        goto label_1e14f0;
    }
    ctx->pc = 0x1E14E8u;
    SET_GPR_U32(ctx, 31, 0x1E14F0u);
    ctx->pc = 0x1E14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14E8u;
    // 0x1e14ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1E14E8u, 0x1E14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14F0u;
label_1e14f0:
    // 0x1e14f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e14f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e14f4:
    // 0x1e14f4: 0xc0786d0  jal         func_1E1B40
label_1e14f8:
    if (ctx->pc == 0x1E14F8u) {
        ctx->pc = 0x1E14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14F4u;
        // 0x1e14f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E14FCu;
        goto label_1e14fc;
    }
    ctx->pc = 0x1E14F4u;
    SET_GPR_U32(ctx, 31, 0x1E14FCu);
    ctx->pc = 0x1E14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14F4u;
    // 0x1e14f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1B40u, 0x1E14F4u, 0x1E14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14FCu;
label_1e14fc:
    // 0x1e14fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1500:
    // 0x1e1500: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1504:
    // 0x1e1504: 0xc0788c0  jal         func_1E2300
label_1e1508:
    if (ctx->pc == 0x1E1508u) {
        ctx->pc = 0x1E1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1504u;
        // 0x1e1508: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E150Cu;
        goto label_1e150c;
    }
    ctx->pc = 0x1E1504u;
    SET_GPR_U32(ctx, 31, 0x1E150Cu);
    ctx->pc = 0x1E1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1504u;
    // 0x1e1508: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2300u, 0x1E1504u, 0x1E150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E150Cu;
label_1e150c:
    // 0x1e150c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1510:
    // 0x1e1510: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e1510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e1514:
    // 0x1e1514: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1518:
    // 0x1e1518: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e1518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e151c:
    // 0x1e151c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e151cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e1520:
    // 0x1e1520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1524:
    // 0x1e1524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1528:
    // 0x1e1528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e152c:
    // 0x1e152c: 0x80788c2  j           func_1E2308
label_1e1530:
    if (ctx->pc == 0x1E1530u) {
        ctx->pc = 0x1E1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E152Cu;
        // 0x1e1530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1534u;
        goto label_1e1534;
    }
    ctx->pc = 0x1E152Cu;
    ctx->pc = 0x1E1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E152Cu;
    // 0x1e1530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2308u, 0x1E152Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1534u;
label_1e1534:
    // 0x1e1534: 0x0  nop
    ctx->pc = 0x1e1534u;
    // NOP
label_1e1538:
    // 0x1e1538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e153c:
    // 0x1e153c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1540:
    // 0x1e1540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1544:
    // 0x1e1544: 0x8078554  j           func_1E1550
label_1e1548:
    if (ctx->pc == 0x1E1548u) {
        ctx->pc = 0x1E1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1544u;
        // 0x1e1548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E154Cu;
        goto label_1e154c;
    }
    ctx->pc = 0x1E1544u;
    ctx->pc = 0x1E1548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1544u;
    // 0x1e1548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1550u;
    goto label_1e1550;
    ctx->pc = 0x1E154Cu;
label_1e154c:
    // 0x1e154c: 0x0  nop
    ctx->pc = 0x1e154cu;
    // NOP
label_1e1550:
    // 0x1e1550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1554:
    // 0x1e1554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e1558:
    // 0x1e1558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e155c:
    // 0x1e155c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e1560:
    // 0x1e1560: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1564:
    // 0x1e1564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e1564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e1568:
    // 0x1e1568: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e156c:
    // 0x1e156c: 0xc078a58  jal         func_1E2960
label_1e1570:
    if (ctx->pc == 0x1E1570u) {
        ctx->pc = 0x1E1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E156Cu;
        // 0x1e1570: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1574u;
        goto label_1e1574;
    }
    ctx->pc = 0x1E156Cu;
    SET_GPR_U32(ctx, 31, 0x1E1574u);
    ctx->pc = 0x1E1570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E156Cu;
    // 0x1e1570: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E156Cu, 0x1E1574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1574u;
label_1e1574:
    // 0x1e1574: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e1578:
    // 0x1e1578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e157c:
    // 0x1e157c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1580:
    // 0x1e1580: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1e1584:
    if (ctx->pc == 0x1E1584u) {
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1580u;
        // 0x1e1584: 0x2484d1f8  addiu       $a0, $a0, -0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1588u;
        goto label_1e1588;
    }
    ctx->pc = 0x1E1580u;
    {
        const bool branch_taken_0x1e1580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1580u;
        // 0x1e1584: 0x2484d1f8  addiu       $a0, $a0, -0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1580) {
            ctx->pc = 0x1E15A0u;
            goto label_1e15a0;
        }
    }
    ctx->pc = 0x1E1588u;
label_1e1588:
    // 0x1e1588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e158c:
    // 0x1e158c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e158cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1590:
    // 0x1e1590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1594:
    // 0x1e1594: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e1598:
    // 0x1e1598: 0x8079afa  j           func_1E6BE8
label_1e159c:
    if (ctx->pc == 0x1E159Cu) {
        ctx->pc = 0x1E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1598u;
        // 0x1e159c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15A0u;
        goto label_1e15a0;
    }
    ctx->pc = 0x1E1598u;
    ctx->pc = 0x1E159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1598u;
    // 0x1e159c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E15A0u;
label_1e15a0:
    // 0x1e15a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e15a4:
    // 0x1e15a4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_1e15a8:
    if (ctx->pc == 0x1E15A8u) {
        ctx->pc = 0x1E15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15A4u;
        // 0x1e15a8: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15ACu;
        goto label_1e15ac;
    }
    ctx->pc = 0x1E15A4u;
    {
        const bool branch_taken_0x1e15a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E15A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15A4u;
        // 0x1e15a8: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15a4) {
            ctx->pc = 0x1E15C8u;
            goto label_1e15c8;
        }
    }
    ctx->pc = 0x1E15ACu;
label_1e15ac:
    // 0x1e15ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e15acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e15b0:
    // 0x1e15b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e15b4:
    // 0x1e15b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e15b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e15b8:
    // 0x1e15b8: 0x2484d228  addiu       $a0, $a0, -0x2DD8
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955560));
label_1e15bc:
    // 0x1e15bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e15bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e15c0:
    // 0x1e15c0: 0x8079afa  j           func_1E6BE8
label_1e15c4:
    if (ctx->pc == 0x1E15C4u) {
        ctx->pc = 0x1E15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C0u;
        // 0x1e15c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15C8u;
        goto label_1e15c8;
    }
    ctx->pc = 0x1E15C0u;
    ctx->pc = 0x1E15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15C0u;
    // 0x1e15c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E15C8u;
label_1e15c8:
    // 0x1e15c8: 0xc079e92  jal         func_1E7A48
label_1e15cc:
    if (ctx->pc == 0x1E15CCu) {
        ctx->pc = 0x1E15CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15C8u;
        // 0x1e15cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15D0u;
        goto label_1e15d0;
    }
    ctx->pc = 0x1E15C8u;
    SET_GPR_U32(ctx, 31, 0x1E15D0u);
    ctx->pc = 0x1E15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15C8u;
    // 0x1e15cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1E15C8u, 0x1E15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D0u;
label_1e15d0:
    // 0x1e15d0: 0xc0785ba  jal         func_1E16E8
label_1e15d4:
    if (ctx->pc == 0x1E15D4u) {
        ctx->pc = 0x1E15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15D0u;
        // 0x1e15d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15D8u;
        goto label_1e15d8;
    }
    ctx->pc = 0x1E15D0u;
    SET_GPR_U32(ctx, 31, 0x1E15D8u);
    ctx->pc = 0x1E15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15D0u;
    // 0x1e15d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E16E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E16E8u, 0x1E15D0u, 0x1E15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D8u;
label_1e15d8:
    // 0x1e15d8: 0x8e0403e4  lw          $a0, 0x3E4($s0)
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
label_1e15dc:
    // 0x1e15dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e15e0:
    // 0x1e15e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e15e4:
    // 0x1e15e4: 0x40f809  jalr        $v0
label_1e15e8:
    if (ctx->pc == 0x1E15E8u) {
        ctx->pc = 0x1E15ECu;
        goto label_1e15ec;
    }
    ctx->pc = 0x1E15E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E15ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E15E4u, 0x1E15ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E15ECu;
label_1e15ec:
    // 0x1e15ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e15ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e15f0:
    // 0x1e15f0: 0xc072a66  jal         func_1CA998
label_1e15f4:
    if (ctx->pc == 0x1E15F4u) {
        ctx->pc = 0x1E15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15F0u;
        // 0x1e15f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15F8u;
        goto label_1e15f8;
    }
    ctx->pc = 0x1E15F0u;
    SET_GPR_U32(ctx, 31, 0x1E15F8u);
    ctx->pc = 0x1E15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E15F0u;
    // 0x1e15f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA998u, 0x1E15F0u, 0x1E15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15F8u;
label_1e15f8:
    // 0x1e15f8: 0xae1103e8  sw          $s1, 0x3E8($s0)
    ctx->pc = 0x1e15f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 17));
label_1e15fc:
    // 0x1e15fc: 0xae0203c0  sw          $v0, 0x3C0($s0)
    ctx->pc = 0x1e15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 2));
label_1e1600:
    // 0x1e1600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1604:
    // 0x1e1604: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1e1604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
label_1e1608:
    // 0x1e1608: 0xc0784ac  jal         func_1E12B0
label_1e160c:
    if (ctx->pc == 0x1E160Cu) {
        ctx->pc = 0x1E160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1608u;
        // 0x1e160c: 0xae1203ec  sw          $s2, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1610u;
        goto label_1e1610;
    }
    ctx->pc = 0x1E1608u;
    SET_GPR_U32(ctx, 31, 0x1E1610u);
    ctx->pc = 0x1E160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1608u;
    // 0x1e160c: 0xae1203ec  sw          $s2, 0x3EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E12B0u, 0x1E1608u, 0x1E1610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1610u;
label_1e1610:
    // 0x1e1610: 0xc079e92  jal         func_1E7A48
label_1e1614:
    if (ctx->pc == 0x1E1614u) {
        ctx->pc = 0x1E1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1610u;
        // 0x1e1614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1618u;
        goto label_1e1618;
    }
    ctx->pc = 0x1E1610u;
    SET_GPR_U32(ctx, 31, 0x1E1618u);
    ctx->pc = 0x1E1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1610u;
    // 0x1e1614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7A48u, 0x1E1610u, 0x1E1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1618u;
label_1e1618:
    // 0x1e1618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e161c:
    // 0x1e161c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e161cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e1620:
    // 0x1e1620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1624:
    // 0x1e1624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e1624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1628:
    // 0x1e1628: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e1628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e162c:
    // 0x1e162c: 0x80774d6  j           func_1DD358
label_1e1630:
    if (ctx->pc == 0x1E1630u) {
        ctx->pc = 0x1E1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E162Cu;
        // 0x1e1630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1634u;
        goto label_1e1634;
    }
    ctx->pc = 0x1E162Cu;
    ctx->pc = 0x1E1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E162Cu;
    // 0x1e1630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD358u;
    sub_001DD358_0x1dd358(rdram, ctx, runtime); return;
    ctx->pc = 0x1E1634u;
label_1e1634:
    // 0x1e1634: 0x0  nop
    ctx->pc = 0x1e1634u;
    // NOP
    if (ctx->pc == 0x1e1634u) { ctx->pc = 0x1e1638u; }
}
