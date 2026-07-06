#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238710
// Address: 0x238710 - 0x238c18
void sub_00238710_0x238710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238710_0x238710");
#endif

    switch (ctx->pc) {
        case 0x23875cu: goto label_23875c;
        case 0x238780u: goto label_238780;
        case 0x2387a0u: goto label_2387a0;
        case 0x2387bcu: goto label_2387bc;
        case 0x238884u: goto label_238884;
        case 0x238904u: goto label_238904;
        case 0x238950u: goto label_238950;
        case 0x238980u: goto label_238980;
        case 0x238990u: goto label_238990;
        case 0x2389b8u: goto label_2389b8;
        case 0x2389e0u: goto label_2389e0;
        case 0x238a24u: goto label_238a24;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a54u: goto label_238a54;
        case 0x238a80u: goto label_238a80;
        case 0x238a94u: goto label_238a94;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ad4u: goto label_238ad4;
        case 0x238aecu: goto label_238aec;
        case 0x238af4u: goto label_238af4;
        case 0x238b28u: goto label_238b28;
        case 0x238b38u: goto label_238b38;
        case 0x238b40u: goto label_238b40;
        case 0x238b50u: goto label_238b50;
        case 0x238b68u: goto label_238b68;
        case 0x238b94u: goto label_238b94;
        case 0x238bc4u: goto label_238bc4;
        case 0x238be4u: goto label_238be4;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bfcu: goto label_238bfc;
        default: break;
    }

    ctx->pc = 0x238710u;

label_238710:
    // 0x238710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x238710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x238714: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238718: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x238718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23871c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x238720: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x238724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x238728: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x238728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x23872c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x238730: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x238730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x238734: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x238734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x238738: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x238738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23873c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238740: 0x8ce54e3c  lw          $a1, 0x4E3C($a3)
    ctx->pc = 0x238740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20028)));
    // 0x238744: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x238744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x238748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238748u;
    {
        const bool branch_taken_0x238748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238748u;
            // 0x23874c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238748) {
            ctx->pc = 0x238760u;
            goto label_238760;
        }
    }
    ctx->pc = 0x238750u;
    // 0x238750: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x238750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x238754: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x238754u;
    SET_GPR_U32(ctx, 31, 0x23875Cu);
    ctx->pc = 0x238758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238754u;
            // 0x238758: 0x24844f50  addiu       $a0, $a0, 0x4F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23875Cu; }
        if (ctx->pc != 0x23875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23875Cu; }
        if (ctx->pc != 0x23875Cu) { return; }
    }
    ctx->pc = 0x23875Cu;
label_23875c:
    // 0x23875c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x23875cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_238760:
    // 0x238760: 0x8ce34e80  lw          $v1, 0x4E80($a3)
    ctx->pc = 0x238760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20096)));
    // 0x238764: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x238764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238768: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23876c: 0x8ce44e48  lw          $a0, 0x4E48($a3)
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20040)));
    // 0x238770: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238770u;
    {
        const bool branch_taken_0x238770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238770u;
            // 0x238774: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238770) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238778u;
    // 0x238778: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x238778u;
    SET_GPR_U32(ctx, 31, 0x238780u);
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238780u; }
        if (ctx->pc != 0x238780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238780u; }
        if (ctx->pc != 0x238780u) { return; }
    }
    ctx->pc = 0x238780u;
label_238780:
    // 0x238780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238784: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x238784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238788: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x238788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_23878c:
    // 0x23878c: 0x8ce44e4c  lw          $a0, 0x4E4C($a3)
    ctx->pc = 0x23878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20044)));
    // 0x238790: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238790u;
    {
        const bool branch_taken_0x238790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238790u;
            // 0x238794: 0x26350006  addiu       $s5, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238790) {
            ctx->pc = 0x2387B0u;
            goto label_2387b0;
        }
    }
    ctx->pc = 0x238798u;
    // 0x238798: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x238798u;
    SET_GPR_U32(ctx, 31, 0x2387A0u);
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2387A0u; }
        if (ctx->pc != 0x2387A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2387A0u; }
        if (ctx->pc != 0x2387A0u) { return; }
    }
    ctx->pc = 0x2387A0u;
