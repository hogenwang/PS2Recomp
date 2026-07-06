#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE6D8
// Address: 0x1de6d8 - 0x1de7a0
void sub_001DE6D8_0x1de6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE6D8_0x1de6d8");
#endif

    switch (ctx->pc) {
        case 0x1de700u: goto label_1de700;
        case 0x1de710u: goto label_1de710;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de740u: goto label_1de740;
        case 0x1de758u: goto label_1de758;
        case 0x1de760u: goto label_1de760;
        default: break;
    }

    ctx->pc = 0x1de6d8u;

    // 0x1de6d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de6dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de6e8: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1de6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1de6ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de6f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1de6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de6f4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1de6f8: 0xc078e82  jal         func_1E3A08
    ctx->pc = 0x1DE6F8u;
    SET_GPR_U32(ctx, 31, 0x1DE700u);
    ctx->pc = 0x1DE6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6F8u;
            // 0x1de6fc: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A08u;
    if (runtime->hasFunction(0x1E3A08u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE700u; }
        if (ctx->pc != 0x1DE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A08_0x1e3a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE700u; }
        if (ctx->pc != 0x1DE700u) { return; }
    }
    ctx->pc = 0x1DE700u;
label_1de700:
    // 0x1de700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de704: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de708: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DE708u;
    SET_GPR_U32(ctx, 31, 0x1DE710u);
    ctx->pc = 0x1DE70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE708u;
            // 0x1de70c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE710u; }
        if (ctx->pc != 0x1DE710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE710u; }
        if (ctx->pc != 0x1DE710u) { return; }
    }
    ctx->pc = 0x1DE710u;
label_1de710:
    // 0x1de710: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de714: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DE714u;
    {
        const bool branch_taken_0x1de714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE714u;
            // 0x1de718: 0x2484c890  addiu       $a0, $a0, -0x3770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de714) {
            ctx->pc = 0x1DE750u;
            goto label_1de750;
        }
    }
    ctx->pc = 0x1DE71Cu;
    // 0x1de71c: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1de71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1de720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de724: 0xc07917e  jal         func_1E45F8
    ctx->pc = 0x1DE724u;
    SET_GPR_U32(ctx, 31, 0x1DE72Cu);
    ctx->pc = 0x1DE728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE724u;
            // 0x1de728: 0xae1200b0  sw          $s2, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E45F8u;
    if (runtime->hasFunction(0x1E45F8u)) {
        auto targetFn = runtime->lookupFunction(0x1E45F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE72Cu; }
        if (ctx->pc != 0x1DE72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E45F8_0x1e45f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE72Cu; }
        if (ctx->pc != 0x1DE72Cu) { return; }
    }
    ctx->pc = 0x1DE72Cu;
label_1de72c:
    // 0x1de72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de730: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE730u;
    {
        const bool branch_taken_0x1de730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE730u;
            // 0x1de734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de730) {
            ctx->pc = 0x1DE778u;
            goto label_1de778;
        }
    }
    ctx->pc = 0x1DE738u;
    // 0x1de738: 0xc077b34  jal         func_1DECD0
    ctx->pc = 0x1DE738u;
    SET_GPR_U32(ctx, 31, 0x1DE740u);
    ctx->pc = 0x1DE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE738u;
            // 0x1de73c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DECD0u;
    if (runtime->hasFunction(0x1DECD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE740u; }
        if (ctx->pc != 0x1DE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DECD0_0x1decd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE740u; }
        if (ctx->pc != 0x1DE740u) { return; }
    }
    ctx->pc = 0x1DE740u;
label_1de740:
    // 0x1de740: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1de744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1de744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de748: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE748u;
    {
        const bool branch_taken_0x1de748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE748u;
            // 0x1de74c: 0x2484c8b8  addiu       $a0, $a0, -0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de748) {
            ctx->pc = 0x1DE768u;
            goto label_1de768;
        }
    }
    ctx->pc = 0x1DE750u;
label_1de750:
    // 0x1de750: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DE750u;
    SET_GPR_U32(ctx, 31, 0x1DE758u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE758u; }
        if (ctx->pc != 0x1DE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE758u; }
        if (ctx->pc != 0x1DE758u) { return; }
    }
    ctx->pc = 0x1DE758u;
label_1de758:
    // 0x1de758: 0xc077b9e  jal         func_1DEE78
    ctx->pc = 0x1DE758u;
    SET_GPR_U32(ctx, 31, 0x1DE760u);
    ctx->pc = 0x1DE75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE758u;
            // 0x1de75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE78u;
    if (runtime->hasFunction(0x1DEE78u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE78_0x1dee78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    }
    ctx->pc = 0x1DE760u;
label_1de760:
    // 0x1de760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE760u;
    {
        const bool branch_taken_0x1de760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE760u;
            // 0x1de764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de760) {
            ctx->pc = 0x1DE784u;
            goto label_1de784;
        }
    }
    ctx->pc = 0x1DE768u;
label_1de768:
    // 0x1de768: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1de76c: 0xae030384  sw          $v1, 0x384($s0)
    ctx->pc = 0x1de76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 3));
    // 0x1de770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE770u;
    {
        const bool branch_taken_0x1de770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE770u;
            // 0x1de774: 0xae020388  sw          $v0, 0x388($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de770) {
            ctx->pc = 0x1DE780u;
            goto label_1de780;
        }
    }
    ctx->pc = 0x1DE778u;
label_1de778:
    // 0x1de778: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x1de778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x1de77c: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x1de77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
label_1de780:
    // 0x1de780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de784:
    // 0x1de784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de78c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de78cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de790: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de794: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE794u;
            // 0x1de798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE79Cu;
    // 0x1de79c: 0x0  nop
    ctx->pc = 0x1de79cu;
    // NOP
    ctx->pc = 0x1de7a0u;
}
