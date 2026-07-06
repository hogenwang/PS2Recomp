#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002336A8
// Address: 0x2336a8 - 0x2337f8
void sub_002336A8_0x2336a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002336A8_0x2336a8");
#endif

    switch (ctx->pc) {
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        default: break;
    }

    ctx->pc = 0x2336a8u;

label_2336a8:
    // 0x2336a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2336a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2336ac:
    // 0x2336ac: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2336acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2336b0:
    // 0x2336b0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2336b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2336b4:
    // 0x2336b4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2336b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2336b8:
    // 0x2336b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2336b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2336bc:
    // 0x2336bc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2336bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2336c0:
    // 0x2336c0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2336c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2336c4:
    // 0x2336c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2336c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2336c8:
    // 0x2336c8: 0xf6102b  sltu        $v0, $a3, $s6
    ctx->pc = 0x2336c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_2336cc:
    // 0x2336cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2336ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2336d0:
    // 0x2336d0: 0x2c2380a  movz        $a3, $s6, $v0
    ctx->pc = 0x2336d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 22));
label_2336d4:
    // 0x2336d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2336d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2336d8:
    // 0x2336d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2336dc:
    // 0x2336dc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2336dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2336e0:
    // 0x2336e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2336e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2336e4:
    // 0x2336e4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2336e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2336e8:
    // 0x2336e8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_2336ec:
    // 0x2336ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2336ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2336f0:
    // 0x2336f0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2336f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2336f4:
    // 0x2336f4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2336f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2336f8:
    // 0x2336f8: 0x8c750010  lw          $s5, 0x10($v1)
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2336fc:
    // 0x2336fc: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_233700:
    // 0x233700: 0x2a79021  addu        $s2, $s5, $a3
    ctx->pc = 0x233700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_233704:
    // 0x233704: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x233704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_233708:
    // 0x233708: 0x25260003  addiu       $a2, $t1, 0x3
    ctx->pc = 0x233708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_23370c:
    // 0x23370c: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x23370cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_233710:
    // 0x233710: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x233710u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_233714:
    // 0x233714: 0x272a021  addu        $s4, $s3, $s2
    ctx->pc = 0x233714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_233718:
    // 0x233718: 0x94202a  slt         $a0, $a0, $s4
    ctx->pc = 0x233718u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23371c:
    // 0x23371c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_233720:
    if (ctx->pc == 0x233720u) {
        ctx->pc = 0x233720u;
            // 0x233720: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233724u;
        goto label_233724;
    }
    ctx->pc = 0x23371Cu;
    {
        const bool branch_taken_0x23371c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23371Cu;
            // 0x233720: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23371c) {
            ctx->pc = 0x233764u;
            goto label_233764;
        }
    }
    ctx->pc = 0x233724u;
label_233724:
    // 0x233724: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x233724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_233728:
    // 0x233728: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_23372c:
    if (ctx->pc == 0x23372Cu) {
        ctx->pc = 0x23372Cu;
            // 0x23372c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x233730u;
        goto label_233730;
    }
    ctx->pc = 0x233728u;
    {
        const bool branch_taken_0x233728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233728) {
            ctx->pc = 0x23372Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233728u;
            // 0x23372c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233740u;
            goto label_233740;
        }
    }
    ctx->pc = 0x233730u;
label_233730:
    // 0x233730: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x233730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_233734:
    // 0x233734: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x233734u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_233738:
    // 0x233738: 0x10000023  b           . + 4 + (0x23 << 2)
label_23373c:
    if (ctx->pc == 0x23373Cu) {
        ctx->pc = 0x23373Cu;
            // 0x23373c: 0xfe220038  sd          $v0, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
        ctx->pc = 0x233740u;
        goto label_233740;
    }
    ctx->pc = 0x233738u;
    {
        const bool branch_taken_0x233738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233738u;
            // 0x23373c: 0xfe220038  sd          $v0, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233738) {
            ctx->pc = 0x2337C8u;
            goto label_2337c8;
        }
    }
    ctx->pc = 0x233740u;
label_233740:
    // 0x233740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233744:
    // 0x233744: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x233744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_233748:
    // 0x233748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x233748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23374c:
    // 0x23374c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x23374cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_233750:
    // 0x233750: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x233750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233754:
    // 0x233754: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x233754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_233758:
    // 0x233758: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x233758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
label_23375c:
    // 0x23375c: 0x10000004  b           . + 4 + (0x4 << 2)
label_233760:
    if (ctx->pc == 0x233760u) {
        ctx->pc = 0x233760u;
            // 0x233760: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x233764u;
        goto label_233764;
    }
    ctx->pc = 0x23375Cu;
    {
        const bool branch_taken_0x23375c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23375Cu;
            // 0x233760: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23375c) {
            ctx->pc = 0x233770u;
            goto label_233770;
        }
    }
    ctx->pc = 0x233764u;
label_233764:
    // 0x233764: 0x92220042  lbu         $v0, 0x42($s1)
    ctx->pc = 0x233764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