label_2387a0:
    // 0x2387a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2387a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387a4: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2387a8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2387ac: 0x26350006  addiu       $s5, $s1, 0x6
    ctx->pc = 0x2387acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_2387b0:
    // 0x2387b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2387b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387b4: 0xc08e140  jal         func_238500
    ctx->pc = 0x2387B4u;
    SET_GPR_U32(ctx, 31, 0x2387BCu);
    ctx->pc = 0x2387B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2387B4u;
            // 0x2387b8: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238500u;
    if (runtime->hasFunction(0x238500u)) {
        auto targetFn = runtime->lookupFunction(0x238500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2387BCu; }
        if (ctx->pc != 0x2387BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238500_0x238500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2387BCu; }
        if (ctx->pc != 0x2387BCu) { return; }
    }
    ctx->pc = 0x2387BCu;
label_2387bc:
    // 0x2387bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2387bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387c0: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2387C0u;
    {
        const bool branch_taken_0x2387c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2387c0) {
            ctx->pc = 0x2387C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2387C0u;
            // 0x2387c4: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2387D0u;
            goto label_2387d0;
        }
    }
    ctx->pc = 0x2387C8u;
    // 0x2387c8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2387C8u;
    {
        const bool branch_taken_0x2387c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2387C8u;
            // 0x2387cc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387c8) {
            ctx->pc = 0x238990u;
            goto label_238990;
        }
    }
    ctx->pc = 0x2387D0u;
label_2387d0:
    // 0x2387d0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2387d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2387d4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2387d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2387d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2387d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2387dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2387dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2387e0: 0x262400ff  addiu       $a0, $s1, 0xFF
    ctx->pc = 0x2387e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 255));
    // 0x2387e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2387e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2387e8: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2387e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2387ec: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2387ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2387f0: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x2387f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x2387f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2387f8: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x2387f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x2387fc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2387fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238804: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238808: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23880c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23880cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238810: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x238810u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238818: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238818u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23881c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238820: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x238820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x238824: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238828: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x238828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x23882c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23882cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238830: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x238830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x238834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238838: 0x8c434e48  lw          $v1, 0x4E48($v0)
    ctx->pc = 0x238838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20040)));
    // 0x23883c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x23883Cu;
    {
        const bool branch_taken_0x23883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23883Cu;
            // 0x238840: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23883c) {
            ctx->pc = 0x23888Cu;
            goto label_23888c;
        }
    }
    ctx->pc = 0x238844u;
    // 0x238844: 0xd2182a  slt         $v1, $a2, $s2
    ctx->pc = 0x238844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x238848: 0x264200ff  addiu       $v0, $s2, 0xFF
    ctx->pc = 0x238848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 255));
    // 0x23884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238850: 0x243100b  movn        $v0, $s2, $v1
    ctx->pc = 0x238850u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x238854: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x238854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x238858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23885c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23885cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238860: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x238860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238864: 0xa0720000  sb          $s2, 0x0($v1)
    ctx->pc = 0x238864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x238868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23886c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238870: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238874: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x238874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238878: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x23887c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x23887Cu;
    SET_GPR_U32(ctx, 31, 0x238884u);
    ctx->pc = 0x238880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23887Cu;
            // 0x238880: 0x8c454e48  lw          $a1, 0x4E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238884u; }
        if (ctx->pc != 0x238884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238884u; }
        if (ctx->pc != 0x238884u) { return; }
    }
    ctx->pc = 0x238884u;
label_238884:
    // 0x238884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238884u;
    {
        const bool branch_taken_0x238884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238884u;
            // 0x238888: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238884) {
            ctx->pc = 0x2388A0u;
            goto label_2388a0;
        }
    }
    ctx->pc = 0x23888Cu;
