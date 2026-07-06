#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1390
// Address: 0x1b1390 - 0x1b1480
void sub_001B1390_0x1b1390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1390_0x1b1390");
#endif

    switch (ctx->pc) {
        case 0x1b13f8u: goto label_1b13f8;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1454u: goto label_1b1454;
        case 0x1b145cu: goto label_1b145c;
        default: break;
    }

    ctx->pc = 0x1b1390u;

    // 0x1b1390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1394: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b1398: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x1b1398u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b139c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B139Cu;
    {
        const bool branch_taken_0x1b139c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B139Cu;
            // 0x1b13a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b139c) {
            ctx->pc = 0x1B13B0u;
            goto label_1b13b0;
        }
    }
    ctx->pc = 0x1B13A4u;
    // 0x1b13a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b13a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13A8u;
            // 0x1b13ac: 0x24847a90  addiu       $a0, $a0, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13F0u;
            goto label_1b13f0;
        }
    }
    ctx->pc = 0x1B13B0u;
label_1b13b0:
    // 0x1b13b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b13b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b13b8: 0x8c84fc98  lw          $a0, -0x368($a0)
    ctx->pc = 0x1b13b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966424)));
    // 0x1b13bc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13BCu;
    {
        const bool branch_taken_0x1b13bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b13bc) {
            ctx->pc = 0x1B13D0u;
            goto label_1b13d0;
        }
    }
    ctx->pc = 0x1B13C4u;
    // 0x1b13c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b13c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B13C8u;
    {
        const bool branch_taken_0x1b13c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13C8u;
            // 0x1b13cc: 0x24847a90  addiu       $a0, $a0, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c8) {
            ctx->pc = 0x1B13F0u;
            goto label_1b13f0;
        }
    }
    ctx->pc = 0x1B13D0u;
label_1b13d0:
    // 0x1b13d0: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B13D0u;
    {
        const bool branch_taken_0x1b13d0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1b13d0) {
            ctx->pc = 0x1B13D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13D0u;
            // 0x1b13d4: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B13ECu;
            goto label_1b13ec;
        }
    }
    ctx->pc = 0x1B13D8u;
    // 0x1b13d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b13dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b13e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B13E0u;
    {
        const bool branch_taken_0x1b13e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13E0u;
            // 0x1b13e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13e0) {
            ctx->pc = 0x1B13FCu;
            goto label_1b13fc;
        }
    }
    ctx->pc = 0x1B13E8u;
    // 0x1b13e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b13ec:
    // 0x1b13ec: 0x24847ab8  addiu       $a0, $a0, 0x7AB8
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31416));
label_1b13f0:
    // 0x1b13f0: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B13F0u;
    SET_GPR_U32(ctx, 31, 0x1B13F8u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13F8u; }
        if (ctx->pc != 0x1B13F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13F8u; }
        if (ctx->pc != 0x1B13F8u) { return; }
    }
    ctx->pc = 0x1B13F8u;
label_1b13f8:
    // 0x1b13f8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1b13fc:
    // 0x1b13fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1400: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1400u;
            // 0x1b1404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1408u;
label_1b1408:
    // 0x1b1408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b140c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b141c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b1420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1424: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b1428: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b142c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b1430: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b1430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b1434: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1434u;
    SET_GPR_U32(ctx, 31, 0x1B143Cu);
    ctx->pc = 0x1B1438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1434u;
            // 0x1b1438: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B143Cu; }
        if (ctx->pc != 0x1B143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B143Cu; }
        if (ctx->pc != 0x1B143Cu) { return; }
    }
    ctx->pc = 0x1B143Cu;
label_1b143c:
    // 0x1b143c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1444: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b1444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1448: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b1448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b144c: 0xc06c520  jal         func_1B1480
    ctx->pc = 0x1B144Cu;
    SET_GPR_U32(ctx, 31, 0x1B1454u);
    ctx->pc = 0x1B1450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B144Cu;
            // 0x1b1450: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1480u;
    if (runtime->hasFunction(0x1B1480u)) {
        auto targetFn = runtime->lookupFunction(0x1B1480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1454u; }
        if (ctx->pc != 0x1B1454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1480_0x1b1480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1454u; }
        if (ctx->pc != 0x1B1454u) { return; }
    }
    ctx->pc = 0x1B1454u;
label_1b1454:
    // 0x1b1454: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1454u;
    SET_GPR_U32(ctx, 31, 0x1B145Cu);
    ctx->pc = 0x1B1458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1454u;
            // 0x1b1458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B145Cu; }
        if (ctx->pc != 0x1B145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B145Cu; }
        if (ctx->pc != 0x1B145Cu) { return; }
    }
    ctx->pc = 0x1B145Cu;
label_1b145c:
    // 0x1b145c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b145cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b1464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b146c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b146cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b1470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b1470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1474: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b1474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b1478: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1478u;
            // 0x1b147c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1480u;
    ctx->pc = 0x1b1480u;
}