label_233768:
    // 0x233768: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23376c:
    if (ctx->pc == 0x23376Cu) {
        ctx->pc = 0x23376Cu;
            // 0x23376c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233770u;
        goto label_233770;
    }
    ctx->pc = 0x233768u;
    {
        const bool branch_taken_0x233768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233768u;
            // 0x23376c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233768) {
            ctx->pc = 0x233784u;
            goto label_233784;
        }
    }
    ctx->pc = 0x233770u;
label_233770:
    // 0x233770: 0xc08b6f0  jal         func_22DBC0
label_233774:
    if (ctx->pc == 0x233774u) {
        ctx->pc = 0x233778u;
        goto label_233778;
    }
    ctx->pc = 0x233770u;
    SET_GPR_U32(ctx, 31, 0x233778u);
    ctx->pc = 0x22DBC0u;
    if (runtime->hasFunction(0x22DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x22DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233778u; }
        if (ctx->pc != 0x233778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DBC0_0x22dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233778u; }
        if (ctx->pc != 0x233778u) { return; }
    }
    ctx->pc = 0x233778u;
label_233778:
    // 0x233778: 0xc08b756  jal         func_22DD58
label_23377c:
    if (ctx->pc == 0x23377Cu) {
        ctx->pc = 0x23377Cu;
            // 0x23377c: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->pc = 0x233780u;
        goto label_233780;
    }
    ctx->pc = 0x233778u;
    SET_GPR_U32(ctx, 31, 0x233780u);
    ctx->pc = 0x23377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233778u;
            // 0x23377c: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DD58u;
    if (runtime->hasFunction(0x22DD58u)) {
        auto targetFn = runtime->lookupFunction(0x22DD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233780u; }
        if (ctx->pc != 0x233780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DD58_0x22dd58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233780u; }
        if (ctx->pc != 0x233780u) { return; }
    }
    ctx->pc = 0x233780u;
label_233780:
    // 0x233780: 0xa6200048  sh          $zero, 0x48($s1)
    ctx->pc = 0x233780u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
label_233784:
    // 0x233784: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x233784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_233788:
    // 0x233788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23378c:
    // 0x23378c: 0xc08c84a  jal         func_232128
label_233790:
    if (ctx->pc == 0x233790u) {
        ctx->pc = 0x233790u;
            // 0x233790: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->pc = 0x233794u;
        goto label_233794;
    }
    ctx->pc = 0x23378Cu;
    SET_GPR_U32(ctx, 31, 0x233794u);
    ctx->pc = 0x233790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23378Cu;
            // 0x233790: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (runtime->hasFunction(0x232128u)) {
        auto targetFn = runtime->lookupFunction(0x232128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233794u; }
        if (ctx->pc != 0x233794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232128_0x232128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233794u; }
        if (ctx->pc != 0x233794u) { return; }
    }
    ctx->pc = 0x233794u;
label_233794:
    // 0x233794: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_233798:
    // 0x233798: 0x2551823  subu        $v1, $s2, $s5
    ctx->pc = 0x233798u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_23379c:
    // 0x23379c: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x23379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2337a0:
    // 0x2337a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2337a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2337a4:
    // 0x2337a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2337a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2337a8:
    // 0x2337a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2337a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2337ac:
    // 0x2337ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2337acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2337b0:
    // 0x2337b0: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x2337b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_2337b4:
    // 0x2337b4: 0xa6150010  sh          $s5, 0x10($s0)
    ctx->pc = 0x2337b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 21));
label_2337b8:
    // 0x2337b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2337b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2337bc:
    // 0x2337bc: 0x3c0f809  jalr        $fp
label_2337c0:
    if (ctx->pc == 0x2337C0u) {
        ctx->pc = 0x2337C0u;
            // 0x2337c0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2337C4u;
        goto label_2337c4;
    }
    ctx->pc = 0x2337BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2337C4u);
        ctx->pc = 0x2337C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337BCu;
            // 0x2337c0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2337C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2337C4u; }
            if (ctx->pc != 0x2337C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2337C4u;
label_2337c4:
    // 0x2337c4: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x2337c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
label_2337c8:
    // 0x2337c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2337c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2337cc:
    // 0x2337cc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2337ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2337d0:
    // 0x2337d0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2337d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2337d4:
    // 0x2337d4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2337d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2337d8:
    // 0x2337d8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2337d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2337dc:
    // 0x2337dc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2337dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2337e0:
    // 0x2337e0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2337e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2337e4:
    // 0x2337e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2337e8:
    // 0x2337e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2337ec:
    // 0x2337ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2337f0:
    // 0x2337f0: 0x3e00008  jr          $ra
label_2337f4:
    if (ctx->pc == 0x2337F4u) {
        ctx->pc = 0x2337F4u;
            // 0x2337f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2337F8u;
        goto label_fallthrough_0x2337f0;
    }
    ctx->pc = 0x2337F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2337F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337F0u;
            // 0x2337f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2337f0:
    ctx->pc = 0x2337F8u;
    ctx->pc = 0x2337f8u;
}
