#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001004E8
// Address: 0x1004e8 - 0x100860
void sub_001004E8_0x1004e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001004E8_0x1004e8");
#endif

    switch (ctx->pc) {
        case 0x10053cu: goto label_10053c;
        case 0x10055cu: goto label_10055c;
        case 0x100578u: goto label_100578;
        case 0x100800u: goto label_100800;
        case 0x100804u: goto label_100804;
        case 0x100808u: goto label_100808;
        case 0x10080cu: goto label_10080c;
        case 0x100830u: goto label_100830;
        default: break;
    }

    ctx->pc = 0x1004e8u;

    // 0x1004e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1004e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1004ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1004ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1004f0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1004f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1004f4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1004f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1004f8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1004f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1004fc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1004fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x100500: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x100500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x100504: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x100504u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x100508: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x100508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10050c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x10050cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x100510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x100510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x100514: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x100514u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x100518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x100518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10051c: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x10051cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x100520: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x100520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x100524: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x100524u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x100528: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x100528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10052c: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x10052cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x100530: 0x9a403  sra         $s4, $t1, 16
    ctx->pc = 0x100530u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 16));
    // 0x100534: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x100534u;
    SET_GPR_U32(ctx, 31, 0x10053Cu);
    ctx->pc = 0x100538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100534u;
            // 0x100538: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1003C0u;
    if (runtime->hasFunction(0x1003C0u)) {
        auto targetFn = runtime->lookupFunction(0x1003C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10053Cu; }
        if (ctx->pc != 0x10053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003C0_0x1003c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10053Cu; }
        if (ctx->pc != 0x10053Cu) { return; }
    }
    ctx->pc = 0x10053Cu;
label_10053c:
    // 0x10053c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10053cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100540: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x100540u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x100544: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x100544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x100548: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x100548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10054c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10054Cu;
    {
        const bool branch_taken_0x10054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10054c) {
            ctx->pc = 0x100550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10054Cu;
            // 0x100550: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100588u;
            goto label_100588;
        }
    }
    ctx->pc = 0x100554u;
    // 0x100554: 0xc04010e  jal         func_100438
    ctx->pc = 0x100554u;
    SET_GPR_U32(ctx, 31, 0x10055Cu);
    ctx->pc = 0x100438u;
    if (runtime->hasFunction(0x100438u)) {
        auto targetFn = runtime->lookupFunction(0x100438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10055Cu; }
        if (ctx->pc != 0x10055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100438_0x100438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10055Cu; }
        if (ctx->pc != 0x10055Cu) { return; }
    }
    ctx->pc = 0x10055Cu;
label_10055c:
    // 0x10055c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10055Cu;
    {
        const bool branch_taken_0x10055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10055Cu;
            // 0x100560: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10055c) {
            ctx->pc = 0x100580u;
            goto label_100580;
        }
    }
    ctx->pc = 0x100564u;
    // 0x100564: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x100564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x100568: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x100568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x10056c: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x10056cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x100570: 0xc040136  jal         func_1004D8
    ctx->pc = 0x100570u;
    SET_GPR_U32(ctx, 31, 0x100578u);
    ctx->pc = 0x100574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100570u;
            // 0x100574: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004D8u;
    if (runtime->hasFunction(0x1004D8u)) {
        auto targetFn = runtime->lookupFunction(0x1004D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100578u; }
        if (ctx->pc != 0x100578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004D8_0x1004d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100578u; }
        if (ctx->pc != 0x100578u) { return; }
    }
    ctx->pc = 0x100578u;
label_100578:
    // 0x100578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100578u;
    {
        const bool branch_taken_0x100578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100578u;
            // 0x10057c: 0x96240002  lhu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100578) {
            ctx->pc = 0x100594u;
            goto label_100594;
        }
    }
    ctx->pc = 0x100580u;
