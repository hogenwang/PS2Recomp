#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F6E0
// Address: 0x13f6e0 - 0x13f8a0
void sub_0013F6E0_0x13f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F6E0_0x13f6e0");
#endif

    switch (ctx->pc) {
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f6e8u: goto label_13f6e8;
        case 0x13f6ecu: goto label_13f6ec;
        case 0x13f6f0u: goto label_13f6f0;
        case 0x13f6f4u: goto label_13f6f4;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f6fcu: goto label_13f6fc;
        case 0x13f700u: goto label_13f700;
        case 0x13f704u: goto label_13f704;
        case 0x13f708u: goto label_13f708;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f710u: goto label_13f710;
        case 0x13f714u: goto label_13f714;
        case 0x13f718u: goto label_13f718;
        case 0x13f71cu: goto label_13f71c;
        case 0x13f720u: goto label_13f720;
        case 0x13f724u: goto label_13f724;
        case 0x13f728u: goto label_13f728;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f730u: goto label_13f730;
        case 0x13f734u: goto label_13f734;
        case 0x13f738u: goto label_13f738;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f740u: goto label_13f740;
        case 0x13f744u: goto label_13f744;
        case 0x13f748u: goto label_13f748;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f750u: goto label_13f750;
        case 0x13f754u: goto label_13f754;
        case 0x13f758u: goto label_13f758;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f760u: goto label_13f760;
        case 0x13f764u: goto label_13f764;
        case 0x13f768u: goto label_13f768;
        case 0x13f76cu: goto label_13f76c;
        case 0x13f770u: goto label_13f770;
        case 0x13f774u: goto label_13f774;
        case 0x13f778u: goto label_13f778;
        case 0x13f77cu: goto label_13f77c;
        case 0x13f780u: goto label_13f780;
        case 0x13f784u: goto label_13f784;
        case 0x13f788u: goto label_13f788;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f790u: goto label_13f790;
        case 0x13f794u: goto label_13f794;
        case 0x13f798u: goto label_13f798;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7a4u: goto label_13f7a4;
        case 0x13f7a8u: goto label_13f7a8;
        case 0x13f7acu: goto label_13f7ac;
        case 0x13f7b0u: goto label_13f7b0;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7b8u: goto label_13f7b8;
        case 0x13f7bcu: goto label_13f7bc;
        case 0x13f7c0u: goto label_13f7c0;
        case 0x13f7c4u: goto label_13f7c4;
        case 0x13f7c8u: goto label_13f7c8;
        case 0x13f7ccu: goto label_13f7cc;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7d4u: goto label_13f7d4;
        case 0x13f7d8u: goto label_13f7d8;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f7e4u: goto label_13f7e4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f7ecu: goto label_13f7ec;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f7f4u: goto label_13f7f4;
        case 0x13f7f8u: goto label_13f7f8;
        case 0x13f7fcu: goto label_13f7fc;
        case 0x13f800u: goto label_13f800;
        case 0x13f804u: goto label_13f804;
        case 0x13f808u: goto label_13f808;
        case 0x13f80cu: goto label_13f80c;
        case 0x13f810u: goto label_13f810;
        case 0x13f814u: goto label_13f814;
        case 0x13f818u: goto label_13f818;
        case 0x13f81cu: goto label_13f81c;
        case 0x13f820u: goto label_13f820;
        case 0x13f824u: goto label_13f824;
        case 0x13f828u: goto label_13f828;
        case 0x13f82cu: goto label_13f82c;
        case 0x13f830u: goto label_13f830;
        case 0x13f834u: goto label_13f834;
        case 0x13f838u: goto label_13f838;
        case 0x13f83cu: goto label_13f83c;
        case 0x13f840u: goto label_13f840;
        case 0x13f844u: goto label_13f844;
        case 0x13f848u: goto label_13f848;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        case 0x13f880u: goto label_13f880;
        case 0x13f884u: goto label_13f884;
        case 0x13f888u: goto label_13f888;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f890u: goto label_13f890;
        case 0x13f894u: goto label_13f894;
        case 0x13f898u: goto label_13f898;
        case 0x13f89cu: goto label_13f89c;
        default: break;
    }

    ctx->pc = 0x13f6e0u;

