#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116778
// Address: 0x116778 - 0x116860
void sub_00116778_0x116778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116778_0x116778");
#endif

    switch (ctx->pc) {
        case 0x1167a8u: goto label_1167a8;
        case 0x1167c0u: goto label_1167c0;
        case 0x1167c8u: goto label_1167c8;
        case 0x1167d0u: goto label_1167d0;
        case 0x1167dcu: goto label_1167dc;
        case 0x1167e8u: goto label_1167e8;
        case 0x1167f0u: goto label_1167f0;
        case 0x1167f8u: goto label_1167f8;
        case 0x116808u: goto label_116808;
        case 0x11681cu: goto label_11681c;
        case 0x116840u: goto label_116840;
        case 0x116850u: goto label_116850;
        default: break;
    }

    ctx->pc = 0x116778u;

    // 0x116778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11677c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x116780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116784: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116788: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x116788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11678c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116790: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116794: 0x24508ae8  addiu       $s0, $v0, -0x7518
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937320));
    // 0x116798: 0x8c448ae8  lw          $a0, -0x7518($v0)
    ctx->pc = 0x116798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937320)));
    // 0x11679c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x11679cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1167a0: 0xc0459da  jal         func_116768
    ctx->pc = 0x1167A0u;
    SET_GPR_U32(ctx, 31, 0x1167A8u);
    ctx->pc = 0x1167A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167A0u;
            // 0x1167a4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116768u;
    if (runtime->hasFunction(0x116768u)) {
        auto targetFn = runtime->lookupFunction(0x116768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167A8u; }
        if (ctx->pc != 0x1167A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116768_0x116768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167A8u; }
        if (ctx->pc != 0x1167A8u) { return; }
    }
    ctx->pc = 0x1167A8u;
label_1167a8:
    // 0x1167a8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1167a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1167ac: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1167b0: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1167b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x1167b4: 0x24a58768  addiu       $a1, $a1, -0x7898
    ctx->pc = 0x1167b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936424));
    // 0x1167b8: 0xc0459c4  jal         func_116710
    ctx->pc = 0x1167B8u;
    SET_GPR_U32(ctx, 31, 0x1167C0u);
    ctx->pc = 0x1167BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167B8u;
            // 0x1167bc: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x116710u;
    if (runtime->hasFunction(0x116710u)) {
        auto targetFn = runtime->lookupFunction(0x116710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167C0u; }
        if (ctx->pc != 0x1167C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116710_0x116710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167C0u; }
        if (ctx->pc != 0x1167C0u) { return; }
    }
    ctx->pc = 0x1167C0u;
label_1167c0:
    // 0x1167c0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1167C0u;
    SET_GPR_U32(ctx, 31, 0x1167C8u);
    ctx->pc = 0x1167C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167C0u;
            // 0x1167c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167C8u; }
        if (ctx->pc != 0x1167C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167C8u; }
        if (ctx->pc != 0x1167C8u) { return; }
    }
    ctx->pc = 0x1167C8u;
label_1167c8:
    // 0x1167c8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1167C8u;
    SET_GPR_U32(ctx, 31, 0x1167D0u);
    ctx->pc = 0x1167CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167C8u;
            // 0x1167cc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167D0u; }
        if (ctx->pc != 0x1167D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167D0u; }
        if (ctx->pc != 0x1167D0u) { return; }
    }
    ctx->pc = 0x1167D0u;
label_1167d0:
    // 0x1167d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1167d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1167d4: 0xc0459da  jal         func_116768
    ctx->pc = 0x1167D4u;
    SET_GPR_U32(ctx, 31, 0x1167DCu);
    ctx->pc = 0x1167D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167D4u;
            // 0x1167d8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116768u;
    if (runtime->hasFunction(0x116768u)) {
        auto targetFn = runtime->lookupFunction(0x116768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167DCu; }
        if (ctx->pc != 0x1167DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116768_0x116768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167DCu; }
        if (ctx->pc != 0x1167DCu) { return; }
    }
    ctx->pc = 0x1167DCu;
