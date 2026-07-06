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

// Function: sub_002D13F0
// Address: 0x2d13f0 - 0x2d1588
void sub_002D13F0_0x2d13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D13F0_0x2d13f0");
#endif

    switch (ctx->pc) {
        case 0x2d14b0u: goto label_2d14b0;
        case 0x2d14bcu: goto label_2d14bc;
        case 0x2d14c8u: goto label_2d14c8;
        case 0x2d14d0u: goto label_2d14d0;
        case 0x2d14e4u: goto label_2d14e4;
        case 0x2d1504u: goto label_2d1504;
        case 0x2d1518u: goto label_2d1518;
        case 0x2d1534u: goto label_2d1534;
        case 0x2d1554u: goto label_2d1554;
        case 0x2d155cu: goto label_2d155c;
        default: break;
    }

    ctx->pc = 0x2d13f0u;

    // 0x2d13f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d13f4: 0x29080002  slti        $t0, $t0, 0x2
    ctx->pc = 0x2d13f4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d13f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d13f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d13fc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2d13fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1400: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2d1400u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1404: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1404u;
    {
        const bool branch_taken_0x2d1404 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1404u;
        // 0x2d1408: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1404) {
            ctx->pc = 0x2D1440u;
            goto label_2d1440;
        }
    }
    ctx->pc = 0x2D140Cu;
    // 0x2d140c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2d140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d1410: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d1410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1414: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D1414u;
    {
        const bool branch_taken_0x2d1414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1414u;
        // 0x2d1418: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1414) {
            ctx->pc = 0x2D1430u;
            goto label_2d1430;
        }
    }
    ctx->pc = 0x2D141Cu;
    // 0x2d141c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2d141cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1424: 0x80b422e  j           func_2D08B8
    ctx->pc = 0x2D1424u;
    ctx->pc = 0x2D1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1424u;
    // 0x2d1428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D08B8u;
    sub_002D08B8_0x2d08b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D142Cu;
    // 0x2d142c: 0x0  nop
    ctx->pc = 0x2d142cu;
    // NOP
label_2d1430:
    // 0x2d1430: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2d1430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1434: 0x80b3efe  j           func_2CFBF8
    ctx->pc = 0x2D1434u;
    ctx->pc = 0x2D1438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1434u;
    // 0x2d1438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2D143Cu;
    // 0x2d143c: 0x0  nop
    ctx->pc = 0x2d143cu;
    // NOP
label_2d1440:
    // 0x2d1440: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d1444: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d1444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1448: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d1448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d144c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D144Cu;
    {
        const bool branch_taken_0x2d144c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D1450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D144Cu;
        // 0x2d1450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d144c) {
            ctx->pc = 0x2D1468u;
            goto label_2d1468;
        }
    }
    ctx->pc = 0x2D1454u;
    // 0x2d1454: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2d1454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1458: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2d1458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d145c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2d145cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1460: 0x80b451e  j           func_2D1478
    ctx->pc = 0x2D1460u;
    ctx->pc = 0x2D1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1460u;
    // 0x2d1464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1478u;
    goto label_2d1478;
    ctx->pc = 0x2D1468u;
label_2d1468:
    // 0x2d1468: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2d1468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d146c: 0x80b474e  j           func_2D1D38
    ctx->pc = 0x2D146Cu;
    ctx->pc = 0x2D1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D146Cu;
    // 0x2d1470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D38u, 0x2D146Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D1474u;
    // 0x2d1474: 0x0  nop
    ctx->pc = 0x2d1474u;
    // NOP
label_2d1478:
    // 0x2d1478: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d147c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d1480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1484: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1488: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d1488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d148c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d1490: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1494: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d1498: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d1498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d149c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d14a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d14a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d14a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d14a8: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D14A8u;
    SET_GPR_U32(ctx, 31, 0x2D14B0u);
    ctx->pc = 0x2D14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14A8u;
    // 0x2d14ac: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D14A8u, 0x2D14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14B0u;
label_2d14b0:
    // 0x2d14b0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2d14b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d14b4: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D14B4u;
    SET_GPR_U32(ctx, 31, 0x2D14BCu);
    ctx->pc = 0x2D14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14B4u;
    // 0x2d14b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D14B4u, 0x2D14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14BCu;
