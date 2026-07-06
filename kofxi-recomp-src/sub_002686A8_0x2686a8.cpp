#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002686A8
// Address: 0x2686a8 - 0x268928
void sub_002686A8_0x2686a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002686A8_0x2686a8");
#endif

    switch (ctx->pc) {
        case 0x2686fcu: goto label_2686fc;
        case 0x26871cu: goto label_26871c;
        case 0x268738u: goto label_268738;
        case 0x2687a0u: goto label_2687a0;
        case 0x2687e8u: goto label_2687e8;
        case 0x268830u: goto label_268830;
        case 0x268858u: goto label_268858;
        case 0x268874u: goto label_268874;
        case 0x268884u: goto label_268884;
        case 0x268890u: goto label_268890;
        case 0x268894u: goto label_268894;
        case 0x2688a0u: goto label_2688a0;
        case 0x2688e0u: goto label_2688e0;
        case 0x2688f0u: goto label_2688f0;
        default: break;
    }

    ctx->pc = 0x2686a8u;

    // 0x2686a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2686a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2686ac: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2686acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2686b0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2686b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2686b4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2686b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686b8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2686b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2686bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2686bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2686c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2686c4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2686c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2686c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2686cc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2686ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2686d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2686d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2686d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2686d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2686dc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2686dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686e0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2686e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2686e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2686e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2686e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2686ec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2686ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2686f0: 0x26120078  addiu       $s2, $s0, 0x78
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2686f4: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2686F4u;
    SET_GPR_U32(ctx, 31, 0x2686FCu);
    ctx->pc = 0x2686F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686F4u;
            // 0x2686f8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686FCu; }
        if (ctx->pc != 0x2686FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686FCu; }
        if (ctx->pc != 0x2686FCu) { return; }
    }
    ctx->pc = 0x2686FCu;
label_2686fc:
    // 0x2686fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2686fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268700: 0x6c10008  bgez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x268700u;
    {
        const bool branch_taken_0x268700 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x268704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268700u;
            // 0x268704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268700) {
            ctx->pc = 0x268724u;
            goto label_268724;
        }
    }
    ctx->pc = 0x268708u;
    // 0x268708: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26870c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268710: 0x24a57ce0  addiu       $a1, $a1, 0x7CE0
    ctx->pc = 0x268710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31968));
    // 0x268714: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x268714u;
    SET_GPR_U32(ctx, 31, 0x26871Cu);
    ctx->pc = 0x268718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268714u;
            // 0x268718: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26871Cu; }
        if (ctx->pc != 0x26871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26871Cu; }
        if (ctx->pc != 0x26871Cu) { return; }
    }
    ctx->pc = 0x26871Cu;
label_26871c:
    // 0x26871c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26871Cu;
            // 0x268720: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26871c) {
            ctx->pc = 0x2688F4u;
            goto label_2688f4;
        }
    }
    ctx->pc = 0x268724u;
label_268724:
    // 0x268724: 0x12e20044  beq         $s7, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x268724u;
    {
        const bool branch_taken_0x268724 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x268728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268724u;
            // 0x268728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268724) {
            ctx->pc = 0x268838u;
            goto label_268838;
        }
    }
    ctx->pc = 0x26872Cu;
    // 0x26872c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26872cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268730: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268730u;
    SET_GPR_U32(ctx, 31, 0x268738u);
    ctx->pc = 0x268734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268730u;
            // 0x268734: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268738u; }
        if (ctx->pc != 0x268738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268738u; }
        if (ctx->pc != 0x268738u) { return; }
    }
    ctx->pc = 0x268738u;
label_268738:
    // 0x268738: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x268738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26873c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x26873cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x268740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268744: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268744u;
    {
        const bool branch_taken_0x268744 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x268748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268744u;
            // 0x268748: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268744) {
            ctx->pc = 0x268758u;
            goto label_268758;
        }
    }
    ctx->pc = 0x26874Cu;
    // 0x26874c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268750: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x268750u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x268754: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x268754u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_268758:
    // 0x268758: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x268758u;
    {
        const bool branch_taken_0x268758 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x268758) {
            ctx->pc = 0x2687A0u;
            goto label_2687a0;
        }
    }
    ctx->pc = 0x268760u;
    // 0x268760: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x268760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x268764: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x268764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x268768: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x268768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26876c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x26876cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x268770: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268770u;
    {
        const bool branch_taken_0x268770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268770u;
            // 0x268774: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268770) {
            ctx->pc = 0x268788u;
            goto label_268788;
        }
    }
    ctx->pc = 0x268778u;
    // 0x268778: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26877c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x26877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268780u;
    {
        const bool branch_taken_0x268780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268780u;
            // 0x268784: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268780) {
            ctx->pc = 0x26878Cu;
            goto label_26878c;
        }
    }
    ctx->pc = 0x268788u;
