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

// Function: sub_001B1540
// Address: 0x1b1540 - 0x1b16d0
void sub_001B1540_0x1b1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1540_0x1b1540");
#endif

    switch (ctx->pc) {
        case 0x1b158cu: goto label_1b158c;
        case 0x1b15e0u: goto label_1b15e0;
        case 0x1b15f0u: goto label_1b15f0;
        case 0x1b1600u: goto label_1b1600;
        case 0x1b1618u: goto label_1b1618;
        case 0x1b1638u: goto label_1b1638;
        case 0x1b167cu: goto label_1b167c;
        default: break;
    }

    ctx->pc = 0x1b1540u;

    // 0x1b1540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b1544: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1548: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b154c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1b1550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1554: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1b1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1b1558: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1b1558u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b155c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1b155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1b1560: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1b1560u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1564: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1b1564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1b1568: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b156c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b1570: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b1570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b1574: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1b1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1b1578: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1b157c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1b157cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1b1580: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1b1580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1b1584: 0xc06c4e4  jal         func_1B1390
    ctx->pc = 0x1B1584u;
    SET_GPR_U32(ctx, 31, 0x1B158Cu);
    ctx->pc = 0x1B1588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1584u;
    // 0x1b1588: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1390u, 0x1B1584u, 0x1B158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B158Cu;
label_1b158c:
    // 0x1b158c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1b158cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1590: 0x7c30009  bgezl       $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1590u;
    {
        const bool branch_taken_0x1b1590 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x1b1590) {
            ctx->pc = 0x1B1594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1590u;
            // 0x1b1594: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15B8u;
            goto label_1b15b8;
        }
    }
    ctx->pc = 0x1B1598u;
    // 0x1b1598: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b1598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b159c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b15a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b15a4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b15a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b15a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b15ac: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1b15acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1b15b0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1B15B0u;
    {
        const bool branch_taken_0x1b15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15B0u;
        // 0x1b15b4: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15b0) {
            ctx->pc = 0x1B169Cu;
            goto label_1b169c;
        }
    }
    ctx->pc = 0x1B15B8u;
label_1b15b8:
    // 0x1b15b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b15bc: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
    // 0x1b15c0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b15c4: 0x8e73fc98  lw          $s3, -0x368($s3)
    ctx->pc = 0x1b15c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966424)));
    // 0x1b15c8: 0x8263000f  lb          $v1, 0xF($s3)
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x1b15cc: 0x54640016  bnel        $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B15CCu;
    {
        const bool branch_taken_0x1b15cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b15cc) {
            ctx->pc = 0x1B15D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15CCu;
            // 0x1b15d0: 0x96720118  lhu         $s2, 0x118($s3) (Delay Slot)
            SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1628u;
            goto label_1b1628;
        }
    }
    ctx->pc = 0x1B15D4u;
    // 0x1b15d4: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x1b15d8: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B15D8u;
    SET_GPR_U32(ctx, 31, 0x1B15E0u);
    ctx->pc = 0x1B15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15D8u;
    // 0x1b15dc: 0x2675011c  addiu       $s5, $s3, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B15D8u, 0x1B15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B15E0u;
label_1b15e0:
    // 0x1b15e0: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B15E0u;
    {
        const bool branch_taken_0x1b15e0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1B15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B15E0u;
        // 0x1b15e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15e0) {
            ctx->pc = 0x1B1608u;
            goto label_1b1608;
        }
    }
    ctx->pc = 0x1B15E8u;
    // 0x1b15e8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1b15e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15ec: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b15ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b15f0:
    // 0x1b15f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b15f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b15f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b15f8: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B15F8u;
    SET_GPR_U32(ctx, 31, 0x1B1600u);
    ctx->pc = 0x1B15FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B15F8u;
    // 0x1b15fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B15F8u, 0x1B1600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1600u;
label_1b1600:
    // 0x1b1600: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1600u;
    {
        const bool branch_taken_0x1b1600 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1600u;
        // 0x1b1604: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1600) {
            ctx->pc = 0x1B15F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b15f0;
        }
    }
    ctx->pc = 0x1B1608u;
label_1b1608:
    // 0x1b1608: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x1b1608u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1b160c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1b1610: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B1610u;
    SET_GPR_U32(ctx, 31, 0x1B1618u);
    ctx->pc = 0x1B1614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1610u;
    // 0x1b1614: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B1610u, 0x1B1618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1618u;
label_1b1618:
    // 0x1b1618: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1b1618u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1b161c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1620: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1620u;
    {
        const bool branch_taken_0x1b1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1620u;
        // 0x1b1624: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1620) {
            ctx->pc = 0x1B166Cu;
            goto label_1b166c;
        }
    }
    ctx->pc = 0x1B1628u;
label_1b1628:
    // 0x1b1628: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1628u;
    {
        const bool branch_taken_0x1b1628 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1B162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1628u;
        // 0x1b162c: 0x2665011a  addiu       $a1, $s3, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1628) {
            ctx->pc = 0x1B1654u;
            goto label_1b1654;
        }
    }
    ctx->pc = 0x1B1630u;
    // 0x1b1630: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b1630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1634: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b1634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b1638:
    // 0x1b1638: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1b1638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b163c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1b1640: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1b1644: 0x0  nop
    ctx->pc = 0x1b1644u;
    // NOP
    // 0x1b1648: 0x0  nop
    ctx->pc = 0x1b1648u;
    // NOP
    // 0x1b164c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B164Cu;
    {
        const bool branch_taken_0x1b164c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B164Cu;
        // 0x1b1650: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b164c) {
            ctx->pc = 0x1B1638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1638;
        }
    }
    ctx->pc = 0x1B1654u;
label_1b1654:
    // 0x1b1654: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1b1658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b165c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b165cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1660: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x1b1664: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1b1664u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1b1668: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x1b1668u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_1b166c:
    // 0x1b166c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1670: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b1674: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1B1674u;
    SET_GPR_U32(ctx, 31, 0x1B167Cu);
    ctx->pc = 0x1B1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1674u;
    // 0x1b1678: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1B1674u, 0x1B167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B167Cu;
label_1b167c:
    // 0x1b167c: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x1b167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x1b1680: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b1680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b1684: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1b1684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1688: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1b1688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x1b168c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1b168cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1b1690: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b1690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b1694: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1b1694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b1698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1b169c:
    // 0x1b169c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b169cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b16a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b16a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b16a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b16a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b16a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b16a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b16ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b16acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b16b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1b16b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b16b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1b16b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b16b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1b16b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b16bc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1b16bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b16c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b16c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b16c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B16C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B16C4u;
        // 0x1b16c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B16C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B16CCu;
    // 0x1b16cc: 0x0  nop
    ctx->pc = 0x1b16ccu;
    // NOP
}
