#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299578
// Address: 0x299578 - 0x2998f0
void sub_00299578_0x299578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299578_0x299578");
#endif

    switch (ctx->pc) {
        case 0x2995ccu: goto label_2995cc;
        case 0x299600u: goto label_299600;
        case 0x299660u: goto label_299660;
        case 0x2996e8u: goto label_2996e8;
        case 0x299788u: goto label_299788;
        case 0x299828u: goto label_299828;
        default: break;
    }

    ctx->pc = 0x299578u;

    // 0x299578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29957c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x29957cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299580: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x299580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x299584: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x299584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x299588: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29958c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x29958cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299590: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x299590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x299594: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x299594u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299598: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29959c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x29959cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2995a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2995a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2995a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2995a8: 0x8c83b698  lw          $v1, -0x4968($a0)
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948504)));
    // 0x2995ac: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x2995acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2995b0: 0x8dc80004  lw          $t0, 0x4($t6)
    ctx->pc = 0x2995b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2995b4: 0x8dcb0008  lw          $t3, 0x8($t6)
    ctx->pc = 0x2995b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2995b8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2995b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995bc: 0x8dca000c  lw          $t2, 0xC($t6)
    ctx->pc = 0x2995bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x2995c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2995c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995c4: 0x9082b698  lbu         $v0, -0x4968($a0)
    ctx->pc = 0x2995c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294948504)));
    // 0x2995c8: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2995c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2995cc:
    // 0x2995cc: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2995CCu;
    {
        const bool branch_taken_0x2995cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2995D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2995CCu;
            // 0x2995d0: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2995cc) {
            ctx->pc = 0x299654u;
            goto label_299654;
        }
    }
    ctx->pc = 0x2995D4u;
    // 0x2995d4: 0x16a3026  xor         $a2, $t3, $t2
    ctx->pc = 0x2995d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x2995d8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2995dc: 0x3410ff00  ori         $s0, $zero, 0xFF00
    ctx->pc = 0x2995dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2995e0: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x2995e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x2995e4: 0x3610ff00  ori         $s0, $s0, 0xFF00
    ctx->pc = 0x2995e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65280);
    // 0x2995e8: 0x3c1900ff  lui         $t9, 0xFF
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)255 << 16));
    // 0x2995ec: 0x373900ff  ori         $t9, $t9, 0xFF
    ctx->pc = 0x2995ecu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)255);
    // 0x2995f0: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x2995f4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x2995f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x2995f8: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2995fc: 0x0  nop
    ctx->pc = 0x2995fcu;
    // NOP
label_299600:
    // 0x299600: 0x9ca20000  lwu         $v0, 0x0($a1)
    ctx->pc = 0x299600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299604: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x299608: 0x592024  and         $a0, $v0, $t9
    ctx->pc = 0x299608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x29960c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x29960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x299610: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x299610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x299614: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x299614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x299618: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x299618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x29961c: 0x4d1824  and         $v1, $v0, $t5
    ctx->pc = 0x29961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x299620: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x299620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x299624: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x299624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x299628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29962c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299630: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x299630u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x299634: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x299634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x299638: 0x521fff1  bgez        $t1, . + 4 + (-0xF << 2)
    ctx->pc = 0x299638u;
    {
        const bool branch_taken_0x299638 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x29963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299638u;
            // 0x29963c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299638) {
            ctx->pc = 0x299600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299600;
        }
    }
    ctx->pc = 0x299640u;
    // 0x299640: 0x8dd50000  lw          $s5, 0x0($t6)
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x299644: 0x8dd40004  lw          $s4, 0x4($t6)
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x299648: 0x8dd30008  lw          $s3, 0x8($t6)
    ctx->pc = 0x299648u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x29964c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29964Cu;
    {
        const bool branch_taken_0x29964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29964Cu;
            // 0x299650: 0x8dd2000c  lw          $s2, 0xC($t6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29964c) {
            ctx->pc = 0x29965Cu;
            goto label_29965c;
        }
    }
    ctx->pc = 0x299654u;
