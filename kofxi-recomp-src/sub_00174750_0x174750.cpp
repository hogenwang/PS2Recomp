#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174750
// Address: 0x174750 - 0x174c40
void sub_00174750_0x174750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174750_0x174750");
#endif

    switch (ctx->pc) {
        case 0x1747f0u: goto label_1747f0;
        case 0x1747f8u: goto label_1747f8;
        case 0x174804u: goto label_174804;
        case 0x174828u: goto label_174828;
        case 0x174840u: goto label_174840;
        case 0x1748a4u: goto label_1748a4;
        case 0x174ab8u: goto label_174ab8;
        case 0x174ae0u: goto label_174ae0;
        case 0x174b08u: goto label_174b08;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b74u: goto label_174b74;
        case 0x174b98u: goto label_174b98;
        case 0x174bd8u: goto label_174bd8;
        case 0x174bf4u: goto label_174bf4;
        case 0x174c00u: goto label_174c00;
        case 0x174c10u: goto label_174c10;
        default: break;
    }

    ctx->pc = 0x174750u;

    // 0x174750: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x174750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x174754: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x174754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x174758: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17475c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174760: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x174764: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x174768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17476c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174778: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x174778u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x17477c: 0x10a40124  beq         $a1, $a0, . + 4 + (0x124 << 2)
    ctx->pc = 0x17477Cu;
    {
        const bool branch_taken_0x17477c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x174780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17477Cu;
            // 0x174780: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17477c) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x174784u;
    // 0x174784: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x174784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174788: 0x50a30122  beql        $a1, $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x174788u;
    {
        const bool branch_taken_0x174788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x174788) {
            ctx->pc = 0x17478Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174788u;
            // 0x17478c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174C14u;
            goto label_174c14;
        }
    }
    ctx->pc = 0x174790u;
    // 0x174790: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174794: 0x10a3011e  beq         $a1, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x174794u;
    {
        const bool branch_taken_0x174794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x174794) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x17479Cu;
    // 0x17479c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1747a0: 0x10a3011b  beq         $a1, $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x1747A0u;
    {
        const bool branch_taken_0x1747a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1747a0) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x1747A8u;
    // 0x1747a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1747ac: 0x10a30118  beq         $a1, $v1, . + 4 + (0x118 << 2)
    ctx->pc = 0x1747ACu;
    {
        const bool branch_taken_0x1747ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1747ac) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x1747B4u;
    // 0x1747b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1747b8: 0x10a30115  beq         $a1, $v1, . + 4 + (0x115 << 2)
    ctx->pc = 0x1747B8u;
    {
        const bool branch_taken_0x1747b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1747b8) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x1747C0u;
    // 0x1747c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1747c4: 0x8c639478  lw          $v1, -0x6B88($v1)
    ctx->pc = 0x1747c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939768)));
    // 0x1747c8: 0x14600111  bnez        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x1747C8u;
    {
        const bool branch_taken_0x1747c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747c8) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x1747D0u;
    // 0x1747d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1747d4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1747D4u;
    {
        const bool branch_taken_0x1747d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1747d4) {
            ctx->pc = 0x1747E0u;
            goto label_1747e0;
        }
    }
    ctx->pc = 0x1747DCu;
    // 0x1747dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1747dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1747e0:
    // 0x1747e0: 0x164000bd  bnez        $s2, . + 4 + (0xBD << 2)
    ctx->pc = 0x1747E0u;
    {
        const bool branch_taken_0x1747e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747e0) {
            ctx->pc = 0x174AD8u;
            goto label_174ad8;
        }
    }
    ctx->pc = 0x1747E8u;
    // 0x1747e8: 0xc067dbc  jal         func_19F6F0
    ctx->pc = 0x1747E8u;
    SET_GPR_U32(ctx, 31, 0x1747F0u);
    ctx->pc = 0x1747ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747E8u;
            // 0x1747ec: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6F0u;
    if (runtime->hasFunction(0x19F6F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F0u; }
        if (ctx->pc != 0x1747F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6F0_0x19f6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F0u; }
        if (ctx->pc != 0x1747F0u) { return; }
    }
    ctx->pc = 0x1747F0u;
