#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1410
// Address: 0x2b1410 - 0x2b14b0
void sub_002B1410_0x2b1410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1410_0x2b1410");
#endif

    switch (ctx->pc) {
        case 0x2b1410u: goto label_2b1410;
        case 0x2b1414u: goto label_2b1414;
        case 0x2b1418u: goto label_2b1418;
        case 0x2b141cu: goto label_2b141c;
        case 0x2b1420u: goto label_2b1420;
        case 0x2b1424u: goto label_2b1424;
        case 0x2b1428u: goto label_2b1428;
        case 0x2b142cu: goto label_2b142c;
        case 0x2b1430u: goto label_2b1430;
        case 0x2b1434u: goto label_2b1434;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b143cu: goto label_2b143c;
        case 0x2b1440u: goto label_2b1440;
        case 0x2b1444u: goto label_2b1444;
        case 0x2b1448u: goto label_2b1448;
        case 0x2b144cu: goto label_2b144c;
        case 0x2b1450u: goto label_2b1450;
        case 0x2b1454u: goto label_2b1454;
        case 0x2b1458u: goto label_2b1458;
        case 0x2b145cu: goto label_2b145c;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b1464u: goto label_2b1464;
        case 0x2b1468u: goto label_2b1468;
        case 0x2b146cu: goto label_2b146c;
        case 0x2b1470u: goto label_2b1470;
        case 0x2b1474u: goto label_2b1474;
        case 0x2b1478u: goto label_2b1478;
        case 0x2b147cu: goto label_2b147c;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b1484u: goto label_2b1484;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b148cu: goto label_2b148c;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b1494u: goto label_2b1494;
        case 0x2b1498u: goto label_2b1498;
        case 0x2b149cu: goto label_2b149c;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14a4u: goto label_2b14a4;
        case 0x2b14a8u: goto label_2b14a8;
        case 0x2b14acu: goto label_2b14ac;
        default: break;
    }

    ctx->pc = 0x2b1410u;

label_2b1410:
    // 0x2b1410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1414:
    // 0x2b1414: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b1418:
    // 0x2b1418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b141c:
    // 0x2b141c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b1420:
    // 0x2b1420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1424:
    // 0x2b1424: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b1428:
    // 0x2b1428: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b142c:
    if (ctx->pc == 0x2B142Cu) {
        ctx->pc = 0x2B142Cu;
            // 0x2b142c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B1430u;
        goto label_2b1430;
    }
    ctx->pc = 0x2B1428u;
    {
        const bool branch_taken_0x2b1428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B142Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1428u;
            // 0x2b142c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1428) {
            ctx->pc = 0x2B1450u;
            goto label_2b1450;
        }
    }
    ctx->pc = 0x2B1430u;
label_2b1430:
    // 0x2b1430: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b1434:
    // 0x2b1434: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x2b1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2b1438:
    // 0x2b1438: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x2b1438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2b143c:
    // 0x2b143c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b143cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1440:
    // 0x2b1440: 0xc0a5648  jal         func_295920
label_2b1444:
    if (ctx->pc == 0x2B1444u) {
        ctx->pc = 0x2B1444u;
            // 0x2b1444: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1448u;
        goto label_2b1448;
    }
    ctx->pc = 0x2B1440u;
    SET_GPR_U32(ctx, 31, 0x2B1448u);
    ctx->pc = 0x2B1444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1440u;
            // 0x2b1444: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1448u; }
        if (ctx->pc != 0x2B1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1448u; }
        if (ctx->pc != 0x2B1448u) { return; }
    }
    ctx->pc = 0x2B1448u;
label_2b1448:
    // 0x2b1448: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b144c:
    if (ctx->pc == 0x2B144Cu) {
        ctx->pc = 0x2B144Cu;
            // 0x2b144c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B1450u;
        goto label_2b1450;
    }
    ctx->pc = 0x2B1448u;
    {
        const bool branch_taken_0x2b1448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B144Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1448u;
            // 0x2b144c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1448) {
            ctx->pc = 0x2B149Cu;
            goto label_2b149c;
        }
    }
    ctx->pc = 0x2B1450u;
label_2b1450:
    // 0x2b1450: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b1454:
    // 0x2b1454: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b1458:
    // 0x2b1458: 0x40f809  jalr        $v0
