#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001215E8
// Address: 0x1215e8 - 0x121cb0
void sub_001215E8_0x1215e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001215E8_0x1215e8");
#endif

    switch (ctx->pc) {
        case 0x121658u: goto label_121658;
        case 0x121760u: goto label_121760;
        case 0x121788u: goto label_121788;
        case 0x12178cu: goto label_12178c;
        case 0x121820u: goto label_121820;
        case 0x121858u: goto label_121858;
        case 0x121a4cu: goto label_121a4c;
        case 0x121ac8u: goto label_121ac8;
        default: break;
    }

    ctx->pc = 0x1215e8u;

    // 0x1215e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1215ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1215ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1215f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1215f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1215f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1215f8: 0x8048580  j           func_121600
    ctx->pc = 0x1215F8u;
    ctx->pc = 0x1215FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215F8u;
    // 0x1215fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121600u;
    goto label_121600;
    ctx->pc = 0x121600u;
label_121600:
    // 0x121600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121604: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x121604u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121608: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12160c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12160cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x121610: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x121610u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x121614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12161c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12161cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121620: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x121620u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x121624: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x121624u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121628: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x121628u;
    {
        const bool branch_taken_0x121628 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121628u;
        // 0x12162c: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121628) {
            ctx->pc = 0x121A20u;
            goto label_121a20;
        }
    }
    ctx->pc = 0x121630u;
    // 0x121630: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x121630u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121634: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x121634u;
    {
        const bool branch_taken_0x121634 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121634u;
        // 0x121638: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121634) {
            ctx->pc = 0x1217E4u;
            goto label_1217e4;
        }
    }
    ctx->pc = 0x12163Cu;
    // 0x12163c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12163cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121640: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x121640u;
    {
        const bool branch_taken_0x121640 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121640u;
        // 0x121644: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121640) {
            ctx->pc = 0x1217C8u;
            goto label_1217c8;
        }
    }
    ctx->pc = 0x121648u;
    // 0x121648: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121648u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12164c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12164cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121650: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121650u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121654: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121654u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121658:
    // 0x121658: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121658u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12165c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12165cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x121660: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121660u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121664: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121668: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121668u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12166c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12166cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121670: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x121674: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x121674u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121678: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x121678u;
    {
        const bool branch_taken_0x121678 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121678u;
        // 0x12167c: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121678) {
            ctx->pc = 0x121694u;
            goto label_121694;
        }
    }
    ctx->pc = 0x121680u;
    // 0x121680: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121684: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x121684u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x121688: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12168c: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x12168cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x121690: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x121690u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_121694:
    // 0x121694: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x121694u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121698: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x121698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12169c: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x12169cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x1216a0: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x1216a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x1216a4: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1216A4u;
    {
        const bool branch_taken_0x1216a4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216a4) {
            ctx->pc = 0x1216A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216A4u;
            // 0x1216a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216ACu;
            goto label_1216ac;
        }
    }
    ctx->pc = 0x1216ACu;