label_1167dc:
    // 0x1167dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1167dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1167e0: 0xc0459da  jal         func_116768
    ctx->pc = 0x1167E0u;
    SET_GPR_U32(ctx, 31, 0x1167E8u);
    ctx->pc = 0x1167E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167E0u;
            // 0x1167e4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116768u;
    if (runtime->hasFunction(0x116768u)) {
        auto targetFn = runtime->lookupFunction(0x116768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167E8u; }
        if (ctx->pc != 0x1167E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116768_0x116768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167E8u; }
        if (ctx->pc != 0x1167E8u) { return; }
    }
    ctx->pc = 0x1167E8u;
label_1167e8:
    // 0x1167e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1167e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1167ec: 0x0  nop
    ctx->pc = 0x1167ecu;
    // NOP
label_1167f0:
    // 0x1167f0: 0xc0459d6  jal         func_116758
    ctx->pc = 0x1167F0u;
    SET_GPR_U32(ctx, 31, 0x1167F8u);
    ctx->pc = 0x1167F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1167F0u;
            // 0x1167f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116758u;
    if (runtime->hasFunction(0x116758u)) {
        auto targetFn = runtime->lookupFunction(0x116758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167F8u; }
        if (ctx->pc != 0x1167F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116758_0x116758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1167F8u; }
        if (ctx->pc != 0x1167F8u) { return; }
    }
    ctx->pc = 0x1167F8u;
label_1167f8:
    // 0x1167f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1167f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1167fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1167fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116800: 0xc0459da  jal         func_116768
    ctx->pc = 0x116800u;
    SET_GPR_U32(ctx, 31, 0x116808u);
    ctx->pc = 0x116804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116800u;
            // 0x116804: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116768u;
    if (runtime->hasFunction(0x116768u)) {
        auto targetFn = runtime->lookupFunction(0x116768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116808u; }
        if (ctx->pc != 0x116808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116768_0x116768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116808u; }
        if (ctx->pc != 0x116808u) { return; }
    }
    ctx->pc = 0x116808u;
label_116808:
    // 0x116808: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x116808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11680c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11680Cu;
    {
        const bool branch_taken_0x11680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11680c) {
            ctx->pc = 0x116810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11680Cu;
            // 0x116810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1167F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1167f0;
        }
    }
    ctx->pc = 0x116814u;
    // 0x116814: 0xc0459d6  jal         func_116758
    ctx->pc = 0x116814u;
    SET_GPR_U32(ctx, 31, 0x11681Cu);
    ctx->pc = 0x116818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116814u;
            // 0x116818: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116758u;
    if (runtime->hasFunction(0x116758u)) {
        auto targetFn = runtime->lookupFunction(0x116758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11681Cu; }
        if (ctx->pc != 0x11681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116758_0x116758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11681Cu; }
        if (ctx->pc != 0x11681Cu) { return; }
    }
    ctx->pc = 0x11681Cu;
label_11681c:
    // 0x11681c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x116820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116824: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116828: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11682c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11682cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116830: 0xac628ae0  sw          $v0, -0x7520($v1)
    ctx->pc = 0x116830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937312), GPR_U32(ctx, 2));
    // 0x116834: 0x3e00008  jr          $ra
    ctx->pc = 0x116834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116834u;
            // 0x116838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11683Cu;
    // 0x11683c: 0x0  nop
    ctx->pc = 0x11683cu;
    // NOP
label_116840:
    // 0x116840: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x116840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x116844: 0xc  syscall     0
    ctx->pc = 0x116844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116848: 0x3e00008  jr          $ra
    ctx->pc = 0x116848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116850u;
label_116850:
    // 0x116850: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x116850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x116854: 0xc  syscall     0
    ctx->pc = 0x116854u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116858: 0x3e00008  jr          $ra
    ctx->pc = 0x116858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116860u;
    ctx->pc = 0x116860u;
}
