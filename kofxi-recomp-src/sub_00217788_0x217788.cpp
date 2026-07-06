#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00217788
// Address: 0x217788 - 0x2179b8
void sub_00217788_0x217788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217788_0x217788");
#endif

    switch (ctx->pc) {
        case 0x2177a4u: goto label_2177a4;
        case 0x2177c0u: goto label_2177c0;
        case 0x217824u: goto label_217824;
        case 0x217828u: goto label_217828;
        case 0x217838u: goto label_217838;
        case 0x217874u: goto label_217874;
        case 0x217884u: goto label_217884;
        case 0x2178c4u: goto label_2178c4;
        case 0x2178fcu: goto label_2178fc;
        case 0x217954u: goto label_217954;
        case 0x217958u: goto label_217958;
        case 0x217964u: goto label_217964;
        case 0x217984u: goto label_217984;
        default: break;
    }

    ctx->pc = 0x217788u;

label_217788:
    // 0x217788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21778c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217790: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x217790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x217794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217798: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21779c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21779Cu;
    SET_GPR_U32(ctx, 31, 0x2177A4u);
    ctx->pc = 0x2177A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21779Cu;
            // 0x2177a0: 0x24840ee8  addiu       $a0, $a0, 0xEE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177A4u; }
        if (ctx->pc != 0x2177A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2177A4u; }
        if (ctx->pc != 0x2177A4u) { return; }
    }
    ctx->pc = 0x2177A4u;
label_2177a4:
    // 0x2177a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2177a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2177a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2177a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2177ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2177acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2177b0: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x2177b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x2177b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2177b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2177b8: 0x8043e52  j           func_10F948
    ctx->pc = 0x2177B8u;
    ctx->pc = 0x2177BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2177B8u;
            // 0x2177bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2177C0u;
label_2177c0:
    // 0x2177c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2177c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2177c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2177c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2177c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2177c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2177cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2177ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2177d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2177d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2177d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2177d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2177d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2177dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2177dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2177e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2177e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2177e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2177e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2177ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2177ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177f0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2177f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2177f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2177f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2177f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2177f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2177fc: 0x1e0b82d  daddu       $s7, $t7, $zero
    ctx->pc = 0x2177fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217800: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x217800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x217804: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x217804u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x217808: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x217808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21780c: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x21780cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217810: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217810u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217814: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x217814u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217818: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x217818u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21781c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21781Cu;
    SET_GPR_U32(ctx, 31, 0x217824u);
    ctx->pc = 0x217820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21781Cu;
            // 0x217820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217824u; }
        if (ctx->pc != 0x217824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217824u; }
        if (ctx->pc != 0x217824u) { return; }
    }
    ctx->pc = 0x217824u;
label_217824:
    // 0x217824: 0xaea0ab60  sw          $zero, -0x54A0($s5)
    ctx->pc = 0x217824u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
label_217828:
    // 0x217828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21782c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217830: 0xc084f58  jal         func_213D60
    ctx->pc = 0x217830u;
    SET_GPR_U32(ctx, 31, 0x217838u);
    ctx->pc = 0x217834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217830u;
            // 0x217834: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213D60u;
    if (runtime->hasFunction(0x213D60u)) {
        auto targetFn = runtime->lookupFunction(0x213D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217838u; }
        if (ctx->pc != 0x217838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213D60_0x213d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217838u; }
        if (ctx->pc != 0x217838u) { return; }
    }
    ctx->pc = 0x217838u;
label_217838:
    // 0x217838: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x217838u;
    {
        const bool branch_taken_0x217838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217838u;
            // 0x21783c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217838) {
            ctx->pc = 0x2178C8u;
            goto label_2178c8;
        }
    }
    ctx->pc = 0x217840u;
    // 0x217840: 0x8eafab60  lw          $t7, -0x54A0($s5)
    ctx->pc = 0x217840u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945632)));
    // 0x217844: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x217844u;
    {
        const bool branch_taken_0x217844 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217844u;
            // 0x217848: 0x8eedab58  lw          $t5, -0x54A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217844) {
            ctx->pc = 0x2178A4u;
            goto label_2178a4;
        }
    }
    ctx->pc = 0x21784Cu;
    // 0x21784c: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21784cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x217850: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x217850u;
    {
        const bool branch_taken_0x217850 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x217854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217850u;
            // 0x217854: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217850) {
            ctx->pc = 0x2178FCu;
            goto label_2178fc;
        }
    }
    ctx->pc = 0x217858u;
    // 0x217858: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x217858u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21785c: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21785cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x217860: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x217860u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x217864: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x217864u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x217868: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x217868u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21786c: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21786cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217870: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x217870u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_217874:
    // 0x217874: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x217878: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x217878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21787c: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x21787Cu;
    {
        const bool branch_taken_0x21787c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x217880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21787Cu;
            // 0x217880: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21787c) {
            ctx->pc = 0x2178A0u;
            goto label_2178a0;
        }
    }
    ctx->pc = 0x217884u;