label_1216ac:
    // 0x1216ac: 0x7812  mflo        $t7
    ctx->pc = 0x1216acu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1216b0: 0x7010  mfhi        $t6
    ctx->pc = 0x1216b0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1216b4: 0x6012  mflo        $t4
    ctx->pc = 0x1216b4u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1216b8: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1216b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1216bc: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x1216bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1216c0: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x1216c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1216c4: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x1216c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1216c8: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1216C8u;
    {
        const bool branch_taken_0x1216c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216c8) {
            ctx->pc = 0x1216CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216C8u;
            // 0x1216cc: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216F8u;
            goto label_1216f8;
        }
    }
    ctx->pc = 0x1216D0u;
    // 0x1216d0: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1216d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1216d4: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x1216d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1216d8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1216D8u;
    {
        const bool branch_taken_0x1216d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1216DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216D8u;
        // 0x1216dc: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216d8) {
            ctx->pc = 0x1216F4u;
            goto label_1216f4;
        }
    }
    ctx->pc = 0x1216E0u;
    // 0x1216e0: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x1216e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1216e4: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1216E4u;
    {
        const bool branch_taken_0x1216e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216e4) {
            ctx->pc = 0x1216E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216E4u;
            // 0x1216e8: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216F8u;
            goto label_1216f8;
        }
    }
    ctx->pc = 0x1216ECu;
    // 0x1216ec: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1216ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1216f0: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1216f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1216f4:
    // 0x1216f4: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x1216f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_1216f8:
    // 0x1216f8: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x1216f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x1216fc: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x1216fcu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x121700: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121700u;
    {
        const bool branch_taken_0x121700 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121700) {
            ctx->pc = 0x121704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121700u;
            // 0x121704: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x121708u;
label_121708:
    // 0x121708: 0x7812  mflo        $t7
    ctx->pc = 0x121708u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12170c: 0x7010  mfhi        $t6
    ctx->pc = 0x12170cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121710: 0x5812  mflo        $t3
    ctx->pc = 0x121710u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x121714: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121714u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121718: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x121718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12171c: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12171cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121720: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121724: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121724u;
    {
        const bool branch_taken_0x121724 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121724u;
        // 0x121728: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121724) {
            ctx->pc = 0x121754u;
            goto label_121754;
        }
    }
    ctx->pc = 0x12172Cu;
    // 0x12172c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121730: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x121730u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121734: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121734u;
    {
        const bool branch_taken_0x121734 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121734u;
        // 0x121738: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121734) {
            ctx->pc = 0x121750u;
            goto label_121750;
        }
    }
    ctx->pc = 0x12173Cu;
    // 0x12173c: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12173cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121740: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121740u;
    {
        const bool branch_taken_0x121740 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121740u;
        // 0x121744: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121740) {
            ctx->pc = 0x121754u;
            goto label_121754;
        }
    }
    ctx->pc = 0x121748u;
    // 0x121748: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12174c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_121750:
    // 0x121750: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x121750u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_121754:
    // 0x121754: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x121754u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x121758: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x121758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x12175c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12175cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121760:
    // 0x121760: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x121760u;
    {
        const bool branch_taken_0x121760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121760u;
        // 0x121764: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121760) {
            ctx->pc = 0x12178Cu;
            goto label_12178c;
        }
    }
    ctx->pc = 0x121768u;
    // 0x121768: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x121768u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12176c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12176cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x121770: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121770u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121774: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x121774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x121778: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x121778u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12177c: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12177cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x121780: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x121780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x121784: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x121784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_121788:
    // 0x121788: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x121788u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_12178c:
    // 0x12178c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12178cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121794: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x121794u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x121798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12179c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12179cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1217a0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1217a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1217a4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1217a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1217a8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1217a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1217ac: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x1217acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1217b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1217b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1217b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1217b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1217b8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1217b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1217bc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1217bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x1217c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1217C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1217C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217C0u;
        // 0x1217c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1217C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1217C8u;
label_1217c8:
    // 0x1217c8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1217cc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1217ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1217d0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1217d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1217d4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1217d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1217d8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1217d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217dc: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x1217DCu;
    {
        const bool branch_taken_0x1217dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217DCu;
        // 0x1217e0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217dc) {
            ctx->pc = 0x121658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121658;
        }
    }
    ctx->pc = 0x1217E4u;
label_1217e4:
    // 0x1217e4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1217E4u;
    {
        const bool branch_taken_0x1217e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217E4u;
        // 0x1217e8: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217e4) {
            ctx->pc = 0x121808u;
            goto label_121808;
        }
    }
    ctx->pc = 0x1217ECu;
    // 0x1217ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1217ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1217f0: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x1217f0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x1217f4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1217F4u;
    {
        const bool branch_taken_0x1217f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1217f4) {
            ctx->pc = 0x1217F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1217F4u;
            // 0x1217f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1217FCu;
            goto label_1217fc;
        }
    }
    ctx->pc = 0x1217FCu;
label_1217fc:
    // 0x1217fc: 0x2812  mflo        $a1
    ctx->pc = 0x1217fcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x121800: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x121800u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x121804: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121804u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_121808:
    // 0x121808: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x121808u;
    {
        const bool branch_taken_0x121808 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121808u;
        // 0x12180c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121808) {
            ctx->pc = 0x121A04u;
            goto label_121a04;
        }
    }
    ctx->pc = 0x121810u;
    // 0x121810: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121814: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x121814u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121818: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121818u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12181c: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12181cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121820:
    // 0x121820: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121820u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x121824: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x121824u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x121828: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121828u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x12182c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121830: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x121834: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x121834u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121838: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121838u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12183c: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12183cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121840: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x121840u;
    {
        const bool branch_taken_0x121840 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x121844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121840u;
        // 0x121844: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121840) {
            ctx->pc = 0x12191Cu;
            goto label_12191c;
        }
    }
    ctx->pc = 0x121848u;
    // 0x121848: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12184c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121850: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121850u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121854: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x121854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_121858:
    // 0x121858: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x121858u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12185c: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x12185cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x121860: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121860u;
    {
        const bool branch_taken_0x121860 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121860) {
            ctx->pc = 0x121864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121860u;
            // 0x121864: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121868u;
            goto label_121868;
        }
    }
    ctx->pc = 0x121868u;