label_23888c:
    // 0x23888c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x23888cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238890: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238894: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23889c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x23889cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2388a0:
    // 0x2388a0: 0x8ce24e4c  lw          $v0, 0x4E4C($a3)
    ctx->pc = 0x2388a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20044)));
    // 0x2388a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2388A4u;
    {
        const bool branch_taken_0x2388a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2388A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2388A4u;
            // 0x2388a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2388a4) {
            ctx->pc = 0x238908u;
            goto label_238908;
        }
    }
    ctx->pc = 0x2388ACu;
    // 0x2388ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2388acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2388b0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2388b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2388b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2388b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2388b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2388bc: 0x73182a  slt         $v1, $v1, $s3
    ctx->pc = 0x2388bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2388c0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2388c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2388c4: 0x266200ff  addiu       $v0, $s3, 0xFF
    ctx->pc = 0x2388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 255));
    // 0x2388c8: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x2388c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x2388cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2388ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2388d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2388d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388d4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2388d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2388d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2388dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2388dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2388e0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2388e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388e4: 0xa0730000  sb          $s3, 0x0($v1)
    ctx->pc = 0x2388e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x2388e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2388ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2388ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2388f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2388f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2388f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2388f8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2388fc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2388FCu;
    SET_GPR_U32(ctx, 31, 0x238904u);
    ctx->pc = 0x238900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2388FCu;
            // 0x238900: 0x8c454e4c  lw          $a1, 0x4E4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20044)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238904u; }
        if (ctx->pc != 0x238904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238904u; }
        if (ctx->pc != 0x238904u) { return; }
    }
    ctx->pc = 0x238904u;
label_238904:
    // 0x238904: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x238904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_238908:
    // 0x238908: 0x8ce24e80  lw          $v0, 0x4E80($a3)
    ctx->pc = 0x238908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20096)));
    // 0x23890c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23890Cu;
    {
        const bool branch_taken_0x23890c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23890Cu;
            // 0x238910: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23890c) {
            ctx->pc = 0x23895Cu;
            goto label_23895c;
        }
    }
    ctx->pc = 0x238914u;
    // 0x238914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23891c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23891cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238920: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x238920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238928: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x238928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23892c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x23892cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238930: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x238930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238934: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238938: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23893c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23893cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238940: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x238940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238948: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x238948u;
    SET_GPR_U32(ctx, 31, 0x238950u);
    ctx->pc = 0x23894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238948u;
            // 0x23894c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238950u; }
        if (ctx->pc != 0x238950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238950u; }
        if (ctx->pc != 0x238950u) { return; }
    }
    ctx->pc = 0x238950u;
label_238950:
    // 0x238950: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238954: 0x8ce24e80  lw          $v0, 0x4E80($a3)
    ctx->pc = 0x238954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20096)));
    // 0x238958: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x238958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23895c:
    // 0x23895c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x23895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x238960: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x238960u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x238964: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x238964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x238968: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x238968u;
    {
        const bool branch_taken_0x238968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x23896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238968u;
            // 0x23896c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238968) {
            ctx->pc = 0x238984u;
            goto label_238984;
        }
    }
    ctx->pc = 0x238970u;
    // 0x238970: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238974: 0x24844f70  addiu       $a0, $a0, 0x4F70
    ctx->pc = 0x238974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20336));
    // 0x238978: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x238978u;
    SET_GPR_U32(ctx, 31, 0x238980u);
    ctx->pc = 0x23897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238978u;
            // 0x23897c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238980u; }
        if (ctx->pc != 0x238980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238980u; }
        if (ctx->pc != 0x238980u) { return; }
    }
    ctx->pc = 0x238980u;
label_238980:
    // 0x238980: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x238980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_238984:
    // 0x238984: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x238984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238988: 0xc08e066  jal         func_238198
    ctx->pc = 0x238988u;
    SET_GPR_U32(ctx, 31, 0x238990u);
    ctx->pc = 0x23898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238988u;
            // 0x23898c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238198u;
    if (runtime->hasFunction(0x238198u)) {
        auto targetFn = runtime->lookupFunction(0x238198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238990u; }
        if (ctx->pc != 0x238990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238198_0x238198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238990u; }
        if (ctx->pc != 0x238990u) { return; }
    }
    ctx->pc = 0x238990u;
label_238990:
    // 0x238990: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x238990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x238994: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x238994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238998: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x238998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23899c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23899cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2389a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2389a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2389a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2389a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2389a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2389a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2389ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2389acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2389b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2389B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2389B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389B0u;
            // 0x2389b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2389B8u;