label_1747f0:
    // 0x1747f0: 0xc067dc0  jal         func_19F700
    ctx->pc = 0x1747F0u;
    SET_GPR_U32(ctx, 31, 0x1747F8u);
    ctx->pc = 0x1747F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747F0u;
            // 0x1747f4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F700u;
    if (runtime->hasFunction(0x19F700u)) {
        auto targetFn = runtime->lookupFunction(0x19F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F8u; }
        if (ctx->pc != 0x1747F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F700_0x19f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747F8u; }
        if (ctx->pc != 0x1747F8u) { return; }
    }
    ctx->pc = 0x1747F8u;
label_1747f8:
    // 0x1747f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1747fc: 0xc067dc4  jal         func_19F710
    ctx->pc = 0x1747FCu;
    SET_GPR_U32(ctx, 31, 0x174804u);
    ctx->pc = 0x174800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747FCu;
            // 0x174800: 0xa040dad0  sb          $zero, -0x2530($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957776), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F710u;
    if (runtime->hasFunction(0x19F710u)) {
        auto targetFn = runtime->lookupFunction(0x19F710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174804u; }
        if (ctx->pc != 0x174804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F710_0x19f710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174804u; }
        if (ctx->pc != 0x174804u) { return; }
    }
    ctx->pc = 0x174804u;
label_174804:
    // 0x174804: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x174808: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17480c: 0xa0829e58  sb          $v0, -0x61A8($a0)
    ctx->pc = 0x17480cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942296), (uint8_t)GPR_U32(ctx, 2));
    // 0x174810: 0x90639e58  lbu         $v1, -0x61A8($v1)
    ctx->pc = 0x174810u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294942296)));
    // 0x174814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174818: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174818u;
    {
        const bool branch_taken_0x174818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174818) {
            ctx->pc = 0x17481Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174818u;
            // 0x17481c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174830u;
            goto label_174830;
        }
    }
    ctx->pc = 0x174820u;
    // 0x174820: 0xc05384c  jal         func_14E130
    ctx->pc = 0x174820u;
    SET_GPR_U32(ctx, 31, 0x174828u);
    ctx->pc = 0x14E130u;
    if (runtime->hasFunction(0x14E130u)) {
        auto targetFn = runtime->lookupFunction(0x14E130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174828u; }
        if (ctx->pc != 0x174828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E130_0x14e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174828u; }
        if (ctx->pc != 0x174828u) { return; }
    }
    ctx->pc = 0x174828u;
label_174828:
    // 0x174828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174828u;
    {
        const bool branch_taken_0x174828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174828) {
            ctx->pc = 0x174840u;
            goto label_174840;
        }
    }
    ctx->pc = 0x174830u;
label_174830:
    // 0x174830: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174830u;
    {
        const bool branch_taken_0x174830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174830) {
            ctx->pc = 0x174840u;
            goto label_174840;
        }
    }
    ctx->pc = 0x174838u;
    // 0x174838: 0xc05384c  jal         func_14E130
    ctx->pc = 0x174838u;
    SET_GPR_U32(ctx, 31, 0x174840u);
    ctx->pc = 0x14E130u;
    if (runtime->hasFunction(0x14E130u)) {
        auto targetFn = runtime->lookupFunction(0x14E130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174840u; }
        if (ctx->pc != 0x174840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E130_0x14e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174840u; }
        if (ctx->pc != 0x174840u) { return; }
    }
    ctx->pc = 0x174840u;