label_13f6e0:
    // 0x13f6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f6e4:
    // 0x13f6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f6e8:
    // 0x13f6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f6ec:
    // 0x13f6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f6f0:
    // 0x13f6f0: 0x8c830238  lw          $v1, 0x238($a0)
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
label_13f6f4:
    // 0x13f6f4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x13f6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_13f6f8:
    // 0x13f6f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_13f6fc:
    if (ctx->pc == 0x13F6FCu) {
        ctx->pc = 0x13F6FCu;
            // 0x13f6fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F700u;
        goto label_13f700;
    }
    ctx->pc = 0x13F6F8u;
    {
        const bool branch_taken_0x13f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6F8u;
            // 0x13f6fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6f8) {
            ctx->pc = 0x13F728u;
            goto label_13f728;
        }
    }
    ctx->pc = 0x13F700u;
label_13f700:
    // 0x13f700: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x13f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_13f704:
    // 0x13f704: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x13f704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
label_13f708:
    // 0x13f708: 0x8e220208  lw          $v0, 0x208($s1)
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
label_13f70c:
    // 0x13f70c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f710:
    // 0x13f710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13f714:
    if (ctx->pc == 0x13F714u) {
        ctx->pc = 0x13F714u;
            // 0x13f714: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->pc = 0x13F718u;
        goto label_13f718;
    }
    ctx->pc = 0x13F710u;
    {
        const bool branch_taken_0x13f710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F710u;
            // 0x13f714: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f710) {
            ctx->pc = 0x13F720u;
            goto label_13f720;
        }
    }
    ctx->pc = 0x13F718u;
label_13f718:
    // 0x13f718: 0x1000005b  b           . + 4 + (0x5B << 2)
label_13f71c:
    if (ctx->pc == 0x13F71Cu) {
        ctx->pc = 0x13F71Cu;
            // 0x13f71c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x13F720u;
        goto label_13f720;
    }
    ctx->pc = 0x13F718u;
    {
        const bool branch_taken_0x13f718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F718u;
            // 0x13f71c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f718) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F720u;
label_13f720:
    // 0x13f720: 0xa620022c  sh          $zero, 0x22C($s1)
    ctx->pc = 0x13f720u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 0));
label_13f724:
    // 0x13f724: 0xa220025c  sb          $zero, 0x25C($s1)
    ctx->pc = 0x13f724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 0));
label_13f728:
    // 0x13f728: 0x9222025c  lbu         $v0, 0x25C($s1)
    ctx->pc = 0x13f728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
label_13f72c:
    // 0x13f72c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x13f72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_13f730:
    // 0x13f730: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_13f734:
    if (ctx->pc == 0x13F734u) {
        ctx->pc = 0x13F734u;
            // 0x13f734: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->pc = 0x13F738u;
        goto label_13f738;
    }
    ctx->pc = 0x13F730u;
    {
        const bool branch_taken_0x13f730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f730) {
            ctx->pc = 0x13F734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F730u;
            // 0x13f734: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F740u;
            goto label_13f740;
        }
    }
    ctx->pc = 0x13F738u;
label_13f738:
    // 0x13f738: 0x10000053  b           . + 4 + (0x53 << 2)
label_13f73c:
    if (ctx->pc == 0x13F73Cu) {
        ctx->pc = 0x13F73Cu;
            // 0x13f73c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x13F740u;
        goto label_13f740;
    }
    ctx->pc = 0x13F738u;
    {
        const bool branch_taken_0x13f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F738u;
            // 0x13f73c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f738) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F740u;
label_13f740:
    // 0x13f740: 0xc04f530  jal         func_13D4C0
label_13f744:
    if (ctx->pc == 0x13F744u) {
        ctx->pc = 0x13F744u;
            // 0x13f744: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x13F748u;
        goto label_13f748;
    }
    ctx->pc = 0x13F740u;
    SET_GPR_U32(ctx, 31, 0x13F748u);
    ctx->pc = 0x13F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F740u;
            // 0x13f744: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4C0u;
    if (runtime->hasFunction(0x13D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F748u; }
        if (ctx->pc != 0x13F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4C0_0x13d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F748u; }
        if (ctx->pc != 0x13F748u) { return; }
    }
    ctx->pc = 0x13F748u;
label_13f748:
    // 0x13f748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f74c:
    // 0x13f74c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_13f750:
    // 0x13f750: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x13f750u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_13f754:
    // 0x13f754: 0xc04f544  jal         func_13D510
label_13f758:
    if (ctx->pc == 0x13F758u) {
        ctx->pc = 0x13F758u;
            // 0x13f758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F75Cu;
        goto label_13f75c;
    }
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F754u;
            // 0x13f758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (runtime->hasFunction(0x13D510u)) {
        auto targetFn = runtime->lookupFunction(0x13D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F75Cu; }
        if (ctx->pc != 0x13F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D510_0x13d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F75Cu; }
        if (ctx->pc != 0x13F75Cu) { return; }
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x2e010013  sltiu       $at, $s0, 0x13
    ctx->pc = 0x13f75cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_13f760:
    // 0x13f760: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_13f764:
    if (ctx->pc == 0x13F764u) {
        ctx->pc = 0x13F768u;
        goto label_13f768;
    }
    ctx->pc = 0x13F760u;
    {
        const bool branch_taken_0x13f760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f760) {
            ctx->pc = 0x13F838u;
            goto label_13f838;
        }
    }
    ctx->pc = 0x13F768u;