label_2389b8:
    // 0x2389b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2389bc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2389c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2389c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2389c4: 0x24a54fb0  addiu       $a1, $a1, 0x4FB0
    ctx->pc = 0x2389c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20400));
    // 0x2389c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2389c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2389ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2389d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2389d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2389d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2389d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2389d8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2389D8u;
    SET_GPR_U32(ctx, 31, 0x2389E0u);
    ctx->pc = 0x2389DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2389D8u;
            // 0x2389dc: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    }
    ctx->pc = 0x2389E0u;
label_2389e0:
    // 0x2389e0: 0x8e034e3c  lw          $v1, 0x4E3C($s0)
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20028)));
    // 0x2389e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2389e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2389e8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2389E8u;
    {
        const bool branch_taken_0x2389e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2389ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389E8u;
            // 0x2389ec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389e8) {
            ctx->pc = 0x238A4Cu;
            goto label_238a4c;
        }
    }
    ctx->pc = 0x2389F0u;
    // 0x2389f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2389F0u;
    {
        const bool branch_taken_0x2389f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389F0u;
            // 0x2389f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389f0) {
            ctx->pc = 0x238A08u;
            goto label_238a08;
        }
    }
    ctx->pc = 0x2389F8u;
    // 0x2389f8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2389F8u;
    {
        const bool branch_taken_0x2389f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2389FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389F8u;
            // 0x2389fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389f8) {
            ctx->pc = 0x238A1Cu;
            goto label_238a1c;
        }
    }
    ctx->pc = 0x238A00u;
    // 0x238a00: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x238A00u;
    {
        const bool branch_taken_0x238a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A00u;
            // 0x238a04: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a00) {
            ctx->pc = 0x238B58u;
            goto label_238b58;
        }
    }
    ctx->pc = 0x238A08u;
label_238a08:
    // 0x238a08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238a0c: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x238A0Cu;
    {
        const bool branch_taken_0x238a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A0Cu;
            // 0x238a10: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a0c) {
            ctx->pc = 0x238B48u;
            goto label_238b48;
        }
    }
    ctx->pc = 0x238A14u;
    // 0x238a14: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x238A14u;
    {
        const bool branch_taken_0x238a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A14u;
            // 0x238a18: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a14) {
            ctx->pc = 0x238B58u;
            goto label_238b58;
        }
    }
    ctx->pc = 0x238A1Cu;
label_238a1c:
    // 0x238a1c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x238A1Cu;
    SET_GPR_U32(ctx, 31, 0x238A24u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A24u; }
        if (ctx->pc != 0x238A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A24u; }
        if (ctx->pc != 0x238A24u) { return; }
    }
    ctx->pc = 0x238A24u;
label_238a24:
    // 0x238a24: 0x8e034e78  lw          $v1, 0x4E78($s0)
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20088)));
    // 0x238a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238a34: 0xc08e1c4  jal         func_238710
    ctx->pc = 0x238A34u;
    SET_GPR_U32(ctx, 31, 0x238A3Cu);
    ctx->pc = 0x238A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A34u;
            // 0x238a38: 0xae034e78  sw          $v1, 0x4E78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238710u;
    goto label_238710;
    ctx->pc = 0x238A3Cu;
label_238a3c:
    // 0x238a3c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x238A3Cu;
    {
        const bool branch_taken_0x238a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a3c) {
            ctx->pc = 0x238B30u;
            goto label_238b30;
        }
    }
    ctx->pc = 0x238A44u;
    // 0x238a44: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x238A44u;
    {
        const bool branch_taken_0x238a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A44u;
            // 0x238a48: 0x8e044e78  lw          $a0, 0x4E78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a44) {
            ctx->pc = 0x238B00u;
            goto label_238b00;
        }
    }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x238A4Cu;
    SET_GPR_U32(ctx, 31, 0x238A54u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A54u; }
        if (ctx->pc != 0x238A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A54u; }
        if (ctx->pc != 0x238A54u) { return; }
    }
    ctx->pc = 0x238A54u;