label_2b145c:
    if (ctx->pc == 0x2B145Cu) {
        ctx->pc = 0x2B145Cu;
            // 0x2b145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1460u;
        goto label_2b1460;
    }
    ctx->pc = 0x2B1458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1460u);
        ctx->pc = 0x2B145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1458u;
            // 0x2b145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B1460u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B1460u; }
            if (ctx->pc != 0x2B1460u) { return; }
        }
        }
    }
    ctx->pc = 0x2B1460u;
label_2b1460:
    // 0x2b1460: 0xc0ac604  jal         func_2B1810
label_2b1464:
    if (ctx->pc == 0x2B1464u) {
        ctx->pc = 0x2B1464u;
            // 0x2b1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1468u;
        goto label_2b1468;
    }
    ctx->pc = 0x2B1460u;
    SET_GPR_U32(ctx, 31, 0x2B1468u);
    ctx->pc = 0x2B1464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1460u;
            // 0x2b1464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1468u; }
        if (ctx->pc != 0x2B1468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1468u; }
        if (ctx->pc != 0x2B1468u) { return; }
    }
    ctx->pc = 0x2B1468u;
label_2b1468:
    // 0x2b1468: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2b1468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2b146c:
    // 0x2b146c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2b1470:
    if (ctx->pc == 0x2B1470u) {
        ctx->pc = 0x2B1470u;
            // 0x2b1470: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x2B1474u;
        goto label_2b1474;
    }
    ctx->pc = 0x2B146Cu;
    {
        const bool branch_taken_0x2b146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b146c) {
            ctx->pc = 0x2B1470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B146Cu;
            // 0x2b1470: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B148Cu;
            goto label_2b148c;
        }
    }
    ctx->pc = 0x2B1474u;
label_2b1474:
    // 0x2b1474: 0xc0ac604  jal         func_2B1810
label_2b1478:
    if (ctx->pc == 0x2B1478u) {
        ctx->pc = 0x2B1478u;
            // 0x2b1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B147Cu;
        goto label_2b147c;
    }
    ctx->pc = 0x2B1474u;
    SET_GPR_U32(ctx, 31, 0x2B147Cu);
    ctx->pc = 0x2B1478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1474u;
            // 0x2b1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B147Cu; }
        if (ctx->pc != 0x2B147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B147Cu; }
        if (ctx->pc != 0x2B147Cu) { return; }
    }
    ctx->pc = 0x2B147Cu;
label_2b147c:
    // 0x2b147c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2b147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2b1480:
    // 0x2b1480: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b1484:
    if (ctx->pc == 0x2B1484u) {
        ctx->pc = 0x2B1484u;
            // 0x2b1484: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1488u;
        goto label_2b1488;
    }
    ctx->pc = 0x2B1480u;
    {
        const bool branch_taken_0x2b1480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1480u;
            // 0x2b1484: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1480) {
            ctx->pc = 0x2B149Cu;
            goto label_2b149c;
        }
    }
    ctx->pc = 0x2B1488u;
label_2b1488:
    // 0x2b1488: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b148c:
    // 0x2b148c: 0x40f809  jalr        $v0
label_2b1490:
    if (ctx->pc == 0x2B1490u) {
        ctx->pc = 0x2B1490u;
            // 0x2b1490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1494u;
        goto label_2b1494;
    }
    ctx->pc = 0x2B148Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B1494u);
        ctx->pc = 0x2B1490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B148Cu;
            // 0x2b1490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B1494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B1494u; }
            if (ctx->pc != 0x2B1494u) { return; }
        }
        }
    }
    ctx->pc = 0x2B1494u;
label_2b1494:
    // 0x2b1494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b1494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1498:
    // 0x2b1498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b1498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b149c:
    // 0x2b149c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b14a0:
    // 0x2b14a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b14a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b14a4:
    // 0x2b14a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b14a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b14a8:
    // 0x2b14a8: 0x3e00008  jr          $ra
label_2b14ac:
    if (ctx->pc == 0x2B14ACu) {
        ctx->pc = 0x2B14ACu;
            // 0x2b14ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B14B0u;
        goto label_fallthrough_0x2b14a8;
    }
    ctx->pc = 0x2B14A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B14A8u;
            // 0x2b14ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b14a8:
    ctx->pc = 0x2B14B0u;
    ctx->pc = 0x2b14b0u;
}
