#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001055C0
// Address: 0x1055c0 - 0x105a48
void sub_001055C0_0x1055c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001055C0_0x1055c0");
#endif

    ctx->pc = 0x1055c0u;

    // 0x1055c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1055c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1055c4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1055c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1055c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1055cc: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x1055ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x1055d0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1055d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1055d4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1055d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1055d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1055d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1055dc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x1055dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055e0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1055e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1055e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1055e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1055e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1055ec: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1055ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055f0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1055f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1055f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1055f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055f8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1055f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1055fc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1055fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x105600: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x105600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x105604: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x105608: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x105608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x10560c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x10560cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105610: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105614: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x105614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x105618: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x105618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x10561c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x10561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x105620: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x105620u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x105624: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x105624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x105628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10562c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x10562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x105630: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x105630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x105634: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105638: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x10563c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105640: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x105640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x105644: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105648: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x105648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x10564c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x10564cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x105650: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x105654: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x105654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x105658: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x105658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10565c: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x10565Cu;
    {
        const bool branch_taken_0x10565c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x105660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10565Cu;
            // 0x105660: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10565c) {
            ctx->pc = 0x105674u;
            goto label_105674;
        }
    }
    ctx->pc = 0x105664u;
    // 0x105664: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x105668: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x10566c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10566Cu;
    {
        const bool branch_taken_0x10566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10566Cu;
            // 0x105670: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10566c) {
            ctx->pc = 0x10567Cu;
            goto label_10567c;
        }
    }
    ctx->pc = 0x105674u;
label_105674:
    // 0x105674: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x105678: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_10567c:
    // 0x10567c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x105680: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x105680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105684: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x105688: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x10568c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105690: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x105690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105694: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x105694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105698: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x105698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10569c: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x1056a0: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x1056a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x1056a4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1056a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1056a8: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1056ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1056acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1056b0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1056b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1056b4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1056b8: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x1056b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1056bc: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1056c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1056c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1056c4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1056c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1056c8: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x1056c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1056cc: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x1056ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1056d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1056d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1056d4: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x1056d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1056d8: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x1056d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1056dc: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1056e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1056e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1056e4: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x1056e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x1056e8: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x1056e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1056ec: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x1056ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1056f0: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x1056f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1056f4: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x1056f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1056f8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1056f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1056fc: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x1056fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x105700: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x105700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x105704: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x105704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x105708: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x105708u;
    {
        const bool branch_taken_0x105708 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x10570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105708u;
            // 0x10570c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105708) {
            ctx->pc = 0x105748u;
            goto label_105748;
        }
    }
    ctx->pc = 0x105710u;
    // 0x105710: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x105714: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x105714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x105718: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x105718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x10571c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x10571Cu;
    {
        const bool branch_taken_0x10571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10571c) {
            ctx->pc = 0x105720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10571Cu;
            // 0x105720: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10577Cu;
            goto label_10577c;
        }
    }
    ctx->pc = 0x105724u;
    // 0x105724: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x105724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105728: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x105728u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x10572c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x105730: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x105730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105734: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105738: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x10573c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x10573cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x105740: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x105740u;
    {
        const bool branch_taken_0x105740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105740u;
            // 0x105744: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105740) {
            ctx->pc = 0x105780u;
            goto label_105780;
        }
    }
    ctx->pc = 0x105748u;
label_105748:
    // 0x105748: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x105748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x10574c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x10574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x105750: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x105750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x105754: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x105754u;
    {
        const bool branch_taken_0x105754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105754) {
            ctx->pc = 0x105758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105754u;
            // 0x105758: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10577Cu;
            goto label_10577c;
        }
    }
    ctx->pc = 0x10575Cu;
    // 0x10575c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105760: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x105760u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x105764: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x105764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x105768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x105768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10576c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x10576cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x105770: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x105770u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x105774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105774u;
    {
        const bool branch_taken_0x105774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105774u;
            // 0x105778: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105774) {
            ctx->pc = 0x105780u;
            goto label_105780;
        }
    }
    ctx->pc = 0x10577Cu;
label_10577c:
    // 0x10577c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x10577cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_105780:
    // 0x105780: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x105780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x105784: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x105784u;
    {
        const bool branch_taken_0x105784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105784u;
            // 0x105788: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105784) {
            ctx->pc = 0x1057C8u;
            goto label_1057c8;
        }
    }
    ctx->pc = 0x10578Cu;
    // 0x10578c: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x105790: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105794: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x105794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x105798: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x105798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x10579c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x10579cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1057a0: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x1057a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1057a4: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x1057a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1057a8: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x1057a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x1057ac: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x1057acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x1057b0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1057b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1057b4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1057b8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1057bc: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x1057bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x1057c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1057C0u;
    {
        const bool branch_taken_0x1057c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057C0u;
            // 0x1057c4: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057c0) {
            ctx->pc = 0x1057DCu;
            goto label_1057dc;
        }
    }
    ctx->pc = 0x1057C8u;
label_1057c8:
    // 0x1057c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1057c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057cc: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1057d0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1057d4: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x1057d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x1057d8: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x1057d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_1057dc:
    // 0x1057dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1057e0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1057e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1057e4: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x1057e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1057e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1057ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1057ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1057f0: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1057f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1057f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1057f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1057f8: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x1057f8u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1057fc: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x1057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x105800: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x105800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x105804: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x105804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x105808: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x10580c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x10580cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x105810: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x105814: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x105814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x105818: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x105818u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x10581c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x10581cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x105820: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x105820u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x105824: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x105824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x105828: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x105828u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x10582c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x105830: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x105830u;
    {
        const bool branch_taken_0x105830 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x105834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105830u;
            // 0x105834: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105830) {
            ctx->pc = 0x105854u;
            goto label_105854;
        }
    }
    ctx->pc = 0x105838u;
    // 0x105838: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x105838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x10583c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x105840: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105844: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x105844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x105848: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x105848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10584c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10584Cu;
    {
        const bool branch_taken_0x10584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10584Cu;
            // 0x105850: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10584c) {
            ctx->pc = 0x105868u;
            goto label_105868;
        }
    }
    ctx->pc = 0x105854u;