label_174840:
    // 0x174840: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174844: 0x90429e58  lbu         $v0, -0x61A8($v0)
    ctx->pc = 0x174844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294942296)));
    // 0x174848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17484c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x17484cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x174850: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x174850u;
    {
        const bool branch_taken_0x174850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174850) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x174858u;
    // 0x174858: 0x93a200a1  lbu         $v0, 0xA1($sp)
    ctx->pc = 0x174858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
    // 0x17485c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17485Cu;
    {
        const bool branch_taken_0x17485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17485c) {
            ctx->pc = 0x17487Cu;
            goto label_17487c;
        }
    }
    ctx->pc = 0x174864u;
    // 0x174864: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174868: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17486c: 0x9063dad0  lbu         $v1, -0x2530($v1)
    ctx->pc = 0x17486cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957776)));
    // 0x174870: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x174870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x174874: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174874u;
    {
        const bool branch_taken_0x174874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174874u;
            // 0x174878: 0xa043dad0  sb          $v1, -0x2530($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957776), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174874) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x17487Cu;
label_17487c:
    // 0x17487c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174880: 0x9049daa0  lbu         $t1, -0x2560($v0)
    ctx->pc = 0x174880u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x174884: 0x1920001a  blez        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x174884u;
    {
        const bool branch_taken_0x174884 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x174888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174884u;
            // 0x174888: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174884) {
            ctx->pc = 0x1748F0u;
            goto label_1748f0;
        }
    }
    ctx->pc = 0x17488Cu;
    // 0x17488c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x174890: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174894: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174898: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17489c: 0x24e79e10  addiu       $a3, $a3, -0x61F0
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942224));
    // 0x1748a0: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x1748a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1748a4:
    // 0x1748a4: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1748a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1748a8: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1748ac: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1748b0: 0x94a50084  lhu         $a1, 0x84($a1)
    ctx->pc = 0x1748b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x1748b4: 0x94840014  lhu         $a0, 0x14($a0)
    ctx->pc = 0x1748b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1748b8: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1748B8u;
    {
        const bool branch_taken_0x1748b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1748b8) {
            ctx->pc = 0x1748D8u;
            goto label_1748d8;
        }
    }
    ctx->pc = 0x1748C0u;
    // 0x1748c0: 0x9064dad0  lbu         $a0, -0x2530($v1)
    ctx->pc = 0x1748c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957776)));
    // 0x1748c4: 0x1062804  sllv        $a1, $a2, $t0
    ctx->pc = 0x1748c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x1748c8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1748c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1748cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1748ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1748d0: 0xa044dad0  sb          $a0, -0x2530($v0)
    ctx->pc = 0x1748d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957776), (uint8_t)GPR_U32(ctx, 4));
    // 0x1748d4: 0x0  nop
    ctx->pc = 0x1748d4u;
    // NOP
label_1748d8:
    // 0x1748d8: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1748dc: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x1748dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1748e0: 0x149202a  slt         $a0, $t2, $t1
    ctx->pc = 0x1748e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1748e4: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1748E4u;
    {
        const bool branch_taken_0x1748e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1748e4) {
            ctx->pc = 0x1748E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1748E4u;
            // 0x1748e8: 0x314800ff  andi        $t0, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1748A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1748a4;
        }
    }
    ctx->pc = 0x1748ECu;
    // 0x1748ec: 0x0  nop
    ctx->pc = 0x1748ecu;
    // NOP
label_1748f0:
    // 0x1748f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1748f4: 0x9042dad8  lbu         $v0, -0x2528($v0)
    ctx->pc = 0x1748f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957784)));
    // 0x1748f8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1748f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1748fc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1748FCu;
    {
        const bool branch_taken_0x1748fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1748fc) {
            ctx->pc = 0x174900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1748FCu;
            // 0x174900: 0x93a700a0  lbu         $a3, 0xA0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174944u;
            goto label_174944;
        }
    }
    ctx->pc = 0x174904u;
    // 0x174904: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174908: 0x9044dad0  lbu         $a0, -0x2530($v0)
    ctx->pc = 0x174908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957776)));
    // 0x17490c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x17490Cu;
    {
        const bool branch_taken_0x17490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17490c) {
            ctx->pc = 0x174940u;
            goto label_174940;
        }
    }
    ctx->pc = 0x174914u;
    // 0x174914: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174918: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x17491c: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x17491cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x174920: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x174920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x174924: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174924u;
    {
        const bool branch_taken_0x174924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174924) {
            ctx->pc = 0x174938u;
            goto label_174938;
        }
    }
    ctx->pc = 0x17492Cu;
    // 0x17492c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174930u;
    {
        const bool branch_taken_0x174930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174930u;
            // 0x174934: 0xa044dac8  sb          $a0, -0x2538($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957768), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174930) {
            ctx->pc = 0x174940u;
            goto label_174940;
        }
    }
    ctx->pc = 0x174938u;
