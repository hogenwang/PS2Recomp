#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001233C0
// Address: 0x1233c0 - 0x1235f0
void sub_001233C0_0x1233c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233C0_0x1233c0");
#endif

    switch (ctx->pc) {
        case 0x123448u: goto label_123448;
        case 0x1234d4u: goto label_1234d4;
        case 0x1234f8u: goto label_1234f8;
        case 0x123514u: goto label_123514;
        case 0x1235a8u: goto label_1235a8;
        default: break;
    }

    ctx->pc = 0x1233c0u;

    // 0x1233c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1233c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1233c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1233c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1233c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1233cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1233ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1233d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1233d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1233d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1233d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1233d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1233d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1233dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1233dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1233e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1233e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1233e4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1233e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1233e8: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x1233e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1233ec: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x1233ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1233f0: 0x1f2782a  slt         $t7, $t7, $s2
    ctx->pc = 0x1233f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1233f4: 0x15e00074  bnez        $t7, . + 4 + (0x74 << 2)
    ctx->pc = 0x1233F4u;
    {
        const bool branch_taken_0x1233f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1233F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1233F4u;
            // 0x1233f8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233f4) {
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x1233FCu;
    // 0x1233fc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1233fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x123400: 0x24a70014  addiu       $a3, $a1, 0x14
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x123404: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x123408: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x123408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x12340c: 0xef8021  addu        $s0, $a3, $t7
    ctx->pc = 0x12340cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x123410: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x123410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x123414: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x123414u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123418: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12341c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123420: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x123420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123424: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x123424u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x123428: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x123428u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x12342c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12342Cu;
    {
        const bool branch_taken_0x12342c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12342c) {
            ctx->pc = 0x123430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12342Cu;
            // 0x123430: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123434u;
            goto label_123434;
        }
    }
    ctx->pc = 0x123434u;
label_123434:
    // 0x123434: 0x8812  mflo        $s1
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x123438: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x123438u;
    {
        const bool branch_taken_0x123438 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123438u;
            // 0x12343c: 0xa812  mflo        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123438) {
            ctx->pc = 0x1234F0u;
            goto label_1234f0;
        }
    }
    ctx->pc = 0x123440u;
    // 0x123440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123448:
    // 0x123448: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x123448u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12344c: 0x8d0c0000  lw          $t4, 0x0($t0)
    ctx->pc = 0x12344cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123450: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x123450u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x123454: 0xb6c02  srl         $t5, $t3, 16
    ctx->pc = 0x123454u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x123458: 0x1f17818  mult        $t7, $t7, $s1
    ctx->pc = 0x123458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12345c: 0x71b16818  mult1       $t5, $t5, $s1
    ctx->pc = 0x12345cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x123460: 0x318effff  andi        $t6, $t4, 0xFFFF
    ctx->pc = 0x123460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x123464: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x123464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x123468: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x123468u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x12346c: 0x207502b  sltu        $t2, $s0, $a3
    ctx->pc = 0x12346cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x123470: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x123474: 0x31ebffff  andi        $t3, $t7, 0xFFFF
    ctx->pc = 0x123474u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x123478: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x12347c: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x123480: 0x1af4821  addu        $t1, $t5, $t7
    ctx->pc = 0x123480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x123484: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x123484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x123488: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x123488u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12348c: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x12348cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x123490: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x123490u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x123494: 0x18f6023  subu        $t4, $t4, $t7
    ctx->pc = 0x123494u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x123498: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x123498u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x12349c: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x12349cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1234a0: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x1234a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x1234a4: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x1234a8: 0x1140ffe7  beqz        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1234A8u;
    {
        const bool branch_taken_0x1234a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234A8u;
            // 0x1234ac: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234a8) {
            ctx->pc = 0x123448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123448;
        }
    }
    ctx->pc = 0x1234B0u;
    // 0x1234b0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1234B0u;
    {
        const bool branch_taken_0x1234b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1234B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234B0u;
            // 0x1234b4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234b0) {
            ctx->pc = 0x1234F0u;
            goto label_1234f0;
        }
    }
    ctx->pc = 0x1234B8u;
    // 0x1234b8: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1234b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1234bc: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1234BCu;
    {
        const bool branch_taken_0x1234bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234bc) {
            ctx->pc = 0x1234C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1234BCu;
            // 0x1234c0: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1234F0u;
            goto label_1234f0;
        }
    }
    ctx->pc = 0x1234C4u;
    // 0x1234c4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1234c8: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1234C8u;
    {
        const bool branch_taken_0x1234c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1234c8) {
            ctx->pc = 0x1234CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1234C8u;
            // 0x1234cc: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1234F0u;
            goto label_1234f0;
        }
    }
    ctx->pc = 0x1234D0u;
    // 0x1234d0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1234d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1234d4:
    // 0x1234d4: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1234d8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1234D8u;
    {
        const bool branch_taken_0x1234d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234D8u;
            // 0x1234dc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234d8) {
            ctx->pc = 0x1234ECu;
            goto label_1234ec;
        }
    }
    ctx->pc = 0x1234E0u;
    // 0x1234e0: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1234e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1234e4: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1234E4u;
    {
        const bool branch_taken_0x1234e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234E4u;
            // 0x1234e8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234e4) {
            ctx->pc = 0x1234D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1234d4;
        }
    }
    ctx->pc = 0x1234ECu;
