#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151820
// Address: 0x151820 - 0x151af0
void sub_00151820_0x151820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151820_0x151820");
#endif

    switch (ctx->pc) {
        case 0x151840u: goto label_151840;
        case 0x151850u: goto label_151850;
        case 0x151858u: goto label_151858;
        case 0x151888u: goto label_151888;
        case 0x15189cu: goto label_15189c;
        case 0x1518a4u: goto label_1518a4;
        case 0x1518c8u: goto label_1518c8;
        case 0x15190cu: goto label_15190c;
        case 0x151950u: goto label_151950;
        case 0x151968u: goto label_151968;
        case 0x15197cu: goto label_15197c;
        case 0x151984u: goto label_151984;
        case 0x1519b4u: goto label_1519b4;
        case 0x1519d8u: goto label_1519d8;
        case 0x151a70u: goto label_151a70;
        case 0x151aa0u: goto label_151aa0;
        case 0x151ad0u: goto label_151ad0;
        case 0x151ad8u: goto label_151ad8;
        default: break;
    }

    ctx->pc = 0x151820u;

    // 0x151820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x151820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x151824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15182c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151830: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x151830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151838: 0xc054bb8  jal         func_152EE0
    ctx->pc = 0x151838u;
    SET_GPR_U32(ctx, 31, 0x151840u);
    ctx->pc = 0x15183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151838u;
            // 0x15183c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EE0u;
    if (runtime->hasFunction(0x152EE0u)) {
        auto targetFn = runtime->lookupFunction(0x152EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151840u; }
        if (ctx->pc != 0x151840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EE0_0x152ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151840u; }
        if (ctx->pc != 0x151840u) { return; }
    }
    ctx->pc = 0x151840u;
label_151840:
    // 0x151840: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x151840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151844: 0x1a000080  blez        $s0, . + 4 + (0x80 << 2)
    ctx->pc = 0x151844u;
    {
        const bool branch_taken_0x151844 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x151848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151844u;
            // 0x151848: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151844) {
            ctx->pc = 0x151A48u;
            goto label_151a48;
        }
    }
    ctx->pc = 0x15184Cu;
    // 0x15184c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x15184cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_151850:
    // 0x151850: 0xc054c00  jal         func_153000
    ctx->pc = 0x151850u;
    SET_GPR_U32(ctx, 31, 0x151858u);
    ctx->pc = 0x151854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151850u;
            // 0x151854: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153000u;
    if (runtime->hasFunction(0x153000u)) {
        auto targetFn = runtime->lookupFunction(0x153000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151858u; }
        if (ctx->pc != 0x151858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153000_0x153000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151858u; }
        if (ctx->pc != 0x151858u) { return; }
    }
    ctx->pc = 0x151858u;
label_151858:
    // 0x151858: 0x93a3006c  lbu         $v1, 0x6C($sp)
    ctx->pc = 0x151858u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x15185c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15185cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x151860: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x151860u;
    {
        const bool branch_taken_0x151860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151860) {
            ctx->pc = 0x151A30u;
            goto label_151a30;
        }
    }
    ctx->pc = 0x151868u;
    // 0x151868: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15186c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15186cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x151870: 0x2484a880  addiu       $a0, $a0, -0x5780
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
    // 0x151874: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50
    ctx->pc = 0x151874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    // 0x151878: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x151878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x15187c: 0x240702c8  addiu       $a3, $zero, 0x2C8
    ctx->pc = 0x15187cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x151880: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x151880u;
    SET_GPR_U32(ctx, 31, 0x151888u);
    ctx->pc = 0x151884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151880u;
            // 0x151884: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151888u; }
        if (ctx->pc != 0x151888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151888u; }
        if (ctx->pc != 0x151888u) { return; }
    }
    ctx->pc = 0x151888u;
label_151888:
    // 0x151888: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x151888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15188c: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x15188cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151890: 0x26440124  addiu       $a0, $s2, 0x124
    ctx->pc = 0x151890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    // 0x151894: 0xc0ca804  jal         func_32A010
    ctx->pc = 0x151894u;
    SET_GPR_U32(ctx, 31, 0x15189Cu);
    ctx->pc = 0x151898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151894u;
            // 0x151898: 0xa2420079  sb          $v0, 0x79($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A010u;
    if (runtime->hasFunction(0x32A010u)) {
        auto targetFn = runtime->lookupFunction(0x32A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15189Cu; }
        if (ctx->pc != 0x15189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A010_0x32a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15189Cu; }
        if (ctx->pc != 0x15189Cu) { return; }
    }
    ctx->pc = 0x15189Cu;
