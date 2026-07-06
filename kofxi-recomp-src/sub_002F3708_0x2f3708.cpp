#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3708
// Address: 0x2f3708 - 0x2f38a0
void sub_002F3708_0x2f3708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3708_0x2f3708");
#endif

    switch (ctx->pc) {
        case 0x2f3708u: goto label_2f3708;
        case 0x2f370cu: goto label_2f370c;
        case 0x2f3710u: goto label_2f3710;
        case 0x2f3714u: goto label_2f3714;
        case 0x2f3718u: goto label_2f3718;
        case 0x2f371cu: goto label_2f371c;
        case 0x2f3720u: goto label_2f3720;
        case 0x2f3724u: goto label_2f3724;
        case 0x2f3728u: goto label_2f3728;
        case 0x2f372cu: goto label_2f372c;
        case 0x2f3730u: goto label_2f3730;
        case 0x2f3734u: goto label_2f3734;
        case 0x2f3738u: goto label_2f3738;
        case 0x2f373cu: goto label_2f373c;
        case 0x2f3740u: goto label_2f3740;
        case 0x2f3744u: goto label_2f3744;
        case 0x2f3748u: goto label_2f3748;
        case 0x2f374cu: goto label_2f374c;
        case 0x2f3750u: goto label_2f3750;
        case 0x2f3754u: goto label_2f3754;
        case 0x2f3758u: goto label_2f3758;
        case 0x2f375cu: goto label_2f375c;
        case 0x2f3760u: goto label_2f3760;
        case 0x2f3764u: goto label_2f3764;
        case 0x2f3768u: goto label_2f3768;
        case 0x2f376cu: goto label_2f376c;
        case 0x2f3770u: goto label_2f3770;
        case 0x2f3774u: goto label_2f3774;
        case 0x2f3778u: goto label_2f3778;
        case 0x2f377cu: goto label_2f377c;
        case 0x2f3780u: goto label_2f3780;
        case 0x2f3784u: goto label_2f3784;
        case 0x2f3788u: goto label_2f3788;
        case 0x2f378cu: goto label_2f378c;
        case 0x2f3790u: goto label_2f3790;
        case 0x2f3794u: goto label_2f3794;
        case 0x2f3798u: goto label_2f3798;
        case 0x2f379cu: goto label_2f379c;
        case 0x2f37a0u: goto label_2f37a0;
        case 0x2f37a4u: goto label_2f37a4;
        case 0x2f37a8u: goto label_2f37a8;
        case 0x2f37acu: goto label_2f37ac;
        case 0x2f37b0u: goto label_2f37b0;
        case 0x2f37b4u: goto label_2f37b4;
        case 0x2f37b8u: goto label_2f37b8;
        case 0x2f37bcu: goto label_2f37bc;
        case 0x2f37c0u: goto label_2f37c0;
        case 0x2f37c4u: goto label_2f37c4;
        case 0x2f37c8u: goto label_2f37c8;
        case 0x2f37ccu: goto label_2f37cc;
        case 0x2f37d0u: goto label_2f37d0;
        case 0x2f37d4u: goto label_2f37d4;
        case 0x2f37d8u: goto label_2f37d8;
        case 0x2f37dcu: goto label_2f37dc;
        case 0x2f37e0u: goto label_2f37e0;
        case 0x2f37e4u: goto label_2f37e4;
        case 0x2f37e8u: goto label_2f37e8;
        case 0x2f37ecu: goto label_2f37ec;
        case 0x2f37f0u: goto label_2f37f0;
        case 0x2f37f4u: goto label_2f37f4;
        case 0x2f37f8u: goto label_2f37f8;
        case 0x2f37fcu: goto label_2f37fc;
        case 0x2f3800u: goto label_2f3800;
        case 0x2f3804u: goto label_2f3804;
        case 0x2f3808u: goto label_2f3808;
        case 0x2f380cu: goto label_2f380c;
        case 0x2f3810u: goto label_2f3810;
        case 0x2f3814u: goto label_2f3814;
        case 0x2f3818u: goto label_2f3818;
        case 0x2f381cu: goto label_2f381c;
        case 0x2f3820u: goto label_2f3820;
        case 0x2f3824u: goto label_2f3824;
        case 0x2f3828u: goto label_2f3828;
        case 0x2f382cu: goto label_2f382c;
        case 0x2f3830u: goto label_2f3830;
        case 0x2f3834u: goto label_2f3834;
        case 0x2f3838u: goto label_2f3838;
        case 0x2f383cu: goto label_2f383c;
        case 0x2f3840u: goto label_2f3840;
        case 0x2f3844u: goto label_2f3844;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f384cu: goto label_2f384c;
        case 0x2f3850u: goto label_2f3850;
        case 0x2f3854u: goto label_2f3854;
        case 0x2f3858u: goto label_2f3858;
        case 0x2f385cu: goto label_2f385c;
        case 0x2f3860u: goto label_2f3860;
        case 0x2f3864u: goto label_2f3864;
        case 0x2f3868u: goto label_2f3868;
        case 0x2f386cu: goto label_2f386c;
        case 0x2f3870u: goto label_2f3870;
        case 0x2f3874u: goto label_2f3874;
        case 0x2f3878u: goto label_2f3878;
        case 0x2f387cu: goto label_2f387c;
        case 0x2f3880u: goto label_2f3880;
        case 0x2f3884u: goto label_2f3884;
        case 0x2f3888u: goto label_2f3888;
        case 0x2f388cu: goto label_2f388c;
        case 0x2f3890u: goto label_2f3890;
        case 0x2f3894u: goto label_2f3894;
        case 0x2f3898u: goto label_2f3898;
        case 0x2f389cu: goto label_2f389c;
        default: break;
    }

    ctx->pc = 0x2f3708u;