label_174938:
    // 0x174938: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17493c: 0xa040dac8  sb          $zero, -0x2538($v0)
    ctx->pc = 0x17493cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957768), (uint8_t)GPR_U32(ctx, 0));
label_174940:
    // 0x174940: 0x93a700a0  lbu         $a3, 0xA0($sp)
    ctx->pc = 0x174940u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_174944:
    // 0x174944: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x174948: 0x93b400ac  lbu         $s4, 0xAC($sp)
    ctx->pc = 0x174948u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x17494c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17494cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174950: 0x93a600a1  lbu         $a2, 0xA1($sp)
    ctx->pc = 0x174950u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 161)));
    // 0x174954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174958: 0xa0879e40  sb          $a3, -0x61C0($a0)
    ctx->pc = 0x174958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942272), (uint8_t)GPR_U32(ctx, 7));
    // 0x17495c: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x17495cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x174960: 0x93a700a3  lbu         $a3, 0xA3($sp)
    ctx->pc = 0x174960u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 163)));
    // 0x174964: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x174964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x174968: 0xa0669e41  sb          $a2, -0x61BF($v1)
    ctx->pc = 0x174968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294942273), (uint8_t)GPR_U32(ctx, 6));
    // 0x17496c: 0x3c0f009c  lui         $t7, 0x9C
    ctx->pc = 0x17496cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)156 << 16));
    // 0x174970: 0x93a500a2  lbu         $a1, 0xA2($sp)
    ctx->pc = 0x174970u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x174974: 0x3c0e009c  lui         $t6, 0x9C
    ctx->pc = 0x174974u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)156 << 16));
    // 0x174978: 0xa0879e43  sb          $a3, -0x61BD($a0)
    ctx->pc = 0x174978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942275), (uint8_t)GPR_U32(ctx, 7));
    // 0x17497c: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x174980: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x174984: 0x93b500af  lbu         $s5, 0xAF($sp)
    ctx->pc = 0x174984u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x174988: 0xa0949e4c  sb          $s4, -0x61B4($a0)
    ctx->pc = 0x174988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942284), (uint8_t)GPR_U32(ctx, 20));
    // 0x17498c: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x174990: 0x93b400b0  lbu         $s4, 0xB0($sp)
    ctx->pc = 0x174990u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x174994: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x174994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x174998: 0x93b90070  lbu         $t9, 0x70($sp)
    ctx->pc = 0x174998u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17499c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17499cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1749a0: 0x93ad00a6  lbu         $t5, 0xA6($sp)
    ctx->pc = 0x1749a0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x1749a4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1749a8: 0xa0459e42  sb          $a1, -0x61BE($v0)
    ctx->pc = 0x1749a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294942274), (uint8_t)GPR_U32(ctx, 5));
    // 0x1749ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1749acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1749b0: 0x93ac00a7  lbu         $t4, 0xA7($sp)
    ctx->pc = 0x1749b0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 167)));
    // 0x1749b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1749b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1749b8: 0xa14d9e46  sb          $t5, -0x61BA($t2)
    ctx->pc = 0x1749b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294942278), (uint8_t)GPR_U32(ctx, 13));
    // 0x1749bc: 0x27b80080  addiu       $t8, $sp, 0x80
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1749c0: 0x93ab00a8  lbu         $t3, 0xA8($sp)
    ctx->pc = 0x1749c0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1749c4: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x1749c8: 0xa12c9e47  sb          $t4, -0x61B9($t1)
    ctx->pc = 0x1749c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294942279), (uint8_t)GPR_U32(ctx, 12));
    // 0x1749cc: 0xa2159e4f  sb          $s5, -0x61B1($s0)
    ctx->pc = 0x1749ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294942287), (uint8_t)GPR_U32(ctx, 21));
    // 0x1749d0: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x1749d4: 0xa10b9e48  sb          $t3, -0x61B8($t0)
    ctx->pc = 0x1749d4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294942280), (uint8_t)GPR_U32(ctx, 11));
    // 0x1749d8: 0xa1f49e50  sb          $s4, -0x61B0($t7)
    ctx->pc = 0x1749d8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294942288), (uint8_t)GPR_U32(ctx, 20));
    // 0x1749dc: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x1749dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x1749e0: 0xa1d99e10  sb          $t9, -0x61F0($t6)
    ctx->pc = 0x1749e0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294942224), (uint8_t)GPR_U32(ctx, 25));
    // 0x1749e4: 0x93a600a4  lbu         $a2, 0xA4($sp)
    ctx->pc = 0x1749e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1749e8: 0x93a500a5  lbu         $a1, 0xA5($sp)
    ctx->pc = 0x1749e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 165)));
    // 0x1749ec: 0x93b00071  lbu         $s0, 0x71($sp)
    ctx->pc = 0x1749ecu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x1749f0: 0xa0669e44  sb          $a2, -0x61BC($v1)
    ctx->pc = 0x1749f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294942276), (uint8_t)GPR_U32(ctx, 6));
    // 0x1749f4: 0xa0459e45  sb          $a1, -0x61BB($v0)
    ctx->pc = 0x1749f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294942277), (uint8_t)GPR_U32(ctx, 5));
    // 0x1749f8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1749fc: 0x93af0072  lbu         $t7, 0x72($sp)
    ctx->pc = 0x1749fcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x174a00: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174a04: 0x93ae0073  lbu         $t6, 0x73($sp)
    ctx->pc = 0x174a04u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 115)));
    // 0x174a08: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174a0c: 0x93aa00a9  lbu         $t2, 0xA9($sp)
    ctx->pc = 0x174a0cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 169)));
    // 0x174a10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174a14: 0x93a900aa  lbu         $t1, 0xAA($sp)
    ctx->pc = 0x174a14u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x174a18: 0x93a800ab  lbu         $t0, 0xAB($sp)
    ctx->pc = 0x174a18u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 171)));
    // 0x174a1c: 0xa0ea9e49  sb          $t2, -0x61B7($a3)
    ctx->pc = 0x174a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294942281), (uint8_t)GPR_U32(ctx, 10));
    // 0x174a20: 0xa0c99e4a  sb          $t1, -0x61B6($a2)
    ctx->pc = 0x174a20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294942282), (uint8_t)GPR_U32(ctx, 9));
    // 0x174a24: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x174a28: 0xa0a89e4b  sb          $t0, -0x61B5($a1)
    ctx->pc = 0x174a28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942283), (uint8_t)GPR_U32(ctx, 8));
    // 0x174a2c: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x174a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x174a30: 0xa1b09e11  sb          $s0, -0x61EF($t5)
    ctx->pc = 0x174a30u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294942225), (uint8_t)GPR_U32(ctx, 16));
    // 0x174a34: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x174a38: 0xa18f9e12  sb          $t7, -0x61EE($t4)
    ctx->pc = 0x174a38u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294942226), (uint8_t)GPR_U32(ctx, 15));
    // 0x174a3c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x174a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x174a40: 0xa16e9e13  sb          $t6, -0x61ED($t3)
    ctx->pc = 0x174a40u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294942227), (uint8_t)GPR_U32(ctx, 14));
    // 0x174a44: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x174a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x174a48: 0x93ad0074  lbu         $t5, 0x74($sp)
    ctx->pc = 0x174a48u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x174a4c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174a50: 0x93ac0075  lbu         $t4, 0x75($sp)
    ctx->pc = 0x174a50u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 117)));
    // 0x174a54: 0x93ab0076  lbu         $t3, 0x76($sp)
    ctx->pc = 0x174a54u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 118)));
    // 0x174a58: 0xa14d9e14  sb          $t5, -0x61EC($t2)
    ctx->pc = 0x174a58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294942228), (uint8_t)GPR_U32(ctx, 13));
    // 0x174a5c: 0xa12c9e15  sb          $t4, -0x61EB($t1)
    ctx->pc = 0x174a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294942229), (uint8_t)GPR_U32(ctx, 12));
    // 0x174a60: 0xa10b9e16  sb          $t3, -0x61EA($t0)
    ctx->pc = 0x174a60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294942230), (uint8_t)GPR_U32(ctx, 11));
    // 0x174a64: 0x93aa0077  lbu         $t2, 0x77($sp)
    ctx->pc = 0x174a64u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 119)));
    // 0x174a68: 0x93a90078  lbu         $t1, 0x78($sp)
    ctx->pc = 0x174a68u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x174a6c: 0x97a8007a  lhu         $t0, 0x7A($sp)
    ctx->pc = 0x174a6cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 122)));
    // 0x174a70: 0x93b300ad  lbu         $s3, 0xAD($sp)
    ctx->pc = 0x174a70u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 173)));
    // 0x174a74: 0x93b100ae  lbu         $s1, 0xAE($sp)
    ctx->pc = 0x174a74u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x174a78: 0xa0ea9e17  sb          $t2, -0x61E9($a3)
    ctx->pc = 0x174a78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294942231), (uint8_t)GPR_U32(ctx, 10));
    // 0x174a7c: 0xa0739e4d  sb          $s3, -0x61B3($v1)
    ctx->pc = 0x174a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294942285), (uint8_t)GPR_U32(ctx, 19));
    // 0x174a80: 0xa0519e4e  sb          $s1, -0x61B2($v0)
    ctx->pc = 0x174a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294942286), (uint8_t)GPR_U32(ctx, 17));
    // 0x174a84: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x174a88: 0xa0c99e18  sb          $t1, -0x61E8($a2)
    ctx->pc = 0x174a88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294942232), (uint8_t)GPR_U32(ctx, 9));
    // 0x174a8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174a90: 0xa4a89e1a  sh          $t0, -0x61E6($a1)
    ctx->pc = 0x174a90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294942234), (uint16_t)GPR_U32(ctx, 8));
    // 0x174a94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174a98: 0x97a7007c  lhu         $a3, 0x7C($sp)
    ctx->pc = 0x174a98u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x174a9c: 0x26739e20  addiu       $s3, $s3, -0x61E0
    ctx->pc = 0x174a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942240));
    // 0x174aa0: 0x93a6007e  lbu         $a2, 0x7E($sp)
    ctx->pc = 0x174aa0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 126)));
    // 0x174aa4: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x174aa8: 0x93a5007f  lbu         $a1, 0x7F($sp)
    ctx->pc = 0x174aa8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
    // 0x174aac: 0xa4879e1c  sh          $a3, -0x61E4($a0)
    ctx->pc = 0x174aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294942236), (uint16_t)GPR_U32(ctx, 7));
    // 0x174ab0: 0xa0669e1e  sb          $a2, -0x61E2($v1)
    ctx->pc = 0x174ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294942238), (uint8_t)GPR_U32(ctx, 6));
    // 0x174ab4: 0xa0459e1f  sb          $a1, -0x61E1($v0)
    ctx->pc = 0x174ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294942239), (uint8_t)GPR_U32(ctx, 5));