label_100580:
    // 0x100580: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x100580u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x100584: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x100584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_100588:
    // 0x100588: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x100588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10058c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x100590: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_100594:
    // 0x100594: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x100594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x100598: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x100598u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10059c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x10059cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1005a0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1005a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1005a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1005A4u;
    {
        const bool branch_taken_0x1005a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005A4u;
            // 0x1005a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005a4) {
            ctx->pc = 0x1005BCu;
            goto label_1005bc;
        }
    }
    ctx->pc = 0x1005ACu;
    // 0x1005ac: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x1005acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1005b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1005B0u;
    {
        const bool branch_taken_0x1005b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1005B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005B0u;
            // 0x1005b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005b0) {
            ctx->pc = 0x1005BCu;
            goto label_1005bc;
        }
    }
    ctx->pc = 0x1005B8u;
    // 0x1005b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1005b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1005bc:
    // 0x1005bc: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x1005bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x1005c0: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x1005c4: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x1005c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1005c8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1005c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1005cc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1005ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1005d0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1005d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1005d4: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1005d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1005d8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1005d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1005dc: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1005dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1005e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1005e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1005e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1005e8: 0x14a4002b  bne         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1005E8u;
    {
        const bool branch_taken_0x1005e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1005ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005E8u;
            // 0x1005ec: 0xfe630010  sd          $v1, 0x10($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005e8) {
            ctx->pc = 0x100698u;
            goto label_100698;
        }
    }
    ctx->pc = 0x1005F0u;
    // 0x1005f0: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1005f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1005f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1005f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1005f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1005f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1005fc: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1005FCu;
    {
        const bool branch_taken_0x1005fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1005FCu;
            // 0x100600: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005fc) {
            ctx->pc = 0x10066Cu;
            goto label_10066c;
        }
    }
    ctx->pc = 0x100604u;
    // 0x100604: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x100604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x100608: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x100608u;
    {
        const bool branch_taken_0x100608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100608) {
            ctx->pc = 0x10060Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100608u;
            // 0x10060c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x100610u;
            goto label_100610;
        }
    }
    ctx->pc = 0x100610u;
label_100610:
    // 0x100610: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x100610u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x100614: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100618: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x100618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10061c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x100620: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x100624: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x100628: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x100628u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x10062c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x100630: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x100630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x100634: 0x1812  mflo        $v1
    ctx->pc = 0x100634u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x100638: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x100638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10063c: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x10063cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100640: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x100640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x100644: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x100644u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x100648: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10064c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x10064cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100650: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x100650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x100654: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x100654u;
    {
        const bool branch_taken_0x100654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100654u;
            // 0x100658: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100654) {
            ctx->pc = 0x100720u;
            goto label_100720;
        }
    }
    ctx->pc = 0x10065Cu;
    // 0x10065c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x100660: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x100660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x100664: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x100664u;
    {
        const bool branch_taken_0x100664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100664u;
            // 0x100668: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100664) {
            ctx->pc = 0x100728u;
            goto label_100728;
        }
    }
    ctx->pc = 0x10066Cu;
label_10066c:
    // 0x10066c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10066Cu;
    {
        const bool branch_taken_0x10066c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10066c) {
            ctx->pc = 0x100670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10066Cu;
            // 0x100670: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x100674u;
            goto label_100674;
        }
    }
    ctx->pc = 0x100674u;
label_100674:
    // 0x100674: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x100674u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x100678: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x100678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x10067c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100680: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x100680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x100684: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x100684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100688: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x100688u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x10068c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x10068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x100690: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x100690u;
    {
        const bool branch_taken_0x100690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100690u;
            // 0x100694: 0x24630019  addiu       $v1, $v1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100690) {
            ctx->pc = 0x100768u;
            goto label_100768;
        }
    }
    ctx->pc = 0x100698u;
label_100698:
    // 0x100698: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10069c: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x10069Cu;
    {
        const bool branch_taken_0x10069c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1006A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10069Cu;
            // 0x1006a0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10069c) {
            ctx->pc = 0x1007ACu;
            goto label_1007ac;
        }
    }
    ctx->pc = 0x1006A4u;
    // 0x1006a4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1006a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1006ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1006b0: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1006B0u;
    {
        const bool branch_taken_0x1006b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006B0u;
            // 0x1006b4: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1006b0) {
            ctx->pc = 0x100740u;
            goto label_100740;
        }
    }
    ctx->pc = 0x1006B8u;
    // 0x1006b8: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x1006b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x1006bc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1006BCu;
    {
        const bool branch_taken_0x1006bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1006bc) {
            ctx->pc = 0x1006C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1006BCu;
            // 0x1006c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1006C4u;
            goto label_1006c4;
        }
    }
    ctx->pc = 0x1006C4u;