label_268788:
    // 0x268788: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26878c:
    // 0x26878c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268790: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268794: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x268794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268798: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x268798u;
    SET_GPR_U32(ctx, 31, 0x2687A0u);
    ctx->pc = 0x26879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268798u;
            // 0x26879c: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (runtime->hasFunction(0x22D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687A0u; }
        if (ctx->pc != 0x2687A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3F0_0x22d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687A0u; }
        if (ctx->pc != 0x2687A0u) { return; }
    }
    ctx->pc = 0x2687A0u;
label_2687a0:
    // 0x2687a0: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2687A0u;
    {
        const bool branch_taken_0x2687a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687a0) {
            ctx->pc = 0x2687E8u;
            goto label_2687e8;
        }
    }
    ctx->pc = 0x2687A8u;
    // 0x2687a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2687a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2687ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2687acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2687b0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2687b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2687b4: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x2687b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2687b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2687B8u;
    {
        const bool branch_taken_0x2687b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2687B8u;
            // 0x2687bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687b8) {
            ctx->pc = 0x2687D0u;
            goto label_2687d0;
        }
    }
    ctx->pc = 0x2687C0u;
    // 0x2687c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2687c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2687c4: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2687c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2687c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2687C8u;
    {
        const bool branch_taken_0x2687c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2687C8u;
            // 0x2687cc: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687c8) {
            ctx->pc = 0x2687D4u;
            goto label_2687d4;
        }
    }
    ctx->pc = 0x2687D0u;
label_2687d0:
    // 0x2687d0: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2687d4:
    // 0x2687d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2687d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2687d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2687dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687e0: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x2687E0u;
    SET_GPR_U32(ctx, 31, 0x2687E8u);
    ctx->pc = 0x2687E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2687E0u;
            // 0x2687e4: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (runtime->hasFunction(0x22D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687E8u; }
        if (ctx->pc != 0x2687E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3F0_0x22d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687E8u; }
        if (ctx->pc != 0x2687E8u) { return; }
    }
    ctx->pc = 0x2687E8u;
label_2687e8:
    // 0x2687e8: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x2687E8u;
    {
        const bool branch_taken_0x2687e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2687E8u;
            // 0x2687ec: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687e8) {
            ctx->pc = 0x268834u;
            goto label_268834;
        }
    }
    ctx->pc = 0x2687F0u;
    // 0x2687f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2687f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2687f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2687f8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2687f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2687fc: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x2687fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x268800: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268800u;
    {
        const bool branch_taken_0x268800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268800u;
            // 0x268804: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268800) {
            ctx->pc = 0x268818u;
            goto label_268818;
        }
    }
    ctx->pc = 0x268808u;
    // 0x268808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26880c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x26880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268810: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268810u;
    {
        const bool branch_taken_0x268810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268810u;
            // 0x268814: 0x24510001  addiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268810) {
            ctx->pc = 0x26881Cu;
            goto label_26881c;
        }
    }
    ctx->pc = 0x268818u;
label_268818:
    // 0x268818: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_26881c:
    // 0x26881c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268820: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x268820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268824: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x268824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268828: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x268828u;
    SET_GPR_U32(ctx, 31, 0x268830u);
    ctx->pc = 0x26882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268828u;
            // 0x26882c: 0x2519021  addu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (runtime->hasFunction(0x22D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268830u; }
        if (ctx->pc != 0x268830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3F0_0x22d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268830u; }
        if (ctx->pc != 0x268830u) { return; }
    }
    ctx->pc = 0x268830u;
label_268830:
    // 0x268830: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_268834:
    // 0x268834: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x268834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_268838:
    // 0x268838: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x268838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26883c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268840: 0x96110000  lhu         $s1, 0x0($s0)
    ctx->pc = 0x268840u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268848: 0xa2170003  sb          $s7, 0x3($s0)
    ctx->pc = 0x268848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x26884c: 0xae1e0014  sw          $fp, 0x14($s0)
    ctx->pc = 0x26884cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 30));
    // 0x268850: 0xc09754a  jal         func_25D528
    ctx->pc = 0x268850u;
    SET_GPR_U32(ctx, 31, 0x268858u);
    ctx->pc = 0x268854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268850u;
            // 0x268854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D528u;
    if (runtime->hasFunction(0x25D528u)) {
        auto targetFn = runtime->lookupFunction(0x25D528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268858u; }
        if (ctx->pc != 0x268858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D528_0x25d528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268858u; }
        if (ctx->pc != 0x268858u) { return; }
    }
    ctx->pc = 0x268858u;