label_2f3708:
    // 0x2f3708: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f3708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f370c:
    // 0x2f370c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2f3710:
    // 0x2f3710: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f3710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2f3714:
    // 0x2f3714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3718:
    // 0x2f3718: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2f3718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_2f371c:
    // 0x2f371c: 0x263400e0  addiu       $s4, $s1, 0xE0
    ctx->pc = 0x2f371cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_2f3720:
    // 0x2f3720: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f3720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2f3724:
    // 0x2f3724: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2f3728:
    // 0x2f3728: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2f3728u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f372c:
    // 0x2f372c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2f3730:
    // 0x2f3730: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2f3730u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f3734:
    // 0x2f3734: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f3734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2f3738:
    // 0x2f3738: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2f3738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f373c:
    // 0x2f373c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2f3740:
    // 0x2f3740: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f3740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f3744:
    // 0x2f3744: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2f3744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_2f3748:
    // 0x2f3748: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f3748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f374c:
    // 0x2f374c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2f3750:
    // 0x2f3750: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f3754:
    // 0x2f3754: 0x10000037  b           . + 4 + (0x37 << 2)
label_2f3758:
    if (ctx->pc == 0x2F3758u) {
        ctx->pc = 0x2F3758u;
            // 0x2f3758: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->pc = 0x2F375Cu;
        goto label_2f375c;
    }
    ctx->pc = 0x2F3754u;
    {
        const bool branch_taken_0x2f3754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3754u;
            // 0x2f3758: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3754) {
            ctx->pc = 0x2F3834u;
            goto label_2f3834;
        }
    }
    ctx->pc = 0x2F375Cu;
label_2f375c:
    // 0x2f375c: 0x0  nop
    ctx->pc = 0x2f375cu;
    // NOP
label_2f3760:
    // 0x2f3760: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f3760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2f3764:
    // 0x2f3764: 0x109e0004  beq         $a0, $fp, . + 4 + (0x4 << 2)
label_2f3768:
    if (ctx->pc == 0x2F3768u) {
        ctx->pc = 0x2F3768u;
            // 0x2f3768: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F376Cu;
        goto label_2f376c;
    }
    ctx->pc = 0x2F3764u;
    {
        const bool branch_taken_0x2f3764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 30));
        ctx->pc = 0x2F3768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3764u;
            // 0x2f3768: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3764) {
            ctx->pc = 0x2F3778u;
            goto label_2f3778;
        }
    }
    ctx->pc = 0x2F376Cu;