label_1006c4:
    // 0x1006c4: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1006c4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1006c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1006c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1006cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1006ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1006d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1006d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1006d4: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x1006d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1006d8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1006d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1006dc: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x1006dcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x1006e0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1006e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1006e4: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x1006e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x1006e8: 0x1812  mflo        $v1
    ctx->pc = 0x1006e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1006ec: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x1006ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1006f0: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x1006f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1006f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1006f8: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x1006f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x1006fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1006fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x100700: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x100700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100704: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x100704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x100708: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x100708u;
    {
        const bool branch_taken_0x100708 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100708u;
            // 0x10070c: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100708) {
            ctx->pc = 0x100720u;
            goto label_100720;
        }
    }
    ctx->pc = 0x100710u;
    // 0x100710: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x100710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x100714: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x100714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x100718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100718u;
    {
        const bool branch_taken_0x100718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100718u;
            // 0x10071c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100718) {
            ctx->pc = 0x100728u;
            goto label_100728;
        }
    }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x100720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x100724: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x100724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_100728:
    // 0x100728: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x100728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x10072c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x10072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x100730: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x100734: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x100734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x100738: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x100738u;
    {
        const bool branch_taken_0x100738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10073Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100738u;
            // 0x10073c: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100738) {
            ctx->pc = 0x100830u;
            goto label_100830;
        }
    }
    ctx->pc = 0x100740u;
label_100740:
    // 0x100740: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x100740u;
    {
        const bool branch_taken_0x100740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100740) {
            ctx->pc = 0x100744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100740u;
            // 0x100744: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x100748u;
            goto label_100748;
        }
    }
    ctx->pc = 0x100748u;
label_100748:
    // 0x100748: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x100748u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10074c: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x10074cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x100750: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x100750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100754: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x100754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x100758: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10075c: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x10075cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x100760: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x100764: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x100764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_100768:
    // 0x100768: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x100768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10076c: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x10076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x100770: 0x1012  mflo        $v0
    ctx->pc = 0x100770u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x100774: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x100774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x100778: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x100778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10077c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x100780: 0xc5282d  daddu       $a1, $a2, $a1
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x100784: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x100784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x100788: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x100788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x10078c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x100790: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x100790u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x100794: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x100794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x100798: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x100798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10079c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1007a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1007a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1007a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1007A4u;
    {
        const bool branch_taken_0x1007a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007A4u;
            // 0x1007a8: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007a4) {
            ctx->pc = 0x100830u;
            goto label_100830;
        }
    }
    ctx->pc = 0x1007ACu;
label_1007ac:
    // 0x1007ac: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1007ACu;
    {
        const bool branch_taken_0x1007ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1007B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007ACu;
            // 0x1007b0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007ac) {
            ctx->pc = 0x100828u;
            goto label_100828;
        }
    }
    ctx->pc = 0x1007B4u;
    // 0x1007b4: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x1007b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1007b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1007bc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1007bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1007c0: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1007c4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1007c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1007c8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1007c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1007cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1007ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1007d0: 0x64c700e8  daddiu      $a3, $a2, 0xE8
    ctx->pc = 0x1007d0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)232);
    // 0x1007d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1007d8: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1007d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1007dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1007dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1007e0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1007e4: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1007e8: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1007e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1007ec: 0xa7282d  daddu       $a1, $a1, $a3
    ctx->pc = 0x1007ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x1007f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1007f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1007f4: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x1007f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x1007f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1007f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1007fc: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1007fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_100800:
    // 0x100800: 0x24840023  addiu       $a0, $a0, 0x23
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 35));
label_100804:
    // 0x100804: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x100804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_100808:
    // 0x100808: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_10080c:
    // 0x10080c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x10080cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x100810: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x100810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x100814: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100818: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x100818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x10081c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x100820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100820u;
    {
        const bool branch_taken_0x100820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100820u;
            // 0x100824: 0xfe630018  sd          $v1, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100820) {
            ctx->pc = 0x100830u;
            goto label_100830;
        }
    }
    ctx->pc = 0x100828u;
label_100828:
    // 0x100828: 0xc043e52  jal         func_10F948
    ctx->pc = 0x100828u;
    SET_GPR_U32(ctx, 31, 0x100830u);
    ctx->pc = 0x10082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100828u;
            // 0x10082c: 0x24849990  addiu       $a0, $a0, -0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100830u; }
        if (ctx->pc != 0x100830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100830u; }
        if (ctx->pc != 0x100830u) { return; }
    }
    ctx->pc = 0x100830u;
label_100830:
    // 0x100830: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x100830u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x100834: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100838: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x100838u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10083c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10083cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x100840: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x100840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100844: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100848: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x100848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10084c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10084cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x100850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100854: 0x3e00008  jr          $ra
    ctx->pc = 0x100854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100854u;
            // 0x100858: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10085Cu;
    // 0x10085c: 0x0  nop
    ctx->pc = 0x10085cu;
    // NOP
    ctx->pc = 0x100860u;
}