label_174ab8:
    // 0x174ab8: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x174ab8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x174abc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x174ac0: 0x87020002  lh          $v0, 0x2($t8)
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x174ac4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x174ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x174ac8: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x174ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x174acc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x174accu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x174ad0: 0x1e20fff9  bgtz        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x174AD0u;
    {
        const bool branch_taken_0x174ad0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x174AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AD0u;
            // 0x174ad4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ad0) {
            ctx->pc = 0x174AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174ab8;
        }
    }
    ctx->pc = 0x174AD8u;
label_174ad8:
    // 0x174ad8: 0xc067db0  jal         func_19F6C0
    ctx->pc = 0x174AD8u;
    SET_GPR_U32(ctx, 31, 0x174AE0u);
    ctx->pc = 0x19F6C0u;
    if (runtime->hasFunction(0x19F6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AE0u; }
        if (ctx->pc != 0x174AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6C0_0x19f6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AE0u; }
        if (ctx->pc != 0x174AE0u) { return; }
    }
    ctx->pc = 0x174AE0u;
label_174ae0:
    // 0x174ae0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x174AE0u;
    {
        const bool branch_taken_0x174ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174ae0) {
            ctx->pc = 0x174C08u;
            goto label_174c08;
        }
    }
    ctx->pc = 0x174AE8u;
    // 0x174ae8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174aec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174aecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174af0: 0x9044daa0  lbu         $a0, -0x2560($v0)
    ctx->pc = 0x174af0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x174af4: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x174AF4u;
    {
        const bool branch_taken_0x174af4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x174AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174AF4u;
            // 0x174af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174af4) {
            ctx->pc = 0x174B40u;
            goto label_174b40;
        }
    }
    ctx->pc = 0x174AFCu;
    // 0x174afc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174b00: 0x2463da58  addiu       $v1, $v1, -0x25A8
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957656));
    // 0x174b04: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x174b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_174b08:
    // 0x174b08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174b0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x174b0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x174b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x174b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174B14u;
    {
        const bool branch_taken_0x174b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b14) {
            ctx->pc = 0x174B28u;
            goto label_174b28;
        }
    }
    ctx->pc = 0x174B1Cu;
    // 0x174b1c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x174b20: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x174b20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174b24: 0x0  nop
    ctx->pc = 0x174b24u;
    // NOP
