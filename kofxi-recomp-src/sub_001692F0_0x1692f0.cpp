#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001692F0
// Address: 0x1692f0 - 0x169440
void sub_001692F0_0x1692f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001692F0_0x1692f0");
#endif

    switch (ctx->pc) {
        case 0x16930cu: goto label_16930c;
        case 0x169314u: goto label_169314;
        case 0x169398u: goto label_169398;
        case 0x1693e0u: goto label_1693e0;
        case 0x169408u: goto label_169408;
        case 0x169428u: goto label_169428;
        default: break;
    }

    ctx->pc = 0x1692f0u;

    // 0x1692f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1692f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1692f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1692f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1692f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1692f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1692fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1692fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169304: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x169304u;
    SET_GPR_U32(ctx, 31, 0x16930Cu);
    ctx->pc = 0x169308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169304u;
            // 0x169308: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16930Cu; }
        if (ctx->pc != 0x16930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16930Cu; }
        if (ctx->pc != 0x16930Cu) { return; }
    }
    ctx->pc = 0x16930Cu;
label_16930c:
    // 0x16930c: 0xc05a108  jal         func_168420
    ctx->pc = 0x16930Cu;
    SET_GPR_U32(ctx, 31, 0x169314u);
    ctx->pc = 0x169310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16930Cu;
            // 0x169310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (runtime->hasFunction(0x168420u)) {
        auto targetFn = runtime->lookupFunction(0x168420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169314u; }
        if (ctx->pc != 0x169314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168420_0x168420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169314u; }
        if (ctx->pc != 0x169314u) { return; }
    }
    ctx->pc = 0x169314u;
label_169314:
    // 0x169314: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169314u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169318: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x16931c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x16931cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169320: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169324: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x169324u;
    {
        const bool branch_taken_0x169324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169324) {
            ctx->pc = 0x169328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169324u;
            // 0x169328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169390u;
            goto label_169390;
        }
    }
    ctx->pc = 0x16932Cu;
    // 0x16932c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169330: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169334: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169338: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x16933c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169340: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169340u;
    {
        const bool branch_taken_0x169340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169340) {
            ctx->pc = 0x16938Cu;
            goto label_16938c;
        }
    }
    ctx->pc = 0x169348u;
    // 0x169348: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x16934c: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x16934cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x169350: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169350u;
    {
        const bool branch_taken_0x169350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169350) {
            ctx->pc = 0x16935Cu;
            goto label_16935c;
        }
    }
    ctx->pc = 0x169358u;
    // 0x169358: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16935c:
    // 0x16935c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x16935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169360: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x169364: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x169364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x169368: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16936c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16936Cu;
    {
        const bool branch_taken_0x16936c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16936c) {
            ctx->pc = 0x16938Cu;
            goto label_16938c;
        }
    }
    ctx->pc = 0x169374u;
    // 0x169374: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x169374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16937c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16937Cu;
    {
        const bool branch_taken_0x16937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16937c) {
            ctx->pc = 0x16938Cu;
            goto label_16938c;
        }
    }
    ctx->pc = 0x169384u;
    // 0x169384: 0x3202fffe  andi        $v0, $s0, 0xFFFE
    ctx->pc = 0x169384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x169388: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16938c:
    // 0x16938c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169390:
    // 0x169390: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x169390u;
    SET_GPR_U32(ctx, 31, 0x169398u);
    ctx->pc = 0x168D30u;
    if (runtime->hasFunction(0x168D30u)) {
        auto targetFn = runtime->lookupFunction(0x168D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169398u; }
        if (ctx->pc != 0x169398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D30_0x168d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169398u; }
        if (ctx->pc != 0x169398u) { return; }
    }
    ctx->pc = 0x169398u;
label_169398:
    // 0x169398: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x169398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16939c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x16939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1693a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1693a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1693a4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1693A4u;
    {
        const bool branch_taken_0x1693a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693a4) {
            ctx->pc = 0x1693A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1693A4u;
            // 0x1693a8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1693E8u;
            goto label_1693e8;
        }
    }
    ctx->pc = 0x1693ACu;
    // 0x1693ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1693acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1693b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1693b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693b4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1693b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1693b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1693b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1693bc: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1693bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x1693c0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1693c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1693c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1693c8: 0x24422d10  addiu       $v0, $v0, 0x2D10
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    // 0x1693cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1693d0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1693d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1693d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1693d8: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1693D8u;
    SET_GPR_U32(ctx, 31, 0x1693E0u);
    ctx->pc = 0x1693DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693D8u;
            // 0x1693dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693E0u; }
        if (ctx->pc != 0x1693E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693E0u; }
        if (ctx->pc != 0x1693E0u) { return; }
    }
    ctx->pc = 0x1693E0u;
label_1693e0:
    // 0x1693e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1693E0u;
    {
        const bool branch_taken_0x1693e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693E0u;
            // 0x1693e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693e0) {
            ctx->pc = 0x16942Cu;
            goto label_16942c;
        }
    }
    ctx->pc = 0x1693E8u;
label_1693e8:
    // 0x1693e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1693E8u;
    {
        const bool branch_taken_0x1693e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693e8) {
            ctx->pc = 0x169410u;
            goto label_169410;
        }
    }
    ctx->pc = 0x1693F0u;
    // 0x1693f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1693f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1693f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693f8: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x1693f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x1693fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1693fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169400: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169400u;
    SET_GPR_U32(ctx, 31, 0x169408u);
    ctx->pc = 0x169404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169400u;
            // 0x169404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169408u; }
        if (ctx->pc != 0x169408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169408u; }
        if (ctx->pc != 0x169408u) { return; }
    }
    ctx->pc = 0x169408u;
label_169408:
    // 0x169408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169408u;
    {
        const bool branch_taken_0x169408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169408u;
            // 0x16940c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169408) {
            ctx->pc = 0x16942Cu;
            goto label_16942c;
        }
    }
    ctx->pc = 0x169410u;
label_169410:
    // 0x169410: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169418: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x169418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x16941c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169420: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169420u;
    SET_GPR_U32(ctx, 31, 0x169428u);
    ctx->pc = 0x169424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169420u;
            // 0x169424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169428u; }
        if (ctx->pc != 0x169428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169428u; }
        if (ctx->pc != 0x169428u) { return; }
    }
    ctx->pc = 0x169428u;
label_169428:
    // 0x169428: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16942c:
    // 0x16942c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16942cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169438: 0x3e00008  jr          $ra
    ctx->pc = 0x169438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169438u;
            // 0x16943c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169440u;
    ctx->pc = 0x169440u;
}
