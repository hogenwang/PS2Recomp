#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1588
// Address: 0x2d1588 - 0x2d16e0
void sub_002D1588_0x2d1588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1588_0x2d1588");
#endif

    switch (ctx->pc) {
        case 0x2d15c8u: goto label_2d15c8;
        case 0x2d15e4u: goto label_2d15e4;
        case 0x2d15e8u: goto label_2d15e8;
        case 0x2d1600u: goto label_2d1600;
        case 0x2d1664u: goto label_2d1664;
        case 0x2d1670u: goto label_2d1670;
        case 0x2d169cu: goto label_2d169c;
        case 0x2d16a0u: goto label_2d16a0;
        case 0x2d16d4u: goto label_2d16d4;
        case 0x2d16d8u: goto label_2d16d8;
        default: break;
    }

    ctx->pc = 0x2d1588u;

    // 0x2d1588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d1588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d158c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d1590: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d1590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1594: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1598: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d159c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d15a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d15a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d15a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d15a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d15a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15ac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d15acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d15b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d15b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15b4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d15b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d15b8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2d15b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d15bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d15c0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2D15C0u;
    {
        const bool branch_taken_0x2d15c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D15C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15C0u;
            // 0x2d15c4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15c0) {
            ctx->pc = 0x2D1650u;
            goto label_2d1650;
        }
    }
    ctx->pc = 0x2D15C8u;
label_2d15c8:
    // 0x2d15c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d15c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d15cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d15ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d15d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d15d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2d15d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d15dc: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D15DCu;
    SET_GPR_U32(ctx, 31, 0x2D15E4u);
    ctx->pc = 0x2D15E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15DCu;
            // 0x2d15e0: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15E4u; }
        if (ctx->pc != 0x2D15E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D15E4u; }
        if (ctx->pc != 0x2D15E4u) { return; }
    }
    ctx->pc = 0x2D15E4u;
label_2d15e4:
    // 0x2d15e4: 0x0  nop
    ctx->pc = 0x2d15e4u;
    // NOP
label_2d15e8:
    // 0x2d15e8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2d15e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d15ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d15f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d15f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15f8: 0xc0b45c8  jal         func_2D1720
    ctx->pc = 0x2D15F8u;
    SET_GPR_U32(ctx, 31, 0x2D1600u);
    ctx->pc = 0x2D15FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D15F8u;
            // 0x2d15fc: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1720u;
    if (runtime->hasFunction(0x2D1720u)) {
        auto targetFn = runtime->lookupFunction(0x2D1720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1600u; }
        if (ctx->pc != 0x2D1600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1720_0x2d1720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1600u; }
        if (ctx->pc != 0x2D1600u) { return; }
    }
    ctx->pc = 0x2D1600u;
label_2d1600:
    // 0x2d1600: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d1604: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d1604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1608: 0x14c00029  bnez        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D1608u;
    {
        const bool branch_taken_0x2d1608 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1608u;
            // 0x2d160c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1608) {
            ctx->pc = 0x2D16B0u;
            goto label_2d16b0;
        }
    }
    ctx->pc = 0x2D1610u;
    // 0x2d1610: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1614: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d1614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1618: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d1618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d161c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d161cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d1620: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d1624: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1628: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d1628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d162c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d1630: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2d1630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2d1634: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d1634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d1638: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2d1638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d163c: 0x601ffea  bgez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D163Cu;
    {
        const bool branch_taken_0x2d163c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2D1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D163Cu;
            // 0x2d1640: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d163c) {
            ctx->pc = 0x2D15E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d15e8;
        }
    }
    ctx->pc = 0x2D1644u;
    // 0x2d1644: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1644u;
    {
        const bool branch_taken_0x2d1644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1644u;
            // 0x2d1648: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1644) {
            ctx->pc = 0x2D16B4u;
            goto label_2d16b4;
        }
    }
    ctx->pc = 0x2D164Cu;
    // 0x2d164c: 0x0  nop
    ctx->pc = 0x2d164cu;
    // NOP
label_2d1650:
    // 0x2d1650: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d1650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d1654: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D1654u;
    {
        const bool branch_taken_0x2d1654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1654u;
            // 0x2d1658: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1654) {
            ctx->pc = 0x2D16B0u;
            goto label_2d16b0;
        }
    }
    ctx->pc = 0x2D165Cu;
    // 0x2d165c: 0xc0b4092  jal         func_2D0248
    ctx->pc = 0x2D165Cu;
    SET_GPR_U32(ctx, 31, 0x2D1664u);
    ctx->pc = 0x2D1660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D165Cu;
            // 0x2d1660: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0248u;
    if (runtime->hasFunction(0x2D0248u)) {
        auto targetFn = runtime->lookupFunction(0x2D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1664u; }
        if (ctx->pc != 0x2D1664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0248_0x2d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1664u; }
        if (ctx->pc != 0x2D1664u) { return; }
    }
    ctx->pc = 0x2D1664u;
label_2d1664:
    // 0x2d1664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1668: 0xc0b45b8  jal         func_2D16E0
    ctx->pc = 0x2D1668u;
    SET_GPR_U32(ctx, 31, 0x2D1670u);
    ctx->pc = 0x2D166Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1668u;
            // 0x2d166c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D16E0u;
    if (runtime->hasFunction(0x2D16E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D16E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1670u; }
        if (ctx->pc != 0x2D1670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D16E0_0x2d16e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1670u; }
        if (ctx->pc != 0x2D1670u) { return; }
    }
    ctx->pc = 0x2D1670u;
label_2d1670:
    // 0x2d1670: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x2d1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d1674: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2d1674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2d1678: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x2d1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x2d167c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D167Cu;
    {
        const bool branch_taken_0x2d167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d167c) {
            ctx->pc = 0x2D1680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D167Cu;
            // 0x2d1680: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1684u;
            goto label_2d1684;
        }
    }
    ctx->pc = 0x2D1684u;
label_2d1684:
    // 0x2d1684: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2d1684u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d1688: 0x2012  mflo        $a0
    ctx->pc = 0x2d1688u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2d168c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d1690: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2d1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2d1694: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2d1694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2d1698: 0xc0b60b8  jal         func_2D82E0
label_2d169c:
    if (ctx->pc == 0x2D169Cu) {
        ctx->pc = 0x2D169Cu;
            // 0x2d169c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x2D16A0u;
        goto label_2d16a0;
    }
    ctx->pc = 0x2D1698u;
    SET_GPR_U32(ctx, 31, 0x2D16A0u);
    ctx->pc = 0x2D169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1698u;
            // 0x2d169c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16A0u; }
        if (ctx->pc != 0x2D16A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D16A0u; }
        if (ctx->pc != 0x2D16A0u) { return; }
    }
    ctx->pc = 0x2D16A0u;
label_2d16a0:
    // 0x2d16a0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2D16A0u;
    {
        const bool branch_taken_0x2d16a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D16A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16A0u;
            // 0x2d16a4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16a0) {
            ctx->pc = 0x2D15C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d15c8;
        }
    }
    ctx->pc = 0x2D16A8u;
    // 0x2d16a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d16a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2d16ac: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2d16acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d16b0:
    // 0x2d16b0: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x2d16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_2d16b4:
    // 0x2d16b4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d16b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d16b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d16bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d16c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d16c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d16c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d16c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d16c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d16c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d16cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d16ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d16d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d16d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d16d4:
    // 0x2d16d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d16d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d16d8:
    // 0x2d16d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D16DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D16D8u;
            // 0x2d16dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D16E0u;
    ctx->pc = 0x2d16e0u;
}