label_13f768:
    // 0x13f768: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13f768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_13f76c:
    // 0x13f76c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13f770:
    // 0x13f770: 0x2463cc60  addiu       $v1, $v1, -0x33A0
    ctx->pc = 0x13f770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954080));
label_13f774:
    // 0x13f774: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_13f778:
    // 0x13f778: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13f77c:
    // 0x13f77c: 0x600008  jr          $v1
label_13f780:
    if (ctx->pc == 0x13F780u) {
        ctx->pc = 0x13F784u;
        goto label_13f784;
    }
    ctx->pc = 0x13F77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F788u: goto label_13f788;
            case 0x13F798u: goto label_13f798;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F838u: goto label_13f838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F784u;
label_13f784:
    // 0x13f784: 0x0  nop
    ctx->pc = 0x13f784u;
    // NOP
label_13f788:
    // 0x13f788: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_13f78c:
    // 0x13f78c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f790:
    // 0x13f790: 0x1000003d  b           . + 4 + (0x3D << 2)
label_13f794:
    if (ctx->pc == 0x13F794u) {
        ctx->pc = 0x13F794u;
            // 0x13f794: 0xae230230  sw          $v1, 0x230($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 3));
        ctx->pc = 0x13F798u;
        goto label_13f798;
    }
    ctx->pc = 0x13F790u;
    {
        const bool branch_taken_0x13f790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F790u;
            // 0x13f794: 0xae230230  sw          $v1, 0x230($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f790) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F798u;
label_13f798:
    // 0x13f798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f79c:
    // 0x13f79c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x13f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_13f7a0:
    // 0x13f7a0: 0x2442dd60  addiu       $v0, $v0, -0x22A0
    ctx->pc = 0x13f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
label_13f7a4:
    // 0x13f7a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13f7a8:
    // 0x13f7a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f7ac:
    // 0x13f7ac: 0x40f809  jalr        $v0
label_13f7b0:
    if (ctx->pc == 0x13F7B0u) {
        ctx->pc = 0x13F7B0u;
            // 0x13f7b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F7B4u;
        goto label_13f7b4;
    }
    ctx->pc = 0x13F7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F7B4u);
        ctx->pc = 0x13F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7ACu;
            // 0x13f7b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F7B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B4u; }
            if (ctx->pc != 0x13F7B4u) { return; }
        }
        }
    }
    ctx->pc = 0x13F7B4u;
label_13f7b4:
    // 0x13f7b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13f7b8:
    if (ctx->pc == 0x13F7B8u) {
        ctx->pc = 0x13F7BCu;
        goto label_13f7bc;
    }
    ctx->pc = 0x13F7B4u;
    {
        const bool branch_taken_0x13f7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7b4) {
            ctx->pc = 0x13F7D8u;
            goto label_13f7d8;
        }
    }
    ctx->pc = 0x13F7BCu;
label_13f7bc:
    // 0x13f7bc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_13f7c0:
    // 0x13f7c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f7c4:
    // 0x13f7c4: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x13f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_13f7c8:
    // 0x13f7c8: 0x9222025c  lbu         $v0, 0x25C($s1)
    ctx->pc = 0x13f7c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