label_15189c:
    // 0x15189c: 0xc0c8708  jal         func_321C20
    ctx->pc = 0x15189Cu;
    SET_GPR_U32(ctx, 31, 0x1518A4u);
    ctx->pc = 0x1518A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15189Cu;
            // 0x1518a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321C20u;
    if (runtime->hasFunction(0x321C20u)) {
        auto targetFn = runtime->lookupFunction(0x321C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518A4u; }
        if (ctx->pc != 0x1518A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321C20_0x321c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518A4u; }
        if (ctx->pc != 0x1518A4u) { return; }
    }
    ctx->pc = 0x1518A4u;
label_1518a4:
    // 0x1518a4: 0x93a2006e  lbu         $v0, 0x6E($sp)
    ctx->pc = 0x1518a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 110)));
    // 0x1518a8: 0xa24202c4  sb          $v0, 0x2C4($s2)
    ctx->pc = 0x1518a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 708), (uint8_t)GPR_U32(ctx, 2));
    // 0x1518ac: 0x93a2006c  lbu         $v0, 0x6C($sp)
    ctx->pc = 0x1518acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1518b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1518b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1518b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1518B4u;
    {
        const bool branch_taken_0x1518b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518b4) {
            ctx->pc = 0x151918u;
            goto label_151918;
        }
    }
    ctx->pc = 0x1518BCu;
    // 0x1518bc: 0x97a5006a  lhu         $a1, 0x6A($sp)
    ctx->pc = 0x1518bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1518c0: 0xc054c00  jal         func_153000
    ctx->pc = 0x1518C0u;
    SET_GPR_U32(ctx, 31, 0x1518C8u);
    ctx->pc = 0x1518C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518C0u;
            // 0x1518c4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153000u;
    if (runtime->hasFunction(0x153000u)) {
        auto targetFn = runtime->lookupFunction(0x153000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518C8u; }
        if (ctx->pc != 0x1518C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153000_0x153000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518C8u; }
        if (ctx->pc != 0x1518C8u) { return; }
    }
    ctx->pc = 0x1518C8u;
label_1518c8:
    // 0x1518c8: 0x93a4005d  lbu         $a0, 0x5D($sp)
    ctx->pc = 0x1518c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 93)));
    // 0x1518cc: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1518d0: 0x87a30052  lh          $v1, 0x52($sp)
    ctx->pc = 0x1518d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
    // 0x1518d4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1518d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1518d8: 0x87a20054  lh          $v0, 0x54($sp)
    ctx->pc = 0x1518d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1518dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1518dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518e0: 0xa3a40078  sb          $a0, 0x78($sp)
    ctx->pc = 0x1518e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x1518e4: 0x93a4006d  lbu         $a0, 0x6D($sp)
    ctx->pc = 0x1518e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 109)));
    // 0x1518e8: 0xa7a3007a  sh          $v1, 0x7A($sp)
    ctx->pc = 0x1518e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1518ec: 0xa7a2007c  sh          $v0, 0x7C($sp)
    ctx->pc = 0x1518ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x1518f0: 0x87a30062  lh          $v1, 0x62($sp)
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x1518f4: 0x87a20064  lh          $v0, 0x64($sp)
    ctx->pc = 0x1518f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1518f8: 0xa3a40070  sb          $a0, 0x70($sp)
    ctx->pc = 0x1518f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 4));
    // 0x1518fc: 0x97a40050  lhu         $a0, 0x50($sp)
    ctx->pc = 0x1518fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151900: 0xa7a30072  sh          $v1, 0x72($sp)
    ctx->pc = 0x151900u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x151904: 0xc0543c8  jal         func_150F20
    ctx->pc = 0x151904u;
    SET_GPR_U32(ctx, 31, 0x15190Cu);
    ctx->pc = 0x151908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151904u;
            // 0x151908: 0xa7a20074  sh          $v0, 0x74($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F20u;
    if (runtime->hasFunction(0x150F20u)) {
        auto targetFn = runtime->lookupFunction(0x150F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15190Cu; }
        if (ctx->pc != 0x15190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F20_0x150f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15190Cu; }
        if (ctx->pc != 0x15190Cu) { return; }
    }
    ctx->pc = 0x15190Cu;