label_2f376c:
    // 0x2f376c: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x2f376cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2f3770:
    // 0x2f3770: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f3770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3774:
    // 0x2f3774: 0x262300a  movz        $a2, $s3, $v0
    ctx->pc = 0x2f3774u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
label_2f3778:
    // 0x2f3778: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f3778u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f377c:
    // 0x2f377c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3780:
    // 0x2f3780: 0xc0bdf1e  jal         func_2F7C78
label_2f3784:
    if (ctx->pc == 0x2F3784u) {
        ctx->pc = 0x2F3784u;
            // 0x2f3784: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3788u;
        goto label_2f3788;
    }
    ctx->pc = 0x2F3780u;
    SET_GPR_U32(ctx, 31, 0x2F3788u);
    ctx->pc = 0x2F3784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3780u;
            // 0x2f3784: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C78u;
    if (runtime->hasFunction(0x2F7C78u)) {
        auto targetFn = runtime->lookupFunction(0x2F7C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3788u; }
        if (ctx->pc != 0x2F3788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7C78_0x2f7c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3788u; }
        if (ctx->pc != 0x2F3788u) { return; }
    }
    ctx->pc = 0x2F3788u;
label_2f3788:
    // 0x2f3788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f378c:
    // 0x2f378c: 0x4800039  bltz        $a0, . + 4 + (0x39 << 2)
label_2f3790:
    if (ctx->pc == 0x2F3790u) {
        ctx->pc = 0x2F3790u;
            // 0x2f3790: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x2F3794u;
        goto label_2f3794;
    }
    ctx->pc = 0x2F378Cu;
    {
        const bool branch_taken_0x2f378c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F3790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F378Cu;
            // 0x2f3790: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f378c) {
            ctx->pc = 0x2F3874u;
            goto label_2f3874;
        }
    }
    ctx->pc = 0x2F3794u;
label_2f3794:
    // 0x2f3794: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_2f3798:
    if (ctx->pc == 0x2F3798u) {
        ctx->pc = 0x2F3798u;
            // 0x2f3798: 0x2a4a821  addu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->pc = 0x2F379Cu;
        goto label_2f379c;
    }
    ctx->pc = 0x2F3794u;
    {
        const bool branch_taken_0x2f3794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3794u;
            // 0x2f3798: 0x2a4a821  addu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3794) {
            ctx->pc = 0x2F3868u;
            goto label_2f3868;
        }
    }
    ctx->pc = 0x2F379Cu;
label_2f379c:
    // 0x2f379c: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x2f379cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
label_2f37a0:
    // 0x2f37a0: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x2f37a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2f37a4:
    // 0x2f37a4: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2f37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2f37a8:
    // 0x2f37a8: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2f37a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_2f37ac:
    // 0x2f37ac: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x2f37acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
label_2f37b0:
    // 0x2f37b0: 0x107e0020  beq         $v1, $fp, . + 4 + (0x20 << 2)
label_2f37b4:
    if (ctx->pc == 0x2F37B4u) {
        ctx->pc = 0x2F37B4u;
            // 0x2f37b4: 0xdef20000  ld          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x2F37B8u;
        goto label_2f37b8;
    }
    ctx->pc = 0x2F37B0u;
    {
        const bool branch_taken_0x2f37b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x2F37B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37B0u;
            // 0x2f37b4: 0xdef20000  ld          $s2, 0x0($s7) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37b0) {
            ctx->pc = 0x2F3834u;
            goto label_2f3834;
        }
    }
    ctx->pc = 0x2F37B8u;
label_2f37b8:
    // 0x2f37b8: 0xdec60020  ld          $a2, 0x20($s6)
    ctx->pc = 0x2f37b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 32)));