label_105854:
    // 0x105854: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x105854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x105858: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x105858u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x10585c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105860: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x105864: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x105864u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_105868:
    // 0x105868: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x105868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10586c: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x10586cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x105870: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x105870u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x105874: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x105878: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x105878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10587c: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x10587cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x105880: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105884: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x105888: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x10588c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x105890: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x105890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x105894: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x105894u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x105898: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x10589c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x10589cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1058a0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x1058a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x1058a4: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1058A4u;
    {
        const bool branch_taken_0x1058a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058A4u;
            // 0x1058a8: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058a4) {
            ctx->pc = 0x1058E4u;
            goto label_1058e4;
        }
    }
    ctx->pc = 0x1058ACu;
    // 0x1058ac: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x1058b0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1058b4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1058b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1058b8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1058B8u;
    {
        const bool branch_taken_0x1058b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1058b8) {
            ctx->pc = 0x1058BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1058B8u;
            // 0x1058bc: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105918u;
            goto label_105918;
        }
    }
    ctx->pc = 0x1058C0u;
    // 0x1058c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1058c4: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x1058c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x1058c8: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x1058c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x1058cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1058d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1058d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1058d4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1058d8: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x1058d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x1058dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1058DCu;
    {
        const bool branch_taken_0x1058dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058DCu;
            // 0x1058e0: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058dc) {
            ctx->pc = 0x10591Cu;
            goto label_10591c;
        }
    }
    ctx->pc = 0x1058E4u;
label_1058e4:
    // 0x1058e4: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x1058e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x1058e8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1058e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1058ec: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1058ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1058f0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1058F0u;
    {
        const bool branch_taken_0x1058f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1058f0) {
            ctx->pc = 0x1058F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1058F0u;
            // 0x1058f4: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105918u;
            goto label_105918;
        }
    }
    ctx->pc = 0x1058F8u;
    // 0x1058f8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1058f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1058fc: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x1058fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x105900: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x105904: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x105904u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105908: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x105908u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x10590c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x10590cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x105910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105910u;
    {
        const bool branch_taken_0x105910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105910u;
            // 0x105914: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105910) {
            ctx->pc = 0x10591Cu;
            goto label_10591c;
        }
    }
    ctx->pc = 0x105918u;
label_105918:
    // 0x105918: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x105918u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_10591c:
    // 0x10591c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x10591cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x105920: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x105920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x105924: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105928: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10592c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105930: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x105930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x105934: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x105934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105938: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x105938u;
    {
        const bool branch_taken_0x105938 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105938u;
            // 0x10593c: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105938) {
            ctx->pc = 0x105960u;
            goto label_105960;
        }
    }
    ctx->pc = 0x105940u;
    // 0x105940: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x105940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x105944: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x105948: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x105948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x10594c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x105950: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x105950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105954: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x105954u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x105958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x105958u;
    {
        const bool branch_taken_0x105958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105958u;
            // 0x10595c: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105958) {
            ctx->pc = 0x1059A0u;
            goto label_1059a0;
        }
    }
    ctx->pc = 0x105960u;
label_105960:
    // 0x105960: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x105960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x105964: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x105964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x105968: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10596c: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x10596cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x105970: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105970u;
    {
        const bool branch_taken_0x105970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105970u;
            // 0x105974: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105970) {
            ctx->pc = 0x105984u;
            goto label_105984;
        }
    }
    ctx->pc = 0x105978u;
    // 0x105978: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10597c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10597Cu;
    {
        const bool branch_taken_0x10597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10597Cu;
            // 0x105980: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10597c) {
            ctx->pc = 0x105990u;
            goto label_105990;
        }
    }
    ctx->pc = 0x105984u;
label_105984:
    // 0x105984: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x105984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x105988: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10598c: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x10598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_105990:
    // 0x105990: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x105990u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x105994: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x105998: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x105998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10599c: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x10599cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_1059a0:
    // 0x1059a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1059a4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1059a8: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x1059a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x1059ac: 0x248484d0  addiu       $a0, $a0, -0x7B30
    ctx->pc = 0x1059acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935760));
    // 0x1059b0: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x1059b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x1059b4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1059b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1059b8: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1059bc: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1059c0: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x1059c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1059c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1059c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1059c8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1059c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1059cc: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x1059ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x1059d0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x1059d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1059d4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1059d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1059d8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1059d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1059dc: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1059dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1059e0: 0x244284f0  addiu       $v0, $v0, -0x7B10
    ctx->pc = 0x1059e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935792));
    // 0x1059e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1059e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1059e8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1059ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1059f0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1059f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1059f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1059f8: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1059fc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1059fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105a00: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x105a00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105a04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x105a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x105a08: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x105a08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105a0c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x105a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x105a10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x105a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105a14: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x105a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x105a18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x105a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105a20: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x105a20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105a24: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x105a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105a28: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x105a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105a2c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x105a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105a30: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x105a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105a34: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x105a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105a38: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x105a3c: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x105a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x105a40: 0x3e00008  jr          $ra
    ctx->pc = 0x105A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A40u;
            // 0x105a44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105A48u;
    ctx->pc = 0x105a48u;
}