label_1234ec:
    // 0x1234ec: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x1234ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_1234f0:
    // 0x1234f0: 0xc049f50  jal         func_127D40
    ctx->pc = 0x1234F0u;
    SET_GPR_U32(ctx, 31, 0x1234F8u);
    ctx->pc = 0x1234F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1234F0u;
            // 0x1234f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (runtime->hasFunction(0x127D40u)) {
        auto targetFn = runtime->lookupFunction(0x127D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234F8u; }
        if (ctx->pc != 0x1234F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127D40_0x127d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1234F8u; }
        if (ctx->pc != 0x1234F8u) { return; }
    }
    ctx->pc = 0x1234F8u;
label_1234f8:
    // 0x1234f8: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1234F8u;
    {
        const bool branch_taken_0x1234f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1234FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1234F8u;
            // 0x1234fc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234f8) {
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x123500u;
    // 0x123500: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x123504: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12350c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12350cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123510: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x123510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_123514:
    // 0x123514: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x123514u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x123518: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12351c: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x12351cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x123520: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x123520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x123524: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x123524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x123528: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x12352c: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x12352cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x123530: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x123530u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x123534: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x123534u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x123538: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x123538u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x12353c: 0x16f4821  addu        $t1, $t3, $t7
    ctx->pc = 0x12353cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x123540: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x123540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x123544: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x123544u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x123548: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x123548u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12354c: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x12354cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x123550: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x123554: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x123554u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x123558: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x123558u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12355c: 0x1a66021  addu        $t4, $t5, $a2
    ctx->pc = 0x12355cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x123560: 0x207782b  sltu        $t7, $s0, $a3
    ctx->pc = 0x123560u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x123564: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x123564u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x123568: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x123568u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x12356c: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x12356Cu;
    {
        const bool branch_taken_0x12356c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12356Cu;
            // 0x123570: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12356c) {
            ctx->pc = 0x123514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123514;
        }
    }
    ctx->pc = 0x123574u;
    // 0x123574: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x123574u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x123578: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x123578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x12357c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12357cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123580: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x123580u;
    {
        const bool branch_taken_0x123580 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x123584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123580u;
            // 0x123584: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123580) {
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x123588u;
    // 0x123588: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x12358c: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x12358cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x123590: 0x51e0000d  beql        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x123590u;
    {
        const bool branch_taken_0x123590 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123590) {
            ctx->pc = 0x123594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123590u;
            // 0x123594: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x123598u;
    // 0x123598: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x123598u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12359c: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12359Cu;
    {
        const bool branch_taken_0x12359c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12359c) {
            ctx->pc = 0x1235A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12359Cu;
            // 0x1235a0: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1235C8u;
            goto label_1235c8;
        }
    }
    ctx->pc = 0x1235A4u;
    // 0x1235a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1235a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1235a8:
    // 0x1235a8: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1235a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1235ac: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1235ACu;
    {
        const bool branch_taken_0x1235ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1235ACu;
            // 0x1235b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235ac) {
            ctx->pc = 0x1235C0u;
            goto label_1235c0;
        }
    }
    ctx->pc = 0x1235B4u;
    // 0x1235b4: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1235b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1235b8: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1235B8u;
    {
        const bool branch_taken_0x1235b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1235b8) {
            ctx->pc = 0x1235BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1235B8u;
            // 0x1235bc: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1235A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1235a8;
        }
    }
    ctx->pc = 0x1235C0u;
label_1235c0:
    // 0x1235c0: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x1235c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x1235c4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1235c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1235c8:
    // 0x1235c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1235c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1235cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1235ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1235d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1235d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1235d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1235d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1235d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1235dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1235dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1235e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1235e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1235e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1235e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1235e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1235E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1235ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1235E8u;
            // 0x1235ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1235F0u;
    ctx->pc = 0x1235f0u;
}