label_121868:
    // 0x121868: 0x7010  mfhi        $t6
    ctx->pc = 0x121868u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12186c: 0x6812  mflo        $t5
    ctx->pc = 0x12186cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x121870: 0x4812  mflo        $t1
    ctx->pc = 0x121870u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x121874: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121874u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121878: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x121878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12187c: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x12187cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x121880: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x121880u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121884: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121884u;
    {
        const bool branch_taken_0x121884 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121884) {
            ctx->pc = 0x121888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121884u;
            // 0x121888: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1218B4u;
            goto label_1218b4;
        }
    }
    ctx->pc = 0x12188Cu;
    // 0x12188c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12188cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x121890: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x121890u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121894: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121894u;
    {
        const bool branch_taken_0x121894 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121894u;
        // 0x121898: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121894) {
            ctx->pc = 0x1218B0u;
            goto label_1218b0;
        }
    }
    ctx->pc = 0x12189Cu;
    // 0x12189c: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1218a0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1218A0u;
    {
        const bool branch_taken_0x1218a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1218a0) {
            ctx->pc = 0x1218A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1218A0u;
            // 0x1218a4: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1218B4u;
            goto label_1218b4;
        }
    }
    ctx->pc = 0x1218A8u;
    // 0x1218a8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1218a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1218ac: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1218b0:
    // 0x1218b0: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_1218b4:
    // 0x1218b4: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x1218b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x1218b8: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x1218b8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1218bc: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1218BCu;
    {
        const bool branch_taken_0x1218bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1218bc) {
            ctx->pc = 0x1218C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1218BCu;
            // 0x1218c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1218C4u;
            goto label_1218c4;
        }
    }
    ctx->pc = 0x1218C4u;
label_1218c4:
    // 0x1218c4: 0x7812  mflo        $t7
    ctx->pc = 0x1218c4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1218c8: 0x7010  mfhi        $t6
    ctx->pc = 0x1218c8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1218cc: 0x5012  mflo        $t2
    ctx->pc = 0x1218ccu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x1218d0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1218d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1218d4: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x1218d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1218d8: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x1218d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1218dc: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x1218dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1218e0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1218E0u;
    {
        const bool branch_taken_0x1218e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1218E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218E0u;
        // 0x1218e4: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218e0) {
            ctx->pc = 0x121910u;
            goto label_121910;
        }
    }
    ctx->pc = 0x1218E8u;
    // 0x1218e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1218ec: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x1218ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1218f0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1218F0u;
    {
        const bool branch_taken_0x1218f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1218F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218F0u;
        // 0x1218f4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218f0) {
            ctx->pc = 0x12190Cu;
            goto label_12190c;
        }
    }
    ctx->pc = 0x1218F8u;
    // 0x1218f8: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x1218f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1218fc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1218FCu;
    {
        const bool branch_taken_0x1218fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218FCu;
        // 0x121900: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1218fc) {
            ctx->pc = 0x121910u;
            goto label_121910;
        }
    }
    ctx->pc = 0x121904u;
    // 0x121904: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121908: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x121908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12190c:
    // 0x12190c: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x12190cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_121910:
    // 0x121910: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x121910u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x121914: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x121914u;
    {
        const bool branch_taken_0x121914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121914u;
        // 0x121918: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121914) {
            ctx->pc = 0x121760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121760;
        }
    }
    ctx->pc = 0x12191Cu;
label_12191c:
    // 0x12191c: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12191cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x121920: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121920u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121924: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x121924u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x121928: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x121928u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12192c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12192cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121930: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x121934: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x121934u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121938: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x121938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12193c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121940: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x121940u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x121944: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x121944u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x121948: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121948u;
    {
        const bool branch_taken_0x121948 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121948) {
            ctx->pc = 0x12194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121948u;
            // 0x12194c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121950u;
            goto label_121950;
        }
    }
    ctx->pc = 0x121950u;