label_15190c:
    // 0x15190c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15190Cu;
    {
        const bool branch_taken_0x15190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15190c) {
            ctx->pc = 0x151950u;
            goto label_151950;
        }
    }
    ctx->pc = 0x151914u;
    // 0x151914: 0x0  nop
    ctx->pc = 0x151914u;
    // NOP
label_151918:
    // 0x151918: 0x93a4006d  lbu         $a0, 0x6D($sp)
    ctx->pc = 0x151918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 109)));
    // 0x15191c: 0x87a30062  lh          $v1, 0x62($sp)
    ctx->pc = 0x15191cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x151920: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x151924: 0x87a20064  lh          $v0, 0x64($sp)
    ctx->pc = 0x151924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x151928: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15192c: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x15192cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x151930: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x151930u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x151934: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x151934u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x151938: 0xa3a40078  sb          $a0, 0x78($sp)
    ctx->pc = 0x151938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 4));
    // 0x15193c: 0xa7a3007a  sh          $v1, 0x7A($sp)
    ctx->pc = 0x15193cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x151940: 0xa7a2007c  sh          $v0, 0x7C($sp)
    ctx->pc = 0x151940u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x151944: 0x92440079  lbu         $a0, 0x79($s2)
    ctx->pc = 0x151944u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
    // 0x151948: 0xc0543c8  jal         func_150F20
    ctx->pc = 0x151948u;
    SET_GPR_U32(ctx, 31, 0x151950u);
    ctx->pc = 0x15194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151948u;
            // 0x15194c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F20u;
    if (runtime->hasFunction(0x150F20u)) {
        auto targetFn = runtime->lookupFunction(0x150F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151950u; }
        if (ctx->pc != 0x151950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F20_0x150f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151950u; }
        if (ctx->pc != 0x151950u) { return; }
    }
    ctx->pc = 0x151950u;
label_151950:
    // 0x151950: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x151950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x151954: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x151954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x151958: 0x97a20066  lhu         $v0, 0x66($sp)
    ctx->pc = 0x151958u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x15195c: 0xa6420084  sh          $v0, 0x84($s2)
    ctx->pc = 0x15195cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x151960: 0xc054cdc  jal         func_153370
    ctx->pc = 0x151960u;
    SET_GPR_U32(ctx, 31, 0x151968u);
    ctx->pc = 0x151964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151960u;
            // 0x151964: 0x96440084  lhu         $a0, 0x84($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151968u; }
        if (ctx->pc != 0x151968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153370_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151968u; }
        if (ctx->pc != 0x151968u) { return; }
    }
    ctx->pc = 0x151968u;
label_151968:
    // 0x151968: 0xa6420086  sh          $v0, 0x86($s2)
    ctx->pc = 0x151968u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x15196c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151974: 0xc0ca9d4  jal         func_32A750
    ctx->pc = 0x151974u;
    SET_GPR_U32(ctx, 31, 0x15197Cu);
    ctx->pc = 0x151978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151974u;
            // 0x151978: 0xa6420088  sh          $v0, 0x88($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A750u;
    if (runtime->hasFunction(0x32A750u)) {
        auto targetFn = runtime->lookupFunction(0x32A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15197Cu; }
        if (ctx->pc != 0x15197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A750_0x32a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15197Cu; }
        if (ctx->pc != 0x15197Cu) { return; }
    }
    ctx->pc = 0x15197Cu;
label_15197c:
    // 0x15197c: 0xc054874  jal         func_1521D0
    ctx->pc = 0x15197Cu;
    SET_GPR_U32(ctx, 31, 0x151984u);
    ctx->pc = 0x151980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15197Cu;
            // 0x151980: 0x2644013c  addiu       $a0, $s2, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1521D0u;
    if (runtime->hasFunction(0x1521D0u)) {
        auto targetFn = runtime->lookupFunction(0x1521D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151984u; }
        if (ctx->pc != 0x151984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001521D0_0x1521d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151984u; }
        if (ctx->pc != 0x151984u) { return; }
    }
    ctx->pc = 0x151984u;