label_238a54:
    // 0x238a54: 0x8e034e7c  lw          $v1, 0x4E7C($s0)
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20092)));
    // 0x238a58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238a60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x238a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x238a64: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x238A64u;
    {
        const bool branch_taken_0x238a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A64u;
            // 0x238a68: 0xae034e7c  sw          $v1, 0x4E7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a64) {
            ctx->pc = 0x238AECu;
            goto label_238aec;
        }
    }
    ctx->pc = 0x238A6Cu;
    // 0x238a6c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x238a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x238a70: 0x26044e40  addiu       $a0, $s0, 0x4E40
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20032));
    // 0x238a74: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x238a78: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x238A78u;
    SET_GPR_U32(ctx, 31, 0x238A80u);
    ctx->pc = 0x238A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A78u;
            // 0x238a7c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A80u; }
        if (ctx->pc != 0x238A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A80u; }
        if (ctx->pc != 0x238A80u) { return; }
    }
    ctx->pc = 0x238A80u;
label_238a80:
    // 0x238a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a84: 0xae004e7c  sw          $zero, 0x4E7C($s0)
    ctx->pc = 0x238a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20092), GPR_U32(ctx, 0));
    // 0x238a88: 0xae034e3c  sw          $v1, 0x4E3C($s0)
    ctx->pc = 0x238a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20028), GPR_U32(ctx, 3));
    // 0x238a8c: 0xc08e1c4  jal         func_238710
    ctx->pc = 0x238A8Cu;
    SET_GPR_U32(ctx, 31, 0x238A94u);
    ctx->pc = 0x238A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A8Cu;
            // 0x238a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238710u;
    goto label_238710;
    ctx->pc = 0x238A94u;
label_238a94:
    // 0x238a94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238A94u;
    {
        const bool branch_taken_0x238a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A94u;
            // 0x238a98: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a94) {
            ctx->pc = 0x238ACCu;
            goto label_238acc;
        }
    }
    ctx->pc = 0x238A9Cu;
    // 0x238a9c: 0x8e044e78  lw          $a0, 0x4E78($s0)
    ctx->pc = 0x238a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20088)));
    // 0x238aa0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x238aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x238aa4: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x238aa8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x238aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x238aac: 0x24c689b8  addiu       $a2, $a2, -0x7648
    ctx->pc = 0x238aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937016));
    // 0x238ab0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x238ab0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x238ab4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ab8: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x238abc: 0xc08a058  jal         func_228160
    ctx->pc = 0x238ABCu;
    SET_GPR_U32(ctx, 31, 0x238AC4u);
    ctx->pc = 0x238AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238ABCu;
            // 0x238ac0: 0x26044e58  addiu       $a0, $s0, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AC4u; }
        if (ctx->pc != 0x238AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AC4u; }
        if (ctx->pc != 0x238AC4u) { return; }
    }
    ctx->pc = 0x238AC4u;
label_238ac4:
    // 0x238ac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238AC4u;
    {
        const bool branch_taken_0x238ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AC4u;
            // 0x238ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ac4) {
            ctx->pc = 0x238AD8u;
            goto label_238ad8;
        }
    }
    ctx->pc = 0x238ACCu;
label_238acc:
    // 0x238acc: 0xc08e334  jal         func_238CD0
    ctx->pc = 0x238ACCu;
    SET_GPR_U32(ctx, 31, 0x238AD4u);
    ctx->pc = 0x238AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238ACCu;
            // 0x238ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CD0u;
    if (runtime->hasFunction(0x238CD0u)) {
        auto targetFn = runtime->lookupFunction(0x238CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AD4u; }
        if (ctx->pc != 0x238AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CD0_0x238cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AD4u; }
        if (ctx->pc != 0x238AD4u) { return; }
    }
    ctx->pc = 0x238AD4u;
label_238ad4:
    // 0x238ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ad8:
    // 0x238ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238adc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ae4: 0x808c698  j           func_231A60
    ctx->pc = 0x238AE4u;
    ctx->pc = 0x238AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238AE4u;
            // 0x238ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x238AECu;