label_121950:
    // 0x121950: 0x6810  mfhi        $t5
    ctx->pc = 0x121950u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x121954: 0x6012  mflo        $t4
    ctx->pc = 0x121954u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121958: 0x2012  mflo        $a0
    ctx->pc = 0x121958u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12195c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12195cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x121960: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x121960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121964: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x121964u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x121968: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x121968u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12196c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12196Cu;
    {
        const bool branch_taken_0x12196c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12196Cu;
        // 0x121970: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12196c) {
            ctx->pc = 0x121998u;
            goto label_121998;
        }
    }
    ctx->pc = 0x121974u;
    // 0x121974: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121974u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x121978: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x121978u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12197c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12197Cu;
    {
        const bool branch_taken_0x12197c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12197Cu;
        // 0x121980: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12197c) {
            ctx->pc = 0x121998u;
            goto label_121998;
        }
    }
    ctx->pc = 0x121984u;
    // 0x121984: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x121984u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121988: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121988u;
    {
        const bool branch_taken_0x121988 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121988) {
            ctx->pc = 0x12198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121988u;
            // 0x12198c: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12199Cu;
            goto label_12199c;
        }
    }
    ctx->pc = 0x121990u;
    // 0x121990: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x121990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x121994: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121994u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_121998:
    // 0x121998: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12199c:
    // 0x12199c: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12199cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1219a0: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x1219a0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1219a4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1219A4u;
    {
        const bool branch_taken_0x1219a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219a4) {
            ctx->pc = 0x1219A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1219A4u;
            // 0x1219a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1219ACu;
            goto label_1219ac;
        }
    }
    ctx->pc = 0x1219ACu;
label_1219ac:
    // 0x1219ac: 0x7812  mflo        $t7
    ctx->pc = 0x1219acu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1219b0: 0x7010  mfhi        $t6
    ctx->pc = 0x1219b0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1219b4: 0x3812  mflo        $a3
    ctx->pc = 0x1219b4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1219b8: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1219b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1219bc: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x1219bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1219c0: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x1219c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1219c4: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x1219c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1219c8: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1219C8u;
    {
        const bool branch_taken_0x1219c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219C8u;
        // 0x1219cc: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219c8) {
            ctx->pc = 0x1219F8u;
            goto label_1219f8;
        }
    }
    ctx->pc = 0x1219D0u;
    // 0x1219d0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x1219d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1219d4: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x1219d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1219d8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1219D8u;
    {
        const bool branch_taken_0x1219d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D8u;
        // 0x1219dc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d8) {
            ctx->pc = 0x1219F4u;
            goto label_1219f4;
        }
    }
    ctx->pc = 0x1219E0u;
    // 0x1219e0: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x1219e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1219e4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1219E4u;
    {
        const bool branch_taken_0x1219e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219E4u;
        // 0x1219e8: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219e4) {
            ctx->pc = 0x1219F8u;
            goto label_1219f8;
        }
    }
    ctx->pc = 0x1219ECu;
    // 0x1219ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1219ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1219f0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x1219f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_1219f4:
    // 0x1219f4: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x1219f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1219f8:
    // 0x1219f8: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x1219f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1219fc: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x1219FCu;
    {
        const bool branch_taken_0x1219fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219FCu;
        // 0x121a00: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219fc) {
            ctx->pc = 0x121858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121858;
        }
    }
    ctx->pc = 0x121A04u;
label_121a04:
    // 0x121a04: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x121a04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121a08: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x121a0c: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x121a0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121a10: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121a10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121a14: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x121a14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a18: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x121A18u;
    {
        const bool branch_taken_0x121a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A18u;
        // 0x121a1c: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a18) {
            ctx->pc = 0x121820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121820;
        }
    }
    ctx->pc = 0x121A20u;
