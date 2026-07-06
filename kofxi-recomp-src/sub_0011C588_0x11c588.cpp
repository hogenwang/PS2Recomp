#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C588
// Address: 0x11c588 - 0x11c658
void sub_0011C588_0x11c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C588_0x11c588");
#endif

    switch (ctx->pc) {
        case 0x11c5a8u: goto label_11c5a8;
        case 0x11c5bcu: goto label_11c5bc;
        case 0x11c5d4u: goto label_11c5d4;
        case 0x11c61cu: goto label_11c61c;
        case 0x11c638u: goto label_11c638;
        default: break;
    }

    ctx->pc = 0x11c588u;

    // 0x11c588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c58c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c590: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c598: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c59c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11c5a0: 0xc046e36  jal         func_11B8D8
    ctx->pc = 0x11C5A0u;
    SET_GPR_U32(ctx, 31, 0x11C5A8u);
    ctx->pc = 0x11C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5A0u;
            // 0x11c5a4: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B8D8u;
    if (runtime->hasFunction(0x11B8D8u)) {
        auto targetFn = runtime->lookupFunction(0x11B8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5A8u; }
        if (ctx->pc != 0x11C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B8D8_0x11b8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5A8u; }
        if (ctx->pc != 0x11C5A8u) { return; }
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c5ac: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x11C5ACu;
    {
        const bool branch_taken_0x11c5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5ACu;
            // 0x11c5b0: 0x26329ec0  addiu       $s2, $s1, -0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5ac) {
            ctx->pc = 0x11C638u;
            goto label_11c638;
        }
    }
    ctx->pc = 0x11C5B4u;
    // 0x11c5b4: 0xc046de0  jal         func_11B780
    ctx->pc = 0x11C5B4u;
    SET_GPR_U32(ctx, 31, 0x11C5BCu);
    ctx->pc = 0x11C5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5B4u;
            // 0x11c5b8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B780u;
    if (runtime->hasFunction(0x11B780u)) {
        auto targetFn = runtime->lookupFunction(0x11B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5BCu; }
        if (ctx->pc != 0x11C5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B780_0x11b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5BCu; }
        if (ctx->pc != 0x11C5BCu) { return; }
    }
    ctx->pc = 0x11C5BCu;
label_11c5bc:
    // 0x11c5bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11C5BCu;
    {
        const bool branch_taken_0x11c5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5BCu;
            // 0x11c5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5bc) {
            ctx->pc = 0x11C638u;
            goto label_11c638;
        }
    }
    ctx->pc = 0x11C5C4u;
    // 0x11c5c4: 0xae309ec0  sw          $s0, -0x6140($s1)
    ctx->pc = 0x11c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942400), GPR_U32(ctx, 16));
    // 0x11c5c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c5cc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C5CCu;
    SET_GPR_U32(ctx, 31, 0x11C5D4u);
    ctx->pc = 0x11C5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5CCu;
            // 0x11c5d0: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5D4u; }
        if (ctx->pc != 0x11C5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5D4u; }
        if (ctx->pc != 0x11C5D4u) { return; }
    }
    ctx->pc = 0x11C5D4u;
label_11c5d4:
    // 0x11c5d4: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11c5d8: 0x26059e20  addiu       $a1, $s0, -0x61E0
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942240));
    // 0x11c5dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c5e0: 0xae029e20  sw          $v0, -0x61E0($s0)
    ctx->pc = 0x11c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 2));
    // 0x11c5e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c5e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c5ec: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11c5ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11c5f0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x11c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x11c5f4: 0x2484af90  addiu       $a0, $a0, -0x5070
    ctx->pc = 0x11c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946704));
    // 0x11c5f8: 0xae239df4  sw          $v1, -0x620C($s1)
    ctx->pc = 0x11c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942196), GPR_U32(ctx, 3));
    // 0x11c5fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11c5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c600: 0x256baec0  addiu       $t3, $t3, -0x5140
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946496));
    // 0x11c604: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11c608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c60c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11c60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c610: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c610u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c614: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C614u;
    SET_GPR_U32(ctx, 31, 0x11C61Cu);
    ctx->pc = 0x11C618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C614u;
            // 0x11c618: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C61Cu; }
        if (ctx->pc != 0x11C61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C61Cu; }
        if (ctx->pc != 0x11C61Cu) { return; }
    }
    ctx->pc = 0x11C61Cu;
label_11c61c:
    // 0x11c61c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C61Cu;
    {
        const bool branch_taken_0x11c61c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c61c) {
            ctx->pc = 0x11C620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C61Cu;
            // 0x11c620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C63Cu;
            goto label_11c63c;
        }
    }
    ctx->pc = 0x11C624u;
    // 0x11c624: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11c624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
    // 0x11c628: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c62c: 0xae209df4  sw          $zero, -0x620C($s1)
    ctx->pc = 0x11c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942196), GPR_U32(ctx, 0));
    // 0x11c630: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C630u;
    SET_GPR_U32(ctx, 31, 0x11C638u);
    ctx->pc = 0x11C634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C630u;
            // 0x11c634: 0x8c449de8  lw          $a0, -0x6218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C638u; }
        if (ctx->pc != 0x11C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C638u; }
        if (ctx->pc != 0x11C638u) { return; }
    }
    ctx->pc = 0x11C638u;
label_11c638:
    // 0x11c638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11c638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c63c:
    // 0x11c63c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c640: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c644: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c648: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C64Cu;
            // 0x11c650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C654u;
    // 0x11c654: 0x0  nop
    ctx->pc = 0x11c654u;
    // NOP
    ctx->pc = 0x11c658u;
}