label_13f7cc:
    // 0x13f7cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f7d0:
    // 0x13f7d0: 0x10000027  b           . + 4 + (0x27 << 2)
label_13f7d4:
    if (ctx->pc == 0x13F7D4u) {
        ctx->pc = 0x13F7D4u;
            // 0x13f7d4: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x13F7D8u;
        goto label_13f7d8;
    }
    ctx->pc = 0x13F7D0u;
    {
        const bool branch_taken_0x13f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7D0u;
            // 0x13f7d4: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7d0) {
            ctx->pc = 0x13F870u;
            goto label_13f870;
        }
    }
    ctx->pc = 0x13F7D8u;
label_13f7d8:
    // 0x13f7d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x13f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_13f7dc:
    // 0x13f7dc: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_13f7e0:
    if (ctx->pc == 0x13F7E0u) {
        ctx->pc = 0x13F7E4u;
        goto label_13f7e4;
    }
    ctx->pc = 0x13F7DCu;
    {
        const bool branch_taken_0x13f7dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f7dc) {
            ctx->pc = 0x13F838u;
            goto label_13f838;
        }
    }
    ctx->pc = 0x13F7E4u;
label_13f7e4:
    // 0x13f7e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_13f7e8:
    if (ctx->pc == 0x13F7E8u) {
        ctx->pc = 0x13F7E8u;
            // 0x13f7e8: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->pc = 0x13F7ECu;
        goto label_13f7ec;
    }
    ctx->pc = 0x13F7E4u;
    {
        const bool branch_taken_0x13f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7E4u;
            // 0x13f7e8: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7e4) {
            ctx->pc = 0x13F838u;
            goto label_13f838;
        }
    }
    ctx->pc = 0x13F7ECu;
label_13f7ec:
    // 0x13f7ec: 0x0  nop
    ctx->pc = 0x13f7ecu;
    // NOP
label_13f7f0:
    // 0x13f7f0: 0x8e260238  lw          $a2, 0x238($s1)
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_13f7f4:
    // 0x13f7f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x13f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_13f7f8:
    // 0x13f7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f7fc:
    // 0x13f7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13f7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13f800:
    // 0x13f800: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x13f800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_13f804:
    // 0x13f804: 0xc04fd80  jal         func_13F600
label_13f808:
    if (ctx->pc == 0x13F808u) {
        ctx->pc = 0x13F808u;
            // 0x13f808: 0xae220238  sw          $v0, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
        ctx->pc = 0x13F80Cu;
        goto label_13f80c;
    }
    ctx->pc = 0x13F804u;
    SET_GPR_U32(ctx, 31, 0x13F80Cu);
    ctx->pc = 0x13F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F804u;
            // 0x13f808: 0xae220238  sw          $v0, 0x238($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F600u;
    if (runtime->hasFunction(0x13F600u)) {
        auto targetFn = runtime->lookupFunction(0x13F600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F80Cu; }
        if (ctx->pc != 0x13F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F600_0x13f600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F80Cu; }
        if (ctx->pc != 0x13F80Cu) { return; }
    }
    ctx->pc = 0x13F80Cu;
label_13f80c:
    // 0x13f80c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_13f810:
    if (ctx->pc == 0x13F810u) {
        ctx->pc = 0x13F810u;
            // 0x13f810: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->pc = 0x13F814u;
        goto label_13f814;
    }
    ctx->pc = 0x13F80Cu;
    {
        const bool branch_taken_0x13f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f80c) {
            ctx->pc = 0x13F810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F80Cu;
            // 0x13f810: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F81Cu;
            goto label_13f81c;
        }
    }
    ctx->pc = 0x13F814u;
label_13f814:
    // 0x13f814: 0x1000001c  b           . + 4 + (0x1C << 2)