label_238aec:
    // 0x238aec: 0xc08e34a  jal         func_238D28
    ctx->pc = 0x238AECu;
    SET_GPR_U32(ctx, 31, 0x238AF4u);
    ctx->pc = 0x238AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238AECu;
            // 0x238af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238D28u;
    if (runtime->hasFunction(0x238D28u)) {
        auto targetFn = runtime->lookupFunction(0x238D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AF4u; }
        if (ctx->pc != 0x238AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238D28_0x238d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238AF4u; }
        if (ctx->pc != 0x238AF4u) { return; }
    }
    ctx->pc = 0x238AF4u;
label_238af4:
    // 0x238af4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x238AF4u;
    {
        const bool branch_taken_0x238af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238af4) {
            ctx->pc = 0x238B30u;
            goto label_238b30;
        }
    }
    ctx->pc = 0x238AFCu;
    // 0x238afc: 0x8e044e7c  lw          $a0, 0x4E7C($s0)
    ctx->pc = 0x238afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20092)));
label_238b00:
    // 0x238b00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238b04: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x238b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x238b08: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x238b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x238b0c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x238b10: 0x24c689b8  addiu       $a2, $a2, -0x7648
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937016));
    // 0x238b14: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x238b14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x238b18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b1c: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x238b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x238b20: 0xc08a058  jal         func_228160
    ctx->pc = 0x238B20u;
    SET_GPR_U32(ctx, 31, 0x238B28u);
    ctx->pc = 0x238B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B20u;
            // 0x238b24: 0x26044e58  addiu       $a0, $s0, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B28u; }
        if (ctx->pc != 0x238B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B28u; }
        if (ctx->pc != 0x238B28u) { return; }
    }
    ctx->pc = 0x238B28u;
label_238b28:
    // 0x238b28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238B28u;
    {
        const bool branch_taken_0x238b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b28) {
            ctx->pc = 0x238B38u;
            goto label_238b38;
        }
    }
    ctx->pc = 0x238B30u;
label_238b30:
    // 0x238b30: 0xc08e334  jal         func_238CD0
    ctx->pc = 0x238B30u;
    SET_GPR_U32(ctx, 31, 0x238B38u);
    ctx->pc = 0x238B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B30u;
            // 0x238b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CD0u;
    if (runtime->hasFunction(0x238CD0u)) {
        auto targetFn = runtime->lookupFunction(0x238CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B38u; }
        if (ctx->pc != 0x238B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CD0_0x238cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B38u; }
        if (ctx->pc != 0x238B38u) { return; }
    }
    ctx->pc = 0x238B38u;
label_238b38:
    // 0x238b38: 0xc08c698  jal         func_231A60
    ctx->pc = 0x238B38u;
    SET_GPR_U32(ctx, 31, 0x238B40u);
    ctx->pc = 0x238B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B38u;
            // 0x238b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B40u; }
        if (ctx->pc != 0x238B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B40u; }
        if (ctx->pc != 0x238B40u) { return; }
    }
    ctx->pc = 0x238B40u;
label_238b40:
    // 0x238b40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238B40u;
    {
        const bool branch_taken_0x238b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B40u;
            // 0x238b44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b40) {
            ctx->pc = 0x238B54u;
            goto label_238b54;
        }
    }
    ctx->pc = 0x238B48u;
label_238b48:
    // 0x238b48: 0xc08e306  jal         func_238C18
    ctx->pc = 0x238B48u;
    SET_GPR_U32(ctx, 31, 0x238B50u);
    ctx->pc = 0x238B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238B48u;
            // 0x238b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238C18u;
    if (runtime->hasFunction(0x238C18u)) {
        auto targetFn = runtime->lookupFunction(0x238C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B50u; }
        if (ctx->pc != 0x238B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238C18_0x238c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B50u; }
        if (ctx->pc != 0x238B50u) { return; }
    }
    ctx->pc = 0x238B50u;
label_238b50:
    // 0x238b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x238b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238b54:
    // 0x238b54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238b58:
    // 0x238b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x238B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B5Cu;
            // 0x238b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238B64u;
    // 0x238b64: 0x0  nop
    ctx->pc = 0x238b64u;
    // NOP