label_268858:
    // 0x268858: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x268858u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26885c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x26885cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x268860: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x268860u;
    {
        const bool branch_taken_0x268860 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x268864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268860u;
            // 0x268864: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268860) {
            ctx->pc = 0x268890u;
            goto label_268890;
        }
    }
    ctx->pc = 0x268868u;
    // 0x268868: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x268868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x26886c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26886Cu;
    SET_GPR_U32(ctx, 31, 0x268874u);
    ctx->pc = 0x268870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26886Cu;
            // 0x268870: 0x26107d10  addiu       $s0, $s0, 0x7D10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268874u; }
        if (ctx->pc != 0x268874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268874u; }
        if (ctx->pc != 0x268874u) { return; }
    }
    ctx->pc = 0x268874u;
label_268874:
    // 0x268874: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26887c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26887Cu;
    SET_GPR_U32(ctx, 31, 0x268884u);
    ctx->pc = 0x268880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26887Cu;
            // 0x268880: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268884u; }
        if (ctx->pc != 0x268884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268884u; }
        if (ctx->pc != 0x268884u) { return; }
    }
    ctx->pc = 0x268884u;
label_268884:
    // 0x268884: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x268884u;
    {
        const bool branch_taken_0x268884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268884u;
            // 0x268888: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268884) {
            ctx->pc = 0x2688F4u;
            goto label_2688f4;
        }
    }
    ctx->pc = 0x26888Cu;
    // 0x26888c: 0x0  nop
    ctx->pc = 0x26888cu;
    // NOP
label_268890:
    // 0x268890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268894:
    // 0x268894: 0x24060278  addiu       $a2, $zero, 0x278
    ctx->pc = 0x268894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x268898: 0xc09765c  jal         func_25D970
    ctx->pc = 0x268898u;
    SET_GPR_U32(ctx, 31, 0x2688A0u);
    ctx->pc = 0x26889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268898u;
            // 0x26889c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D970u;
    if (runtime->hasFunction(0x25D970u)) {
        auto targetFn = runtime->lookupFunction(0x25D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688A0u; }
        if (ctx->pc != 0x2688A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025D970_0x25d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688A0u; }
        if (ctx->pc != 0x2688A0u) { return; }
    }
    ctx->pc = 0x2688A0u;
label_2688a0:
    // 0x2688a0: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x2688a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2688a4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2688a4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2688a8: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2688A8u;
    {
        const bool branch_taken_0x2688a8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2688a8) {
            ctx->pc = 0x2688C8u;
            goto label_2688c8;
        }
    }
    ctx->pc = 0x2688B0u;
    // 0x2688b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2688b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2688b4: 0x145efff6  bne         $v0, $fp, . + 4 + (-0xA << 2)
    ctx->pc = 0x2688B4u;
    {
        const bool branch_taken_0x2688b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2688B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2688B4u;
            // 0x2688b8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688b4) {
            ctx->pc = 0x268890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268890;
        }
    }
    ctx->pc = 0x2688BCu;
    // 0x2688bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2688bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2688c0: 0x1456fff4  bne         $v0, $s6, . + 4 + (-0xC << 2)
    ctx->pc = 0x2688C0u;
    {
        const bool branch_taken_0x2688c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2688C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2688C0u;
            // 0x2688c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688c0) {
            ctx->pc = 0x268894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268894;
        }
    }
    ctx->pc = 0x2688C8u;
label_2688c8:
    // 0x2688c8: 0x621000a  bgez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2688C8u;
    {
        const bool branch_taken_0x2688c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2688CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2688C8u;
            // 0x2688cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688c8) {
            ctx->pc = 0x2688F4u;
            goto label_2688f4;
        }
    }
    ctx->pc = 0x2688D0u;
    // 0x2688d0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x2688d4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2688d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688d8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2688D8u;
    SET_GPR_U32(ctx, 31, 0x2688E0u);
    ctx->pc = 0x2688DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688D8u;
            // 0x2688dc: 0x26107d50  addiu       $s0, $s0, 0x7D50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688E0u; }
        if (ctx->pc != 0x2688E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688E0u; }
        if (ctx->pc != 0x2688E0u) { return; }
    }
    ctx->pc = 0x2688E0u;
label_2688e0:
    // 0x2688e0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2688e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2688e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2688e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688e8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2688E8u;
    SET_GPR_U32(ctx, 31, 0x2688F0u);
    ctx->pc = 0x2688ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688E8u;
            // 0x2688ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688F0u; }
        if (ctx->pc != 0x2688F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688F0u; }
        if (ctx->pc != 0x2688F0u) { return; }
    }
    ctx->pc = 0x2688F0u;
label_2688f0:
    // 0x2688f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2688f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2688f4:
    // 0x2688f4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2688f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2688f8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2688f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2688fc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2688fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268900: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x268900u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268904: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x268904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268908: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x268908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26890c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26890cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268910: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x268910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268914: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x268914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268918: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x268918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26891c: 0x3e00008  jr          $ra
    ctx->pc = 0x26891Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26891Cu;
            // 0x268920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268924u;
    // 0x268924: 0x0  nop
    ctx->pc = 0x268924u;
    // NOP
    ctx->pc = 0x268928u;
}
