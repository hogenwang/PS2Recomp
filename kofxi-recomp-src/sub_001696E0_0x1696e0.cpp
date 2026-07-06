#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001696E0
// Address: 0x1696e0 - 0x169850
void sub_001696E0_0x1696e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001696E0_0x1696e0");
#endif

    switch (ctx->pc) {
        case 0x169714u: goto label_169714;
        case 0x16971cu: goto label_16971c;
        case 0x1697a0u: goto label_1697a0;
        case 0x1697ecu: goto label_1697ec;
        case 0x169814u: goto label_169814;
        case 0x169834u: goto label_169834;
        default: break;
    }

    ctx->pc = 0x1696e0u;

    // 0x1696e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1696e4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1696e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1696e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1696e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1696ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1696ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1696f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1696f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1696f4: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x1696f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1696f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1696fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1696FCu;
    {
        const bool branch_taken_0x1696fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1696FCu;
            // 0x169700: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696fc) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x169704u;
    // 0x169704: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x169704u;
    {
        const bool branch_taken_0x169704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169704u;
            // 0x169708: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169704) {
            ctx->pc = 0x169838u;
            goto label_169838;
        }
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x16970Cu;
    SET_GPR_U32(ctx, 31, 0x169714u);
    ctx->pc = 0x169710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16970Cu;
            // 0x169710: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169714u; }
        if (ctx->pc != 0x169714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169714u; }
        if (ctx->pc != 0x169714u) { return; }
    }
    ctx->pc = 0x169714u;
label_169714:
    // 0x169714: 0xc05a108  jal         func_168420
    ctx->pc = 0x169714u;
    SET_GPR_U32(ctx, 31, 0x16971Cu);
    ctx->pc = 0x169718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169714u;
            // 0x169718: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168420u;
    if (runtime->hasFunction(0x168420u)) {
        auto targetFn = runtime->lookupFunction(0x168420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16971Cu; }
        if (ctx->pc != 0x16971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168420_0x168420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16971Cu; }
        if (ctx->pc != 0x16971Cu) { return; }
    }
    ctx->pc = 0x16971Cu;
label_16971c:
    // 0x16971c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x16971cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169720: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169724: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169728: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16972c: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16972Cu;
    {
        const bool branch_taken_0x16972c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16972c) {
            ctx->pc = 0x169730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16972Cu;
            // 0x169730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169798u;
            goto label_169798;
        }
    }
    ctx->pc = 0x169734u;
    // 0x169734: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169738: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x16973c: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x16973cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169740: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169744: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169748: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169748u;
    {
        const bool branch_taken_0x169748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169748) {
            ctx->pc = 0x169794u;
            goto label_169794;
        }
    }
    ctx->pc = 0x169750u;
    // 0x169750: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169754: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x169754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x169758: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169758u;
    {
        const bool branch_taken_0x169758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169758) {
            ctx->pc = 0x169764u;
            goto label_169764;
        }
    }
    ctx->pc = 0x169760u;
    // 0x169760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169764:
    // 0x169764: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169768: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x169768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16976c: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x169770: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x169774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169774u;
    {
        const bool branch_taken_0x169774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169774) {
            ctx->pc = 0x169794u;
            goto label_169794;
        }
    }
    ctx->pc = 0x16977Cu;
    // 0x16977c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x16977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x169780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x169784u;
    {
        const bool branch_taken_0x169784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169784) {
            ctx->pc = 0x169794u;
            goto label_169794;
        }
    }
    ctx->pc = 0x16978Cu;
    // 0x16978c: 0x3202fffe  andi        $v0, $s0, 0xFFFE
    ctx->pc = 0x16978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65534);
    // 0x169790: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_169794:
    // 0x169794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169798:
    // 0x169798: 0xc05a34c  jal         func_168D30
    ctx->pc = 0x169798u;
    SET_GPR_U32(ctx, 31, 0x1697A0u);
    ctx->pc = 0x168D30u;
    if (runtime->hasFunction(0x168D30u)) {
        auto targetFn = runtime->lookupFunction(0x168D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697A0u; }
        if (ctx->pc != 0x1697A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168D30_0x168d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697A0u; }
        if (ctx->pc != 0x1697A0u) { return; }
    }
    ctx->pc = 0x1697A0u;