label_151984:
    // 0x151984: 0x92440079  lbu         $a0, 0x79($s2)
    ctx->pc = 0x151984u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
    // 0x151988: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15198c: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x15198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x151990: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x151994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151998: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15199c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1519a0: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1519a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1519a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1519A4u;
    {
        const bool branch_taken_0x1519a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519a4) {
            ctx->pc = 0x1519D0u;
            goto label_1519d0;
        }
    }
    ctx->pc = 0x1519ACu;
    // 0x1519ac: 0xc0542e8  jal         func_150BA0
    ctx->pc = 0x1519ACu;
    SET_GPR_U32(ctx, 31, 0x1519B4u);
    ctx->pc = 0x1519B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519ACu;
            // 0x1519b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150BA0u;
    if (runtime->hasFunction(0x150BA0u)) {
        auto targetFn = runtime->lookupFunction(0x150BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B4u; }
        if (ctx->pc != 0x1519B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150BA0_0x150ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519B4u; }
        if (ctx->pc != 0x1519B4u) { return; }
    }
    ctx->pc = 0x1519B4u;
label_1519b4:
    // 0x1519b4: 0x3c03413c  lui         $v1, 0x413C
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16700 << 16));
    // 0x1519b8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1519b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1519bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1519bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1519c0: 0x0  nop
    ctx->pc = 0x1519c0u;
    // NOP
    // 0x1519c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1519c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1519c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1519C8u;
    {
        const bool branch_taken_0x1519c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1519C8u;
            // 0x1519cc: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519c8) {
            ctx->pc = 0x1519F0u;
            goto label_1519f0;
        }
    }
    ctx->pc = 0x1519D0u;
label_1519d0:
    // 0x1519d0: 0xc0542e8  jal         func_150BA0
    ctx->pc = 0x1519D0u;
    SET_GPR_U32(ctx, 31, 0x1519D8u);
    ctx->pc = 0x1519D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1519D0u;
            // 0x1519d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150BA0u;
    if (runtime->hasFunction(0x150BA0u)) {
        auto targetFn = runtime->lookupFunction(0x150BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519D8u; }
        if (ctx->pc != 0x1519D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150BA0_0x150ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1519D8u; }
        if (ctx->pc != 0x1519D8u) { return; }
    }
    ctx->pc = 0x1519D8u;
label_1519d8:
    // 0x1519d8: 0x3c034026  lui         $v1, 0x4026
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16422 << 16));
    // 0x1519dc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1519dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1519e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1519e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1519e4: 0x0  nop
    ctx->pc = 0x1519e4u;
    // NOP
    // 0x1519e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1519e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1519ec: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1519ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1519f0:
    // 0x1519f0: 0x97a60068  lhu         $a2, 0x68($sp)
    ctx->pc = 0x1519f0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1519f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1519f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1519fc: 0x2484e7b8  addiu       $a0, $a0, -0x1848
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961080));
    // 0x151a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a04: 0xa2460078  sb          $a2, 0x78($s2)
    ctx->pc = 0x151a04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x151a08: 0xae45007c  sw          $a1, 0x7C($s2)
    ctx->pc = 0x151a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 5));
    // 0x151a0c: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x151a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
    // 0x151a10: 0xae45004c  sw          $a1, 0x4C($s2)
    ctx->pc = 0x151a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 5));
    // 0x151a14: 0xae450050  sw          $a1, 0x50($s2)
    ctx->pc = 0x151a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 5));
    // 0x151a18: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x151a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
    // 0x151a1c: 0xae440090  sw          $a0, 0x90($s2)
    ctx->pc = 0x151a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 4));
    // 0x151a20: 0xae430108  sw          $v1, 0x108($s2)
    ctx->pc = 0x151a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
    // 0x151a24: 0xa2400116  sb          $zero, 0x116($s2)
    ctx->pc = 0x151a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x151a28: 0xa6400112  sh          $zero, 0x112($s2)
    ctx->pc = 0x151a28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x151a2c: 0xa6400114  sh          $zero, 0x114($s2)
    ctx->pc = 0x151a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 276), (uint16_t)GPR_U32(ctx, 0));
label_151a30:
    // 0x151a30: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151a34: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x151a34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x151a38: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x151a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x151a3c: 0x5460ff84  bnel        $v1, $zero, . + 4 + (-0x7C << 2)
    ctx->pc = 0x151A3Cu;
    {
        const bool branch_taken_0x151a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a3c) {
            ctx->pc = 0x151A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151A3Cu;
            // 0x151a40: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151850;
        }
    }
    ctx->pc = 0x151A44u;
    // 0x151a44: 0x0  nop
    ctx->pc = 0x151a44u;
    // NOP