label_2f37bc:
    // 0x2f37bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f37bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f37c0:
    // 0x2f37c0: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x2f37c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2f37c4:
    // 0x2f37c4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2f37c8:
    if (ctx->pc == 0x2F37C8u) {
        ctx->pc = 0x2F37C8u;
            // 0x2f37c8: 0xfef20000  sd          $s2, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 18));
        ctx->pc = 0x2F37CCu;
        goto label_2f37cc;
    }
    ctx->pc = 0x2F37C4u;
    {
        const bool branch_taken_0x2f37c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f37c4) {
            ctx->pc = 0x2F37C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37C4u;
            // 0x2f37c8: 0xfef20000  sd          $s2, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3834u;
            goto label_2f3834;
        }
    }
    ctx->pc = 0x2F37CCu;
label_2f37cc:
    // 0x2f37cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f37ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f37d0:
    // 0x2f37d0: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2f37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2f37d4:
    // 0x2f37d4: 0x0  nop
    ctx->pc = 0x2f37d4u;
    // NOP
label_2f37d8:
    // 0x2f37d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f37dc:
    if (ctx->pc == 0x2F37DCu) {
        ctx->pc = 0x2F37DCu;
            // 0x2f37dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F37E0u;
        goto label_2f37e0;
    }
    ctx->pc = 0x2F37D8u;
    {
        const bool branch_taken_0x2f37d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F37DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37D8u;
            // 0x2f37dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37d8) {
            ctx->pc = 0x2F381Cu;
            goto label_2f381c;
        }
    }
    ctx->pc = 0x2F37E0u;
label_2f37e0:
    // 0x2f37e0: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2f37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2f37e4:
    // 0x2f37e4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2f37e8:
    if (ctx->pc == 0x2F37E8u) {
        ctx->pc = 0x2F37E8u;
            // 0x2f37e8: 0x244102d  daddu       $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
        ctx->pc = 0x2F37ECu;
        goto label_2f37ec;
    }
    ctx->pc = 0x2F37E4u;
    {
        const bool branch_taken_0x2f37e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F37E4u;
            // 0x2f37e8: 0x244102d  daddu       $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f37e4) {
            ctx->pc = 0x2F381Cu;
            goto label_2f381c;
        }
    }
    ctx->pc = 0x2F37ECu;
label_2f37ec:
    // 0x2f37ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f37ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f37f0:
    // 0x2f37f0: 0x242280a  movz        $a1, $s2, $v0
    ctx->pc = 0x2f37f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
label_2f37f4:
    // 0x2f37f4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f37f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f37f8:
    // 0x2f37f8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2f37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2f37fc:
    // 0x2f37fc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f37fcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3800:
    // 0x2f3800: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_2f3804:
    // 0x2f3804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3808:
    // 0x2f3808: 0x60f809  jalr        $v1
label_2f380c:
    if (ctx->pc == 0x2F380Cu) {
        ctx->pc = 0x2F380Cu;
            // 0x2f380c: 0x8e26007c  lw          $a2, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x2F3810u;
        goto label_2f3810;
    }
    ctx->pc = 0x2F3808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3810u);
        ctx->pc = 0x2F380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3808u;
            // 0x2f380c: 0x8e26007c  lw          $a2, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F3810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F3810u; }
            if (ctx->pc != 0x2F3810u) { return; }
        }
        }
    }
    ctx->pc = 0x2F3810u;
label_2f3810:
    // 0x2f3810: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3810u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3814:
    // 0x2f3814: 0xdec60020  ld          $a2, 0x20($s6)
    ctx->pc = 0x2f3814u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 32)));
label_2f3818:
    // 0x2f3818: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2f3818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2f381c:
    // 0x2f381c: 0x244902d  daddu       $s2, $s2, $a0
    ctx->pc = 0x2f381cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 4));
label_2f3820:
    // 0x2f3820: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f3820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f3824:
    // 0x2f3824: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x2f3824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2f3828:
    // 0x2f3828: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_2f382c:
    if (ctx->pc == 0x2F382Cu) {
        ctx->pc = 0x2F382Cu;
            // 0x2f382c: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->pc = 0x2F3830u;
        goto label_2f3830;
    }
    ctx->pc = 0x2F3828u;
    {
        const bool branch_taken_0x2f3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3828) {
            ctx->pc = 0x2F382Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3828u;
            // 0x2f382c: 0x8e220078  lw          $v0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F37D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f37d8;
        }
    }
    ctx->pc = 0x2F3830u;