label_1697a0:
    // 0x1697a0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1697a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1697a4: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1697a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1697a8: 0x30830009  andi        $v1, $a0, 0x9
    ctx->pc = 0x1697a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)9);
    // 0x1697ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1697b0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1697B0u;
    {
        const bool branch_taken_0x1697b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1697b0) {
            ctx->pc = 0x1697B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1697B0u;
            // 0x1697b4: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1697F4u;
            goto label_1697f4;
        }
    }
    ctx->pc = 0x1697B8u;
    // 0x1697b8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1697b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1697bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1697bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697c0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1697c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1697c8: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1697c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
    // 0x1697cc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1697ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1697d0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1697d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1697d4: 0x24422d10  addiu       $v0, $v0, 0x2D10
    ctx->pc = 0x1697d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11536));
    // 0x1697d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1697dc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1697dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1697e0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1697e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1697e4: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x1697E4u;
    SET_GPR_U32(ctx, 31, 0x1697ECu);
    ctx->pc = 0x1697E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697E4u;
            // 0x1697e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697ECu; }
        if (ctx->pc != 0x1697ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697ECu; }
        if (ctx->pc != 0x1697ECu) { return; }
    }
    ctx->pc = 0x1697ECu;
label_1697ec:
    // 0x1697ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1697ECu;
    {
        const bool branch_taken_0x1697ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697ECu;
            // 0x1697f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ec) {
            ctx->pc = 0x169838u;
            goto label_169838;
        }
    }
    ctx->pc = 0x1697F4u;
label_1697f4:
    // 0x1697f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1697F4u;
    {
        const bool branch_taken_0x1697f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697f4) {
            ctx->pc = 0x16981Cu;
            goto label_16981c;
        }
    }
    ctx->pc = 0x1697FCu;
    // 0x1697fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169804: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x169804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    // 0x169808: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16980c: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x16980Cu;
    SET_GPR_U32(ctx, 31, 0x169814u);
    ctx->pc = 0x169810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16980Cu;
            // 0x169810: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169814u; }
        if (ctx->pc != 0x169814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169814u; }
        if (ctx->pc != 0x169814u) { return; }
    }
    ctx->pc = 0x169814u;
label_169814:
    // 0x169814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169814u;
    {
        const bool branch_taken_0x169814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169814u;
            // 0x169818: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169814) {
            ctx->pc = 0x169838u;
            goto label_169838;
        }
    }
    ctx->pc = 0x16981Cu;
label_16981c:
    // 0x16981c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16981cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169824: 0x24a51f50  addiu       $a1, $a1, 0x1F50
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8016));
    // 0x169828: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x169828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16982c: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x16982Cu;
    SET_GPR_U32(ctx, 31, 0x169834u);
    ctx->pc = 0x169830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16982Cu;
            // 0x169830: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (runtime->hasFunction(0x1684E0u)) {
        auto targetFn = runtime->lookupFunction(0x1684E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169834u; }
        if (ctx->pc != 0x169834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001684E0_0x1684e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169834u; }
        if (ctx->pc != 0x169834u) { return; }
    }
    ctx->pc = 0x169834u;
label_169834:
    // 0x169834: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_169838:
    // 0x169838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16983c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16983cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169844: 0x3e00008  jr          $ra
    ctx->pc = 0x169844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169844u;
            // 0x169848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16984Cu;
    // 0x16984c: 0x0  nop
    ctx->pc = 0x16984cu;
    // NOP
    ctx->pc = 0x169850u;
}