label_151a48:
    // 0x151a48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151a4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x151A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151A5Cu;
            // 0x151a60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151A64u;
    // 0x151a64: 0x0  nop
    ctx->pc = 0x151a64u;
    // NOP
    // 0x151a68: 0x0  nop
    ctx->pc = 0x151a68u;
    // NOP
    // 0x151a6c: 0x0  nop
    ctx->pc = 0x151a6cu;
    // NOP
label_151a70:
    // 0x151a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151a74: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151a7c: 0x9443f348  lhu         $v1, -0xCB8($v0)
    ctx->pc = 0x151a7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964040)));
    // 0x151a80: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x151a84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x151A84u;
    {
        const bool branch_taken_0x151a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a84) {
            ctx->pc = 0x151AB4u;
            goto label_151ab4;
        }
    }
    ctx->pc = 0x151A8Cu;
    // 0x151a8c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x151a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x151a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151A90u;
    {
        const bool branch_taken_0x151a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a90) {
            ctx->pc = 0x151AA0u;
            goto label_151aa0;
        }
    }
    ctx->pc = 0x151A98u;
    // 0x151a98: 0xc054b18  jal         func_152C60
    ctx->pc = 0x151A98u;
    SET_GPR_U32(ctx, 31, 0x151AA0u);
    ctx->pc = 0x152C60u;
    if (runtime->hasFunction(0x152C60u)) {
        auto targetFn = runtime->lookupFunction(0x152C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AA0u; }
        if (ctx->pc != 0x151AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152C60_0x152c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AA0u; }
        if (ctx->pc != 0x151AA0u) { return; }
    }
    ctx->pc = 0x151AA0u;
label_151aa0:
    // 0x151aa0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x151aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x151aa4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151aa8: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x151aa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x151aac: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x151aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x151ab0: 0xa443f348  sh          $v1, -0xCB8($v0)
    ctx->pc = 0x151ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964040), (uint16_t)GPR_U32(ctx, 3));
label_151ab4:
    // 0x151ab4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151ab8: 0x9442f348  lhu         $v0, -0xCB8($v0)
    ctx->pc = 0x151ab8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964040)));
    // 0x151abc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x151abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x151ac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151AC0u;
    {
        const bool branch_taken_0x151ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ac0) {
            ctx->pc = 0x151AD0u;
            goto label_151ad0;
        }
    }
    ctx->pc = 0x151AC8u;
    // 0x151ac8: 0xc054d1c  jal         func_153470
    ctx->pc = 0x151AC8u;
    SET_GPR_U32(ctx, 31, 0x151AD0u);
    ctx->pc = 0x153470u;
    if (runtime->hasFunction(0x153470u)) {
        auto targetFn = runtime->lookupFunction(0x153470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD0u; }
        if (ctx->pc != 0x151AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153470_0x153470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD0u; }
        if (ctx->pc != 0x151AD0u) { return; }
    }
    ctx->pc = 0x151AD0u;
label_151ad0:
    // 0x151ad0: 0xc054a4c  jal         func_152930
    ctx->pc = 0x151AD0u;
    SET_GPR_U32(ctx, 31, 0x151AD8u);
    ctx->pc = 0x152930u;
    if (runtime->hasFunction(0x152930u)) {
        auto targetFn = runtime->lookupFunction(0x152930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD8u; }
        if (ctx->pc != 0x151AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152930_0x152930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151AD8u; }
        if (ctx->pc != 0x151AD8u) { return; }
    }
    ctx->pc = 0x151AD8u;
label_151ad8:
    // 0x151ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151adc: 0x3e00008  jr          $ra
    ctx->pc = 0x151ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151ADCu;
            // 0x151ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151AE4u;
    // 0x151ae4: 0x0  nop
    ctx->pc = 0x151ae4u;
    // NOP
    // 0x151ae8: 0x0  nop
    ctx->pc = 0x151ae8u;
    // NOP
    // 0x151aec: 0x0  nop
    ctx->pc = 0x151aecu;
    // NOP
    ctx->pc = 0x151af0u;
}