label_217884:
    // 0x217884: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x217884u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217888: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x217888u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21788c: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21788cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x217890: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x217890u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x217894: 0x0  nop
    ctx->pc = 0x217894u;
    // NOP
    // 0x217898: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217898u;
    {
        const bool branch_taken_0x217898 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21789Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217898u;
            // 0x21789c: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217898) {
            ctx->pc = 0x217884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217884;
        }
    }
    ctx->pc = 0x2178A0u;
label_2178a0:
    // 0x2178a0: 0xafc0ab58  sw          $zero, -0x54A8($fp)
    ctx->pc = 0x2178a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945624), GPR_U32(ctx, 0));
label_2178a4:
    // 0x2178a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2178a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2178a8: 0x2a4f0002  slti        $t7, $s2, 0x2
    ctx->pc = 0x2178a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2178ac: 0x55e0ffde  bnel        $t7, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2178ACu;
    {
        const bool branch_taken_0x2178ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2178ac) {
            ctx->pc = 0x2178B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2178ACu;
            // 0x2178b0: 0xaea0ab60  sw          $zero, -0x54A0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217828;
        }
    }
    ctx->pc = 0x2178B4u;
    // 0x2178b4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2178b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2178b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2178b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178bc: 0xc085de2  jal         func_217788
    ctx->pc = 0x2178BCu;
    SET_GPR_U32(ctx, 31, 0x2178C4u);
    ctx->pc = 0x2178C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2178BCu;
            // 0x2178c0: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217788u;
    goto label_217788;
    ctx->pc = 0x2178C4u;
label_2178c4:
    // 0x2178c4: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x2178c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2178c8:
    // 0x2178c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2178c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2178cc: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x2178ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2178d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2178d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2178d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2178d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2178d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2178dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2178dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2178e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2178e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2178e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2178e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2178e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2178e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2178ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2178ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2178f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2178f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2178f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2178F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178F4u;
            // 0x2178f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2178FCu;
label_2178fc:
    // 0x2178fc: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x2178FCu;
    {
        const bool branch_taken_0x2178fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178FCu;
            // 0x217900: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178fc) {
            ctx->pc = 0x217874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217874;
        }
    }
    ctx->pc = 0x217904u;
    // 0x217904: 0x0  nop
    ctx->pc = 0x217904u;
    // NOP
    // 0x217908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21790c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21790cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21791c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21791cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217920: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x217924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217928: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21792c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21792cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217930: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217934: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x217934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21793c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217940: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x217940u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x217944: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x217944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217948: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x217948u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21794c: 0xc084612  jal         func_211848
    ctx->pc = 0x21794Cu;
    SET_GPR_U32(ctx, 31, 0x217954u);
    ctx->pc = 0x217950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21794Cu;
            // 0x217950: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217954u; }
        if (ctx->pc != 0x217954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217954u; }
        if (ctx->pc != 0x217954u) { return; }
    }
    ctx->pc = 0x217954u;
label_217954:
    // 0x217954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217958:
    // 0x217958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21795c: 0xc084f98  jal         func_213E60
    ctx->pc = 0x21795Cu;
    SET_GPR_U32(ctx, 31, 0x217964u);
    ctx->pc = 0x217960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21795Cu;
            // 0x217960: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213E60u;
    if (runtime->hasFunction(0x213E60u)) {
        auto targetFn = runtime->lookupFunction(0x213E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217964u; }
        if (ctx->pc != 0x217964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213E60_0x213e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217964u; }
        if (ctx->pc != 0x217964u) { return; }
    }
    ctx->pc = 0x217964u;
label_217964:
    // 0x217964: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217964u;
    {
        const bool branch_taken_0x217964 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217964u;
            // 0x217968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217964) {
            ctx->pc = 0x21798Cu;
            goto label_21798c;
        }
    }
    ctx->pc = 0x21796Cu;
    // 0x21796c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21796cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x217970: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x217970u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x217974: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x217974u;
    {
        const bool branch_taken_0x217974 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x217978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217974u;
            // 0x217978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217974) {
            ctx->pc = 0x217958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217958;
        }
    }
    ctx->pc = 0x21797Cu;
    // 0x21797c: 0xc085de2  jal         func_217788
    ctx->pc = 0x21797Cu;
    SET_GPR_U32(ctx, 31, 0x217984u);
    ctx->pc = 0x217980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21797Cu;
            // 0x217980: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x217788u;
    goto label_217788;
    ctx->pc = 0x217984u;
label_217984:
    // 0x217984: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x217984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217988: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x217988u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21798c:
    // 0x21798c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21798cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217990: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x217990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21799c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21799cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2179a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2179a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2179a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2179a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2179a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2179a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2179ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2179ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179ACu;
            // 0x2179b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2179B4u;
    // 0x2179b4: 0x0  nop
    ctx->pc = 0x2179b4u;
    // NOP
    ctx->pc = 0x2179b8u;
}