label_238b68:
    // 0x238b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238b70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x238b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238b7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238b80: 0x8e024e3c  lw          $v0, 0x4E3C($s0)
    ctx->pc = 0x238b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20028)));
    // 0x238b84: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x238B84u;
    {
        const bool branch_taken_0x238b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238B84u;
            // 0x238b88: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b84) {
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238B8Cu;
    // 0x238b8c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x238B8Cu;
    SET_GPR_U32(ctx, 31, 0x238B94u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B94u; }
        if (ctx->pc != 0x238B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B94u; }
        if (ctx->pc != 0x238B94u) { return; }
    }
    ctx->pc = 0x238B94u;
label_238b94:
    // 0x238b94: 0x8e044e84  lw          $a0, 0x4E84($s0)
    ctx->pc = 0x238b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20100)));
    // 0x238b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238b9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ba0: 0xae004e78  sw          $zero, 0x4E78($s0)
    ctx->pc = 0x238ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20088), GPR_U32(ctx, 0));
    // 0x238ba4: 0x28830001  slti        $v1, $a0, 0x1
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x238ba8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x238ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bac: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x238bacu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x238bb0: 0xae004e7c  sw          $zero, 0x4E7C($s0)
    ctx->pc = 0x238bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20092), GPR_U32(ctx, 0));
    // 0x238bb4: 0xae024e84  sw          $v0, 0x4E84($s0)
    ctx->pc = 0x238bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20100), GPR_U32(ctx, 2));
    // 0x238bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bbc: 0xc08e1c4  jal         func_238710
    ctx->pc = 0x238BBCu;
    SET_GPR_U32(ctx, 31, 0x238BC4u);
    ctx->pc = 0x238BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BBCu;
            // 0x238bc0: 0xae054e3c  sw          $a1, 0x4E3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20028), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238710u;
    goto label_238710;
    ctx->pc = 0x238BC4u;
label_238bc4:
    // 0x238bc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238bc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bc8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x238BC8u;
    {
        const bool branch_taken_0x238bc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238BC8u;
            // 0x238bcc: 0x3c060024  lui         $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bc8) {
            ctx->pc = 0x238BECu;
            goto label_238bec;
        }
    }
    ctx->pc = 0x238BD0u;
    // 0x238bd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bd4: 0x24c689b8  addiu       $a2, $a2, -0x7648
    ctx->pc = 0x238bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937016));
    // 0x238bd8: 0x26044e58  addiu       $a0, $s0, 0x4E58
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20056));
    // 0x238bdc: 0xc08a058  jal         func_228160
    ctx->pc = 0x238BDCu;
    SET_GPR_U32(ctx, 31, 0x238BE4u);
    ctx->pc = 0x238BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BDCu;
            // 0x238be0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BE4u; }
        if (ctx->pc != 0x238BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BE4u; }
        if (ctx->pc != 0x238BE4u) { return; }
    }
    ctx->pc = 0x238BE4u;
label_238be4:
    // 0x238be4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238BE4u;
    {
        const bool branch_taken_0x238be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238be4) {
            ctx->pc = 0x238BF4u;
            goto label_238bf4;
        }
    }
    ctx->pc = 0x238BECu;
label_238bec:
    // 0x238bec: 0xc08e334  jal         func_238CD0
    ctx->pc = 0x238BECu;
    SET_GPR_U32(ctx, 31, 0x238BF4u);
    ctx->pc = 0x238BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CD0u;
    if (runtime->hasFunction(0x238CD0u)) {
        auto targetFn = runtime->lookupFunction(0x238CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BF4u; }
        if (ctx->pc != 0x238BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CD0_0x238cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BF4u; }
        if (ctx->pc != 0x238BF4u) { return; }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x238BF4u;
    SET_GPR_U32(ctx, 31, 0x238BFCu);
    ctx->pc = 0x238BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238BF4u;
            // 0x238bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BFCu; }
        if (ctx->pc != 0x238BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238BFCu; }
        if (ctx->pc != 0x238BFCu) { return; }
    }
    ctx->pc = 0x238BFCu;
label_238bfc:
    // 0x238bfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x238bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238c00:
    // 0x238c00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238c04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238c04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238c08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238c10: 0x3e00008  jr          $ra
    ctx->pc = 0x238C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C10u;
            // 0x238c14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238C18u;
    ctx->pc = 0x238c18u;
}