label_299654:
    // 0x299654: 0x16a3026  xor         $a2, $t3, $t2
    ctx->pc = 0x299654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x299658: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_29965c:
    // 0x29965c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29965cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299660:
    // 0x299660: 0x31220003  andi        $v0, $t1, 0x3
    ctx->pc = 0x299660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x299664: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x299664u;
    {
        const bool branch_taken_0x299664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299664u;
            // 0x299668: 0x258c0005  addiu       $t4, $t4, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299664) {
            ctx->pc = 0x299670u;
            goto label_299670;
        }
    }
    ctx->pc = 0x29966Cu;
    // 0x29966c: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x29966cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_299670:
    // 0x299670: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x299670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x299674: 0x262db568  addiu       $t5, $s1, -0x4A98
    ctx->pc = 0x299674u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948200));
    // 0x299678: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x299678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x29967c: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x29967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x299680: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x299684: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x299684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299688: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x299688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29968c: 0x6a1826  xor         $v1, $v1, $t2
    ctx->pc = 0x29968cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 10));
    // 0x299690: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299694: 0xc2823  negu        $a1, $t4
    ctx->pc = 0x299694u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x299698: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x299698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x29969c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x29969cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2996a0: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2996a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2996a4: 0x29260010  slti        $a2, $t1, 0x10
    ctx->pc = 0x2996a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2996a8: 0x1871004  sllv        $v0, $a3, $t4
    ctx->pc = 0x2996a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2996ac: 0xa72806  srlv        $a1, $a3, $a1
    ctx->pc = 0x2996acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x2996b0: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x2996b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2996b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2996b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2996b8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2996b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2996bc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2996bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996c0: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2996c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996c4: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2996c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996c8: 0x2403f  dsra32      $t0, $v0, 0
    ctx->pc = 0x2996c8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2996cc: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2996CCu;
    {
        const bool branch_taken_0x2996cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2996D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2996CCu;
            // 0x2996d0: 0x16a3026  xor         $a2, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996cc) {
            ctx->pc = 0x299660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299660;
        }
    }
    ctx->pc = 0x2996D4u;
    // 0x2996d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2996d8: 0x25ad0040  addiu       $t5, $t5, 0x40
    ctx->pc = 0x2996d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x2996dc: 0x2459b658  addiu       $t9, $v0, -0x49A8
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948440));
    // 0x2996e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2996e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2996e4: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x2996e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2996e8:
    // 0x2996e8: 0x31220003  andi        $v0, $t1, 0x3
    ctx->pc = 0x2996e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x2996ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2996ECu;
    {
        const bool branch_taken_0x2996ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2996F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2996ECu;
            // 0x2996f0: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996ec) {
            ctx->pc = 0x299700u;
            goto label_299700;
        }
    }
    ctx->pc = 0x2996F4u;
    // 0x2996f4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x2996f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2996f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2996F8u;
    {
        const bool branch_taken_0x2996f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2996FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2996F8u;
            // 0x2996fc: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2996f8) {
            ctx->pc = 0x299704u;
            goto label_299704;
        }
    }
    ctx->pc = 0x299700u;
label_299700:
    // 0x299700: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x299700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_299704:
    // 0x299704: 0x1391021  addu        $v0, $t1, $t9
    ctx->pc = 0x299704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x299708: 0x10b1826  xor         $v1, $t0, $t3
    ctx->pc = 0x299708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 11));
    // 0x29970c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x29970cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299710: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x299710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x299714: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x299714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x299718: 0x6b1826  xor         $v1, $v1, $t3
    ctx->pc = 0x299718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 11));
    // 0x29971c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29971cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299720: 0x20c2823  subu        $a1, $s0, $t4
    ctx->pc = 0x299720u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x299724: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x299728: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29972c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299730: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x299730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x299734: 0x29240020  slti        $a0, $t1, 0x20
    ctx->pc = 0x299734u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x299738: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29973c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x29973cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299740: 0x1871004  sllv        $v0, $a3, $t4
    ctx->pc = 0x299740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x299744: 0xa72806  srlv        $a1, $a3, $a1
    ctx->pc = 0x299744u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x299748: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x299748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29974c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x29974cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x299750: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x299750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x299754: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x299754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299758: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x299758u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29975c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x29975cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299760: 0x2403f  dsra32      $t0, $v0, 0
    ctx->pc = 0x299760u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x299764: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x299764u;
    {
        const bool branch_taken_0x299764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x299768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299764u;
            // 0x299768: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299764) {
            ctx->pc = 0x2996E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2996e8;
        }
    }
    ctx->pc = 0x29976Cu;
    // 0x29976c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x299770: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x299770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x299774: 0x2442b568  addiu       $v0, $v0, -0x4A98
    ctx->pc = 0x299774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948200));
    // 0x299778: 0x2479b658  addiu       $t9, $v1, -0x49A8
    ctx->pc = 0x299778u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948440));
    // 0x29977c: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x29977cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x299780: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x299780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x299784: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_299788:
    // 0x299788: 0x31220003  andi        $v0, $t1, 0x3
    ctx->pc = 0x299788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x29978c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29978Cu;
    {
        const bool branch_taken_0x29978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29978Cu;
            // 0x299790: 0x258c0007  addiu       $t4, $t4, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29978c) {
            ctx->pc = 0x29979Cu;
            goto label_29979c;
        }
    }
    ctx->pc = 0x299794u;
    // 0x299794: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x299794u;
    {
        const bool branch_taken_0x299794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299794u;
            // 0x299798: 0x240c0004  addiu       $t4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299794) {
            ctx->pc = 0x2997A8u;
            goto label_2997a8;
        }
    }
    ctx->pc = 0x29979Cu;
label_29979c:
    // 0x29979c: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x29979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x2997a0: 0x2582fffe  addiu       $v0, $t4, -0x2
    ctx->pc = 0x2997a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x2997a4: 0x43600a  movz        $t4, $v0, $v1
    ctx->pc = 0x2997a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