label_2f3830:
    // 0x2f3830: 0xfef20000  sd          $s2, 0x0($s7)
    ctx->pc = 0x2f3830u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 18));
label_2f3834:
    // 0x2f3834: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_2f3838:
    if (ctx->pc == 0x2F3838u) {
        ctx->pc = 0x2F3838u;
            // 0x2f3838: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2F383Cu;
        goto label_2f383c;
    }
    ctx->pc = 0x2F3834u;
    {
        const bool branch_taken_0x2f3834 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2F3838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3834u;
            // 0x2f3838: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3834) {
            ctx->pc = 0x2F386Cu;
            goto label_2f386c;
        }
    }
    ctx->pc = 0x2F383Cu;
label_2f383c:
    // 0x2f383c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2f3840:
    // 0x2f3840: 0x105effc7  beq         $v0, $fp, . + 4 + (-0x39 << 2)
label_2f3844:
    if (ctx->pc == 0x2F3844u) {
        ctx->pc = 0x2F3844u;
            // 0x2f3844: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2F3848u;
        goto label_2f3848;
    }
    ctx->pc = 0x2F3840u;
    {
        const bool branch_taken_0x2f3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x2F3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3840u;
            // 0x2f3844: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3840) {
            ctx->pc = 0x2F3760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3760;
        }
    }
    ctx->pc = 0x2F3848u;
label_2f3848:
    // 0x2f3848: 0xc0bc77e  jal         func_2F1DF8
label_2f384c:
    if (ctx->pc == 0x2F384Cu) {
        ctx->pc = 0x2F384Cu;
            // 0x2f384c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F3850u;
        goto label_2f3850;
    }
    ctx->pc = 0x2F3848u;
    SET_GPR_U32(ctx, 31, 0x2F3850u);
    ctx->pc = 0x2F384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3848u;
            // 0x2f384c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (runtime->hasFunction(0x2F1DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3850u; }
        if (ctx->pc != 0x2F3850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1DF8_0x2f1df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3850u; }
        if (ctx->pc != 0x2F3850u) { return; }
    }
    ctx->pc = 0x2F3850u;
label_2f3850:
    // 0x2f3850: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2f3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2f3854:
    // 0x2f3854: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f3854u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3858:
    // 0x2f3858: 0x5ce0ffc2  bgtzl       $a3, . + 4 + (-0x3E << 2)
label_2f385c:
    if (ctx->pc == 0x2F385Cu) {
        ctx->pc = 0x2F385Cu;
            // 0x2f385c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x2F3860u;
        goto label_2f3860;
    }
    ctx->pc = 0x2F3858u;
    {
        const bool branch_taken_0x2f3858 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x2f3858) {
            ctx->pc = 0x2F385Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3858u;
            // 0x2f385c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3764;
        }
    }
    ctx->pc = 0x2F3860u;
label_2f3860:
    // 0x2f3860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3864:
    // 0x2f3864: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x2f3864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_2f3868:
    // 0x2f3868: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f3868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f386c:
    // 0x2f386c: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x2f386cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2f3870:
    // 0x2f3870: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f3870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2f3874:
    // 0x2f3874: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f3874u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f3878:
    // 0x2f3878: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f3878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f387c:
    // 0x2f387c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f387cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f3880:
    // 0x2f3880: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f3880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f3884:
    // 0x2f3884: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f3884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3888:
    // 0x2f3888: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f3888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f388c:
    // 0x2f388c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f388cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3890:
    // 0x2f3890: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f3890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3894:
    // 0x2f3894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f3894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3898:
    // 0x2f3898: 0x3e00008  jr          $ra
label_2f389c:
    if (ctx->pc == 0x2F389Cu) {
        ctx->pc = 0x2F389Cu;
            // 0x2f389c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2F38A0u;
        goto label_fallthrough_0x2f3898;
    }
    ctx->pc = 0x2F3898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3898u;
            // 0x2f389c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f3898:
    ctx->pc = 0x2F38A0u;
    ctx->pc = 0x2f38a0u;
}