label_121a20:
    // 0x121a20: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x121a20u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121a24: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x121A24u;
    {
        const bool branch_taken_0x121a24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A24u;
        // 0x121a28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a24) {
            ctx->pc = 0x121AA4u;
            goto label_121aa4;
        }
    }
    ctx->pc = 0x121A2Cu;
    // 0x121a2c: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x121a2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x121a30: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x121a30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121a34: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x121A34u;
    {
        const bool branch_taken_0x121a34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A34u;
        // 0x121a38: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a34) {
            ctx->pc = 0x121C90u;
            goto label_121c90;
        }
    }
    ctx->pc = 0x121A3Cu;
    // 0x121a3c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121a40: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x121a40u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121a44: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121a44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a48: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121a48u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121a4c:
    // 0x121a4c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x121a50: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x121a54: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121a54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121a58: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121a5c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x121a60: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x121a60u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121a64: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x121a68: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121a6c: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x121A6Cu;
    {
        const bool branch_taken_0x121a6c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A6Cu;
        // 0x121a70: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a6c) {
            ctx->pc = 0x121AD8u;
            goto label_121ad8;
        }
    }
    ctx->pc = 0x121A74u;
    // 0x121a74: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x121a74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x121a78: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x121A78u;
    {
        const bool branch_taken_0x121a78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A78u;
        // 0x121a7c: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a78) {
            ctx->pc = 0x121A90u;
            goto label_121a90;
        }
    }
    ctx->pc = 0x121A80u;
    // 0x121a80: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x121a80u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121a84: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x121A84u;
    {
        const bool branch_taken_0x121a84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A84u;
        // 0x121a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a84) {
            ctx->pc = 0x121AA4u;
            goto label_121aa4;
        }
    }
    ctx->pc = 0x121A8Cu;
    // 0x121a8c: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x121a8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_121a90:
    // 0x121a90: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x121a90u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x121a94: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x121a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121a9c: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x121a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x121aa0: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x121aa0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_121aa4:
    // 0x121aa4: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x121AA4u;
    {
        const bool branch_taken_0x121aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA4u;
        // 0x121aa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121aa4) {
            ctx->pc = 0x12178Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12178c;
        }
    }
    ctx->pc = 0x121AACu;
    // 0x121aac: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x121aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121ab0: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x121ab0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x121ab4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121ab4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121ab8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x121ab8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x121abc: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x121abcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x121ac0: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x121ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x121ac4: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x121ac4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_121ac8:
    // 0x121ac8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x121ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x121acc: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x121accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x121ad0: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x121AD0u;
    {
        const bool branch_taken_0x121ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AD0u;
        // 0x121ad4: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ad0) {
            ctx->pc = 0x121788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121788;
        }
    }
    ctx->pc = 0x121AD8u;
label_121ad8:
    // 0x121ad8: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x121ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x121adc: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x121adcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x121ae0: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x121ae4: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x121ae4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x121ae8: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x121ae8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121aec: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x121af0: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x121af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x121af4: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x121af4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x121af8: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x121af8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x121afc: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x121afcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x121b00: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x121b04: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x121b04u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x121b08: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x121b08u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x121b0c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121B0Cu;
    {
        const bool branch_taken_0x121b0c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b0c) {
            ctx->pc = 0x121B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B0Cu;
            // 0x121b10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B14u;
            goto label_121b14;
        }
    }
    ctx->pc = 0x121B14u;
label_121b14:
    // 0x121b14: 0x7010  mfhi        $t6
    ctx->pc = 0x121b14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121b18: 0x6012  mflo        $t4
    ctx->pc = 0x121b18u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121b1c: 0x3812  mflo        $a3
    ctx->pc = 0x121b1cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x121b20: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121b20u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121b24: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x121b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x121b28: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x121b28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121b2c: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x121b2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121b30: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121B30u;
    {
        const bool branch_taken_0x121b30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b30) {
            ctx->pc = 0x121B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B30u;
            // 0x121b34: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B60u;
            goto label_121b60;
        }
    }
    ctx->pc = 0x121B38u;
    // 0x121b38: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x121b38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x121b3c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x121b3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121b40: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121B40u;
    {
        const bool branch_taken_0x121b40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B40u;
        // 0x121b44: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b40) {
            ctx->pc = 0x121B5Cu;
            goto label_121b5c;
        }
    }
    ctx->pc = 0x121B48u;
    // 0x121b48: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x121b48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121b4c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121B4Cu;
    {
        const bool branch_taken_0x121b4c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b4c) {
            ctx->pc = 0x121B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B4Cu;
            // 0x121b50: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B60u;
            goto label_121b60;
        }
    }
    ctx->pc = 0x121B54u;
    // 0x121b54: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x121b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121b58: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x121b58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_121b5c:
    // 0x121b5c: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_121b60:
    // 0x121b60: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x121b60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x121b64: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x121b64u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x121b68: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121B68u;
    {
        const bool branch_taken_0x121b68 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121b68) {
            ctx->pc = 0x121B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B68u;
            // 0x121b6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B70u;
            goto label_121b70;
        }
    }
    ctx->pc = 0x121B70u;