label_174b28:
    // 0x174b28: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x174b2c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x174b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174b30: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x174b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x174b34: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174B34u;
            // 0x174b38: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x174B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174b08;
        }
    }
    ctx->pc = 0x174B3Cu;
    // 0x174b3c: 0x0  nop
    ctx->pc = 0x174b3cu;
    // NOP
label_174b40:
    // 0x174b40: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x174b44: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x174B44u;
    {
        const bool branch_taken_0x174b44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B44u;
            // 0x174b48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b44) {
            ctx->pc = 0x174BC8u;
            goto label_174bc8;
        }
    }
    ctx->pc = 0x174B4Cu;
label_174b4c:
    // 0x174b4c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174b50: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x174b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x174b54: 0x2442da58  addiu       $v0, $v0, -0x25A8
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
    // 0x174b58: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174b5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x174b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x174b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x174b64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174B64u;
    {
        const bool branch_taken_0x174b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b64) {
            ctx->pc = 0x174B80u;
            goto label_174b80;
        }
    }
    ctx->pc = 0x174B6Cu;
    // 0x174b6c: 0xc0540a8  jal         func_1502A0
    ctx->pc = 0x174B6Cu;
    SET_GPR_U32(ctx, 31, 0x174B74u);
    ctx->pc = 0x174B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B6Cu;
            // 0x174b70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1502A0u;
    if (runtime->hasFunction(0x1502A0u)) {
        auto targetFn = runtime->lookupFunction(0x1502A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B74u; }
        if (ctx->pc != 0x174B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001502A0_0x1502a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B74u; }
        if (ctx->pc != 0x174B74u) { return; }
    }
    ctx->pc = 0x174B74u;