label_2d14bc:
    // 0x2d14bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D14BCu;
    {
        const bool branch_taken_0x2d14bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14BCu;
        // 0x2d14c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14bc) {
            ctx->pc = 0x2D14D8u;
            goto label_2d14d8;
        }
    }
    ctx->pc = 0x2D14C4u;
    // 0x2d14c4: 0x0  nop
    ctx->pc = 0x2d14c4u;
    // NOP
label_2d14c8:
    // 0x2d14c8: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D14C8u;
    SET_GPR_U32(ctx, 31, 0x2D14D0u);
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D14C8u, 0x2D14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14D0u;
label_2d14d0:
    // 0x2d14d0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D14D0u;
    {
        const bool branch_taken_0x2d14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14D0u;
        // 0x2d14d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14d0) {
            ctx->pc = 0x2D154Cu;
            goto label_2d154c;
        }
    }
    ctx->pc = 0x2D14D8u;
label_2d14d8:
    // 0x2d14d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d14d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14dc: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D14DCu;
    SET_GPR_U32(ctx, 31, 0x2D14E4u);
    ctx->pc = 0x2D14E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14DCu;
    // 0x2d14e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D14DCu, 0x2D14E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14E4u;
label_2d14e4:
    // 0x2d14e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d14e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d14e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d14ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d14f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14f4: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D14F4u;
    {
        const bool branch_taken_0x2d14f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14F4u;
        // 0x2d14f8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14f4) {
            ctx->pc = 0x2D154Cu;
            goto label_2d154c;
        }
    }
    ctx->pc = 0x2D14FCu;
    // 0x2d14fc: 0xc0b49a2  jal         func_2D2688
    ctx->pc = 0x2D14FCu;
    SET_GPR_U32(ctx, 31, 0x2D1504u);
    ctx->pc = 0x2D2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2688u, 0x2D14FCu, 0x2D1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1504u;
label_2d1504:
    // 0x2d1504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1508: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D1508u;
    {
        const bool branch_taken_0x2d1508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1508u;
        // 0x2d150c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1508) {
            ctx->pc = 0x2D154Cu;
            goto label_2d154c;
        }
    }
    ctx->pc = 0x2D1510u;
    // 0x2d1510: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D1510u;
    SET_GPR_U32(ctx, 31, 0x2D1518u);
    ctx->pc = 0x2D85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85E0u, 0x2D1510u, 0x2D1518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1518u;
label_2d1518:
    // 0x2d1518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d151c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d151cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1524: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1524u;
    {
        const bool branch_taken_0x2d1524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1524u;
        // 0x2d1528: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1524) {
            ctx->pc = 0x2D154Cu;
            goto label_2d154c;
        }
    }
    ctx->pc = 0x2D152Cu;
    // 0x2d152c: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D152Cu;
    SET_GPR_U32(ctx, 31, 0x2D1534u);
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D152Cu, 0x2D1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1534u;
label_2d1534:
    // 0x2d1534: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d1534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d153c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1540: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d1540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1544: 0x1200ffe0  beqz        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D1544u;
    {
        const bool branch_taken_0x2d1544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1544u;
        // 0x2d1548: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1544) {
            ctx->pc = 0x2D14C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d14c8;
        }
    }
    ctx->pc = 0x2D154Cu;
label_2d154c:
    // 0x2d154c: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D154Cu;
    SET_GPR_U32(ctx, 31, 0x2D1554u);
    ctx->pc = 0x2D1550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D154Cu;
    // 0x2d1550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D154Cu, 0x2D1554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1554u;
label_2d1554:
    // 0x2d1554: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1554u;
    SET_GPR_U32(ctx, 31, 0x2D155Cu);
    ctx->pc = 0x2D1558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1554u;
    // 0x2d1558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1554u, 0x2D155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D155Cu;
label_2d155c:
    // 0x2d155c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d155cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1560: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d1560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1564: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d1564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1568: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d156c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1570: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d1570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1574: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d1574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d1578: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d1578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d157c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D157Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D157Cu;
        // 0x2d1580: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D157Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1584u;
    // 0x2d1584: 0x0  nop
    ctx->pc = 0x2d1584u;
    // NOP
}