label_2997a8:
    // 0x2997a8: 0x1391021  addu        $v0, $t1, $t9
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x2997ac: 0x10b2026  xor         $a0, $t0, $t3
    ctx->pc = 0x2997acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 11));
    // 0x2997b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2997b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2997b4: 0x8a2026  xor         $a0, $a0, $t2
    ctx->pc = 0x2997b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 10));
    // 0x2997b8: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x2997b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2997bc: 0x20c2823  subu        $a1, $s0, $t4
    ctx->pc = 0x2997bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x2997c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2997c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2997c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2997c8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2997c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2997cc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2997ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2997d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2997d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2997d4: 0x29230030  slti        $v1, $t1, 0x30
    ctx->pc = 0x2997d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2997d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2997dc: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2997e0: 0x1871004  sllv        $v0, $a3, $t4
    ctx->pc = 0x2997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2997e4: 0xa72806  srlv        $a1, $a3, $a1
    ctx->pc = 0x2997e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x2997e8: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x2997e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2997ec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2997ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2997f0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2997f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2997f4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2997f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997f8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2997f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2997fc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2997fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299800: 0x2403f  dsra32      $t0, $v0, 0
    ctx->pc = 0x299800u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x299804: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x299804u;
    {
        const bool branch_taken_0x299804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x299808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299804u;
            // 0x299808: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299804) {
            ctx->pc = 0x299788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299788;
        }
    }
    ctx->pc = 0x29980Cu;
    // 0x29980c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x299810: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x299810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x299814: 0x2442b568  addiu       $v0, $v0, -0x4A98
    ctx->pc = 0x299814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948200));
    // 0x299818: 0x2479b658  addiu       $t9, $v1, -0x49A8
    ctx->pc = 0x299818u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948440));
    // 0x29981c: 0x244d00c0  addiu       $t5, $v0, 0xC0
    ctx->pc = 0x29981cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299820: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x299820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x299824: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_299828:
    // 0x299828: 0x31220003  andi        $v0, $t1, 0x3
    ctx->pc = 0x299828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x29982c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29982Cu;
    {
        const bool branch_taken_0x29982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29982Cu;
            // 0x299830: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29982c) {
            ctx->pc = 0x299840u;
            goto label_299840;
        }
    }
    ctx->pc = 0x299834u;
    // 0x299834: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x299834u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x299838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x299838u;
    {
        const bool branch_taken_0x299838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299838u;
            // 0x29983c: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299838) {
            ctx->pc = 0x299844u;
            goto label_299844;
        }
    }
    ctx->pc = 0x299840u;
label_299840:
    // 0x299840: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_299844:
    // 0x299844: 0x1391021  addu        $v0, $t1, $t9
    ctx->pc = 0x299844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x299848: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x299848u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x29984c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x29984cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299850: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x299850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x299854: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x299854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x299858: 0x6b1826  xor         $v1, $v1, $t3
    ctx->pc = 0x299858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 11));
    // 0x29985c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29985cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x299860: 0x20c2823  subu        $a1, $s0, $t4
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x299864: 0x982021  addu        $a0, $a0, $t8
    ctx->pc = 0x299864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x299868: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29986c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299870: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x299870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x299874: 0x29240040  slti        $a0, $t1, 0x40
    ctx->pc = 0x299874u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x299878: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x299878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29987c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x29987cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299880: 0x1871004  sllv        $v0, $a3, $t4
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x299884: 0xa72806  srlv        $a1, $a3, $a1
    ctx->pc = 0x299884u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x299888: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x299888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29988c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x299890: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x299890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x299894: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x299894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299898: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x299898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29989c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x29989cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998a0: 0x2403f  dsra32      $t0, $v0, 0
    ctx->pc = 0x2998a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2998a4: 0x1480ffe0  bnez        $a0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2998A4u;
    {
        const bool branch_taken_0x2998a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2998A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998A4u;
            // 0x2998a8: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2998a4) {
            ctx->pc = 0x299828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299828;
        }
    }
    ctx->pc = 0x2998ACu;
    // 0x2998ac: 0xf53821  addu        $a3, $a3, $s5
    ctx->pc = 0x2998acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x2998b0: 0x1144021  addu        $t0, $t0, $s4
    ctx->pc = 0x2998b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x2998b4: 0x1735821  addu        $t3, $t3, $s3
    ctx->pc = 0x2998b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 19)));
    // 0x2998b8: 0x1525021  addu        $t2, $t2, $s2
    ctx->pc = 0x2998b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x2998bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2998bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2998c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2998c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2998c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2998c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2998c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2998c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2998cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2998ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2998d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2998d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2998d4: 0xadca000c  sw          $t2, 0xC($t6)
    ctx->pc = 0x2998d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 10));
    // 0x2998d8: 0xadc70000  sw          $a3, 0x0($t6)
    ctx->pc = 0x2998d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 7));
    // 0x2998dc: 0xadc80004  sw          $t0, 0x4($t6)
    ctx->pc = 0x2998dcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 8));
    // 0x2998e0: 0xadcb0008  sw          $t3, 0x8($t6)
    ctx->pc = 0x2998e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 11));
    // 0x2998e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2998E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2998E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2998E4u;
            // 0x2998e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2998ECu;
    // 0x2998ec: 0x0  nop
    ctx->pc = 0x2998ecu;
    // NOP
    ctx->pc = 0x2998f0u;
}