label_174b74:
    // 0x174b74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x174b74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b78: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x174b7c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x174b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_174b80:
    // 0x174b80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x174b80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b84: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x174b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x174b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174B88u;
    {
        const bool branch_taken_0x174b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b88) {
            ctx->pc = 0x174BA8u;
            goto label_174ba8;
        }
    }
    ctx->pc = 0x174B90u;
    // 0x174b90: 0xc0540a8  jal         func_1502A0
    ctx->pc = 0x174B90u;
    SET_GPR_U32(ctx, 31, 0x174B98u);
    ctx->pc = 0x174B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B90u;
            // 0x174b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1502A0u;
    if (runtime->hasFunction(0x1502A0u)) {
        auto targetFn = runtime->lookupFunction(0x1502A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B98u; }
        if (ctx->pc != 0x174B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001502A0_0x1502a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B98u; }
        if (ctx->pc != 0x174B98u) { return; }
    }
    ctx->pc = 0x174B98u;
label_174b98:
    // 0x174b98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x174b98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174b9c: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x174b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x174ba0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x174ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x174ba4: 0x0  nop
    ctx->pc = 0x174ba4u;
    // NOP
label_174ba8:
    // 0x174ba8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x174ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174bac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x174bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174bb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174bb4: 0x9042daa0  lbu         $v0, -0x2560($v0)
    ctx->pc = 0x174bb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x174bb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174bbc: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x174BBCu;
    {
        const bool branch_taken_0x174bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174bbc) {
            ctx->pc = 0x174B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174b4c;
        }
    }
    ctx->pc = 0x174BC4u;
    // 0x174bc4: 0x0  nop
    ctx->pc = 0x174bc4u;
    // NOP
