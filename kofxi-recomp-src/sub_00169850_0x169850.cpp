#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169850
// Address: 0x169850 - 0x1699a0
void sub_00169850_0x169850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169850_0x169850");
#endif

    switch (ctx->pc) {
        case 0x16986cu: goto label_16986c;
        case 0x169874u: goto label_169874;
        case 0x1698f8u: goto label_1698f8;
        case 0x169940u: goto label_169940;
        case 0x169968u: goto label_169968;
        case 0x169988u: goto label_169988;
        default: break;
    }

    ctx->pc = 0x169850u;

    // 0x169850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169854: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16985c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169864: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x169864u;
    SET_GPR_U32(ctx, 31, 0x16986Cu);
    ctx->pc = 0x169868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169864u;
            // 0x169868: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16986Cu; }
        if (ctx->pc != 0x16986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16986Cu; }
        if (ctx->pc != 0x16986Cu) { return; }
    }
    ctx->pc = 0x16986Cu;
label_16986c:
    // 0x16986c: 0xc05a108  jal         func_168420
    ctx->pc = 0x16986Cu;
    SET_GPR_U32(ctx, 31, 0x169874u);
    ctx->pc = 0x169870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16986Cu;
            // 0x169870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (runtime->hasFunction(0x168420u)) {
        auto targetFn = runtime->lookupFunction(0x168420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169874u; }
        if (ctx->pc != 0x169874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168420_0x168420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169874u; }
        if (ctx->pc != 0x169874u) { return; }
    }
    ctx->pc = 0x169874u;
label_169874:
    // 0x169874: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169878: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x16987c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x16987cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169880: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169884: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x169884u;
    {
        const bool branch_taken_0x169884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169884) {
            ctx->pc = 0x169888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169884u;
            // 0x169888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1698F0u;
            goto label_1698f0;
        }
    }
    ctx->pc = 0x16988Cu;
    // 0x16988c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169890: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169894: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169898: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x16989c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1698a0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1698A0u;
    {
        const bool branch_taken_0x1698a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1698a0) {
            ctx->pc = 0x1698ECu;
            goto label_1698ec;
        }
    }
    ctx->pc = 0x1698A8u;
    // 0x1698a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1698ac: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x1698acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x1698b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1698B0u;
    {
        const bool branch_taken_0x1698b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698b0) {
            ctx->pc = 0x1698BCu;
            goto label_1698bc;
        }
    }
    ctx->pc = 0x1698B8u;
    // 0x1698b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1698b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1698bc:
    // 0x1698bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1698c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1698c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1698c4: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x1698c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1698c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1698cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1698CCu;
    {
        const bool branch_taken_0x1698cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698cc) {
            ctx->pc = 0x1698ECu;
            goto label_1698ec;
        }
    }
    ctx->pc = 0x1698D4u;
    // 0x1698d4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1698d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1698d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1698d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1698dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1698DCu;
    {
        const bool branch_taken_0x1698dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698dc) {
            ctx->pc = 0x1698ECu;
            goto label_1698ec;
        }
    }
    ctx->pc = 0x1698E4u;
    // 0x1698e4: 0x3202fffe  andi        $v0, $s0, 0xFFFE
    ctx->pc = 0x1698e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x1698e8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1698e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1698ec:
    // 0x1698ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1698ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1698f0:
    // 0x1698f0: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x1698F0u;
    SET_GPR_U32(ctx, 31, 0x1698F8u);
    ctx->pc = 0x168D30u;
    if (runtime->hasFunction(0x168D30u)) {
        auto targetFn = runtime->lookupFunction(0x168D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698F8u; }
        if (ctx->pc != 0x1698F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D30_0x168d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698F8u; }
        if (ctx->pc != 0x1698F8u) { return; }
    }
    ctx->pc = 0x1698F8u;
label_1698f8:
    // 0x1698f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1698f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1698fc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1698fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169900: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x169900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x169904: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x169904u;
    {
        const bool branch_taken_0x169904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169904) {
            ctx->pc = 0x169908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169904u;
            // 0x169908: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x169948u;
            goto label_169948;
        }
    }
    ctx->pc = 0x16990Cu;
    // 0x16990c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x169910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x169910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169914: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169918: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16991c: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x16991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x169920: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169924: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x169928: 0x24422d10  addiu       $v0, $v0, 0x2D10
    ctx->pc = 0x169928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    // 0x16992c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169930: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169934: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x169934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169938: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169938u;
    SET_GPR_U32(ctx, 31, 0x169940u);
    ctx->pc = 0x16993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169938u;
            // 0x16993c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169940u; }
        if (ctx->pc != 0x169940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169940u; }
        if (ctx->pc != 0x169940u) { return; }
    }
    ctx->pc = 0x169940u;
label_169940:
    // 0x169940: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x169940u;
    {
        const bool branch_taken_0x169940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169940u;
            // 0x169944: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169940) {
            ctx->pc = 0x16998Cu;
            goto label_16998c;
        }
    }
    ctx->pc = 0x169948u;
label_169948:
    // 0x169948: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169948u;
    {
        const bool branch_taken_0x169948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169948) {
            ctx->pc = 0x169970u;
            goto label_169970;
        }
    }
    ctx->pc = 0x169950u;
    // 0x169950: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169958: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x16995c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16995cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169960: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 31, 0x169968u);
    ctx->pc = 0x169964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169960u;
            // 0x169964: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169968u; }
        if (ctx->pc != 0x169968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169968u; }
        if (ctx->pc != 0x169968u) { return; }
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169968u;
    {
        const bool branch_taken_0x169968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169968u;
            // 0x16996c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169968) {
            ctx->pc = 0x16998Cu;
            goto label_16998c;
        }
    }
    ctx->pc = 0x169970u;
label_169970:
    // 0x169970: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169978: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x169978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x16997c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169980: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169980u;
    SET_GPR_U32(ctx, 31, 0x169988u);
    ctx->pc = 0x169984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169980u;
            // 0x169984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169988u; }
        if (ctx->pc != 0x169988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169988u; }
        if (ctx->pc != 0x169988u) { return; }
    }
    ctx->pc = 0x169988u;
label_169988:
    // 0x169988: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16998c:
    // 0x16998c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169998: 0x3e00008  jr          $ra
    ctx->pc = 0x169998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169998u;
            // 0x16999c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1699A0u;
    ctx->pc = 0x1699a0u;
}