label_121b70:
    // 0x121b70: 0x7812  mflo        $t7
    ctx->pc = 0x121b70u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121b74: 0x7010  mfhi        $t6
    ctx->pc = 0x121b74u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121b78: 0x6012  mflo        $t4
    ctx->pc = 0x121b78u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121b7c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121b80: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x121b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x121b84: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x121b84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121b88: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x121b88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121b8c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121B8Cu;
    {
        const bool branch_taken_0x121b8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B8Cu;
        // 0x121b90: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b8c) {
            ctx->pc = 0x121BBCu;
            goto label_121bbc;
        }
    }
    ctx->pc = 0x121B94u;
    // 0x121b94: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x121b98: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x121b98u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121b9c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121B9Cu;
    {
        const bool branch_taken_0x121b9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B9Cu;
        // 0x121ba0: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b9c) {
            ctx->pc = 0x121BB8u;
            goto label_121bb8;
        }
    }
    ctx->pc = 0x121BA4u;
    // 0x121ba4: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x121ba4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121ba8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121BA8u;
    {
        const bool branch_taken_0x121ba8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA8u;
        // 0x121bac: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ba8) {
            ctx->pc = 0x121BBCu;
            goto label_121bbc;
        }
    }
    ctx->pc = 0x121BB0u;
    // 0x121bb0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x121bb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x121bb4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x121bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_121bb8:
    // 0x121bb8: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x121bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_121bbc:
    // 0x121bbc: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x121bbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121bc0: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x121bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x121bc4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x121bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121bc8: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x121bc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x121bcc: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x121bccu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121bd0: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x121bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x121bd4: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x121bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121bd8: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x121bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x121bdc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x121bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121be0: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x121be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x121be4: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x121be8: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x121be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x121bec: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x121becu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x121bf0: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x121bf0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x121bf4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x121BF4u;
    {
        const bool branch_taken_0x121bf4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BF4u;
        // 0x121bf8: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bf4) {
            ctx->pc = 0x121C04u;
            goto label_121c04;
        }
    }
    ctx->pc = 0x121BFCu;
    // 0x121bfc: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x121bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x121c00: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x121c00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_121c04:
    // 0x121c04: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x121c04u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x121c08: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x121c08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x121c0c: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x121c10: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x121c10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x121c14: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x121c14u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121c18: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x121C18u;
    {
        const bool branch_taken_0x121c18 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x121C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C18u;
        // 0x121c1c: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c18) {
            ctx->pc = 0x121C30u;
            goto label_121c30;
        }
    }
    ctx->pc = 0x121C20u;
    // 0x121c20: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121C20u;
    {
        const bool branch_taken_0x121c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x121C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C20u;
        // 0x121c24: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c20) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121C28u;
    // 0x121c28: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x121C28u;
    {
        const bool branch_taken_0x121c28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c28) {
            ctx->pc = 0x121C48u;
            goto label_121c48;
        }
    }
    ctx->pc = 0x121C30u;
label_121c30:
    // 0x121c30: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x121c30u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x121c34: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x121c34u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x121c38: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x121c38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x121c3c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x121c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121c40: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x121c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x121c44: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x121c44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_121c48:
    // 0x121c48: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x121C48u;
    {
        const bool branch_taken_0x121c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C48u;
        // 0x121c4c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c48) {
            ctx->pc = 0x12178Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12178c;
        }
    }
    ctx->pc = 0x121C50u;
    // 0x121c50: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x121c50u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x121c54: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x121c54u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x121c58: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x121c58u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x121c5c: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x121c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x121c60: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x121c64: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x121c64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x121c68: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x121c68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121c6c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121c6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121c70: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x121c70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x121c74: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x121c74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x121c78: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x121c78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x121c7c: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x121c7cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121c80: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x121c80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x121c84: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121c84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121c88: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x121C88u;
    {
        const bool branch_taken_0x121c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C88u;
        // 0x121c8c: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c88) {
            ctx->pc = 0x121AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121ac8;
        }
    }
    ctx->pc = 0x121C90u;
label_121c90:
    // 0x121c90: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x121c90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121c94: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x121c94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x121c98: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121c9c: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x121c9cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121ca0: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x121ca0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ca4: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x121CA4u;
    {
        const bool branch_taken_0x121ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CA4u;
        // 0x121ca8: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ca4) {
            ctx->pc = 0x121A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121a4c;
        }
    }
    ctx->pc = 0x121CACu;
    // 0x121cac: 0x0  nop
    ctx->pc = 0x121cacu;
    // NOP
    if (ctx->pc == 0x121cacu) { ctx->pc = 0x121cb0u; }
}