label_174bc8:
    // 0x174bc8: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x174BC8u;
    {
        const bool branch_taken_0x174bc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bc8) {
            ctx->pc = 0x174BE0u;
            goto label_174be0;
        }
    }
    ctx->pc = 0x174BD0u;
    // 0x174bd0: 0xc05f0ac  jal         func_17C2B0
    ctx->pc = 0x174BD0u;
    SET_GPR_U32(ctx, 31, 0x174BD8u);
    ctx->pc = 0x17C2B0u;
    if (runtime->hasFunction(0x17C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C2B0_0x17c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    }
    ctx->pc = 0x174BD8u;
label_174bd8:
    // 0x174bd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x174BD8u;
    {
        const bool branch_taken_0x174bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BD8u;
            // 0x174bdc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bd8) {
            ctx->pc = 0x174BF8u;
            goto label_174bf8;
        }
    }
    ctx->pc = 0x174BE0u;
label_174be0:
    // 0x174be0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x174BE0u;
    {
        const bool branch_taken_0x174be0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x174be0) {
            ctx->pc = 0x174BF4u;
            goto label_174bf4;
        }
    }
    ctx->pc = 0x174BE8u;
    // 0x174be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x174bec: 0xc05d31c  jal         func_174C70
    ctx->pc = 0x174BECu;
    SET_GPR_U32(ctx, 31, 0x174BF4u);
    ctx->pc = 0x174BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174BECu;
            // 0x174bf0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174C70u;
    if (runtime->hasFunction(0x174C70u)) {
        auto targetFn = runtime->lookupFunction(0x174C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BF4u; }
        if (ctx->pc != 0x174BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174C70_0x174c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BF4u; }
        if (ctx->pc != 0x174BF4u) { return; }
    }
    ctx->pc = 0x174BF4u;
label_174bf4:
    // 0x174bf4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x174bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_174bf8:
    // 0x174bf8: 0xc05d578  jal         func_1755E0
    ctx->pc = 0x174BF8u;
    SET_GPR_U32(ctx, 31, 0x174C00u);
    ctx->pc = 0x174BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174BF8u;
            // 0x174bfc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1755E0u;
    if (runtime->hasFunction(0x1755E0u)) {
        auto targetFn = runtime->lookupFunction(0x1755E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C00u; }
        if (ctx->pc != 0x174C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001755E0_0x1755e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C00u; }
        if (ctx->pc != 0x174C00u) { return; }
    }
    ctx->pc = 0x174C00u;
label_174c00:
    // 0x174c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174C00u;
    {
        const bool branch_taken_0x174c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c00) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x174C08u;
label_174c08:
    // 0x174c08: 0xc05d79c  jal         func_175E70
    ctx->pc = 0x174C08u;
    SET_GPR_U32(ctx, 31, 0x174C10u);
    ctx->pc = 0x175E70u;
    if (runtime->hasFunction(0x175E70u)) {
        auto targetFn = runtime->lookupFunction(0x175E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C10u; }
        if (ctx->pc != 0x174C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175E70_0x175e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C10u; }
        if (ctx->pc != 0x174C10u) { return; }
    }
    ctx->pc = 0x174C10u;
label_174c10:
    // 0x174c10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x174c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_174c14:
    // 0x174c14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174c18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x174C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C2Cu;
            // 0x174c30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174C34u;
    // 0x174c34: 0x0  nop
    ctx->pc = 0x174c34u;
    // NOP
    // 0x174c38: 0x0  nop
    ctx->pc = 0x174c38u;
    // NOP
    // 0x174c3c: 0x0  nop
    ctx->pc = 0x174c3cu;
    // NOP
    ctx->pc = 0x174c40u;
}