label_13f818:
    if (ctx->pc == 0x13F818u) {
        ctx->pc = 0x13F818u;
            // 0x13f818: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x13F81Cu;
        goto label_13f81c;
    }
    ctx->pc = 0x13F814u;
    {
        const bool branch_taken_0x13f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F814u;
            // 0x13f818: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f814) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F81Cu;
label_13f81c:
    // 0x13f81c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f820:
    // 0x13f820: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x13f820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_13f824:
    // 0x13f824: 0x9222025c  lbu         $v0, 0x25C($s1)
    ctx->pc = 0x13f824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
label_13f828:
    // 0x13f828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f82c:
    // 0x13f82c: 0x10000010  b           . + 4 + (0x10 << 2)
label_13f830:
    if (ctx->pc == 0x13F830u) {
        ctx->pc = 0x13F830u;
            // 0x13f830: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x13F834u;
        goto label_13f834;
    }
    ctx->pc = 0x13F82Cu;
    {
        const bool branch_taken_0x13f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F82Cu;
            // 0x13f830: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f82c) {
            ctx->pc = 0x13F870u;
            goto label_13f870;
        }
    }
    ctx->pc = 0x13F834u;
label_13f834:
    // 0x13f834: 0x0  nop
    ctx->pc = 0x13f834u;
    // NOP
label_13f838:
    // 0x13f838: 0x8e240250  lw          $a0, 0x250($s1)
    ctx->pc = 0x13f838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_13f83c:
    // 0x13f83c: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x13f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_13f840:
    // 0x13f840: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13f840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_13f844:
    // 0x13f844: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_13f848:
    if (ctx->pc == 0x13F848u) {
        ctx->pc = 0x13F84Cu;
        goto label_13f84c;
    }
    ctx->pc = 0x13F844u;
    {
        const bool branch_taken_0x13f844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f844) {
            ctx->pc = 0x13F868u;
            goto label_13f868;
        }
    }
    ctx->pc = 0x13F84Cu;
label_13f84c:
    // 0x13f84c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x13f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_13f850:
    // 0x13f850: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x13f850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_13f854:
    // 0x13f854: 0x9222025c  lbu         $v0, 0x25C($s1)
    ctx->pc = 0x13f854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
label_13f858:
    // 0x13f858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13f85c:
    // 0x13f85c: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f860:
    if (ctx->pc == 0x13F860u) {
        ctx->pc = 0x13F860u;
            // 0x13f860: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x13F864u;
        goto label_13f864;
    }
    ctx->pc = 0x13F85Cu;
    {
        const bool branch_taken_0x13f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F85Cu;
            // 0x13f860: 0xa222025c  sb          $v0, 0x25C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f85c) {
            ctx->pc = 0x13F870u;
            goto label_13f870;
        }
    }
    ctx->pc = 0x13F864u;
label_13f864:
    // 0x13f864: 0x0  nop
    ctx->pc = 0x13f864u;
    // NOP
label_13f868:
    // 0x13f868: 0x10000007  b           . + 4 + (0x7 << 2)
label_13f86c:
    if (ctx->pc == 0x13F86Cu) {
        ctx->pc = 0x13F86Cu;
            // 0x13f86c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x13F870u;
        goto label_13f870;
    }
    ctx->pc = 0x13F868u;
    {
        const bool branch_taken_0x13f868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F868u;
            // 0x13f86c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f868) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F870u;
label_13f870:
    // 0x13f870: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_13f874:
    // 0x13f874: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_13f878:
    // 0x13f878: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13f878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_13f87c:
    // 0x13f87c: 0x5462ffab  bnel        $v1, $v0, . + 4 + (-0x55 << 2)
label_13f880:
    if (ctx->pc == 0x13F880u) {
        ctx->pc = 0x13F880u;
            // 0x13f880: 0x9222025c  lbu         $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->pc = 0x13F884u;
        goto label_13f884;
    }
    ctx->pc = 0x13F87Cu;
    {
        const bool branch_taken_0x13f87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f87c) {
            ctx->pc = 0x13F880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F87Cu;
            // 0x13f880: 0x9222025c  lbu         $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f72c;
        }
    }
    ctx->pc = 0x13F884u;
label_13f884:
    // 0x13f884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13f888:
    // 0x13f888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13f88c:
    // 0x13f88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f890:
    // 0x13f890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f894:
    // 0x13f894: 0x3e00008  jr          $ra
label_13f898:
    if (ctx->pc == 0x13F898u) {
        ctx->pc = 0x13F898u;
            // 0x13f898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13F89Cu;
        goto label_13f89c;
    }
    ctx->pc = 0x13F894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F894u;
            // 0x13f898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F89Cu;
label_13f89c:
    // 0x13f89c: 0x0  nop
    ctx->pc = 0x13f89cu;
    // NOP
    ctx->pc = 0x13f8a0u;
}
