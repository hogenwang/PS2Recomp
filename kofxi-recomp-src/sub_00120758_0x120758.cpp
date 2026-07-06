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

// Function: sub_00120758
// Address: 0x120758 - 0x120e08
void sub_00120758_0x120758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120758_0x120758");
#endif

    switch (ctx->pc) {
        case 0x1207b0u: goto label_1207b0;
        case 0x1208b8u: goto label_1208b8;
        case 0x1208e0u: goto label_1208e0;
        case 0x1208e4u: goto label_1208e4;
        case 0x120978u: goto label_120978;
        case 0x1209b0u: goto label_1209b0;
        case 0x120ba4u: goto label_120ba4;
        case 0x120c20u: goto label_120c20;
        default: break;
    }

    ctx->pc = 0x120758u;

    // 0x120758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12075c: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x12075cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120764: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x120764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120768: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x120768u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12076c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120774: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x120774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120778: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x120778u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12077c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12077cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120780: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x120780u;
    {
        const bool branch_taken_0x120780 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x120784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120780u;
        // 0x120784: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120780) {
            ctx->pc = 0x120B78u;
            goto label_120b78;
        }
    }
    ctx->pc = 0x120788u;
    // 0x120788: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x120788u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12078c: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12078Cu;
    {
        const bool branch_taken_0x12078c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12078Cu;
        // 0x120790: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12078c) {
            ctx->pc = 0x12093Cu;
            goto label_12093c;
        }
    }
    ctx->pc = 0x120794u;
    // 0x120794: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x120794u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120798: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x120798u;
    {
        const bool branch_taken_0x120798 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120798u;
        // 0x12079c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120798) {
            ctx->pc = 0x120920u;
            goto label_120920;
        }
    }
    ctx->pc = 0x1207A0u;
    // 0x1207a0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1207a4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x1207a4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1207a8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1207a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207ac: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1207acu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_1207b0:
    // 0x1207b0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x1207b4: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x1207b8: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x1207b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x1207bc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1207bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1207c0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1207c4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x1207c4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1207c8: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1207c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1207cc: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x1207ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1207d0: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x1207D0u;
    {
        const bool branch_taken_0x1207d0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207D0u;
        // 0x1207d4: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207d0) {
            ctx->pc = 0x1207ECu;
            goto label_1207ec;
        }
    }
    ctx->pc = 0x1207D8u;
    // 0x1207d8: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x1207d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x1207dc: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x1207e0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x1207e4: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x1207e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1207e8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x1207e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_1207ec:
    // 0x1207ec: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x1207ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1207f0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x1207f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1207f4: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x1207f4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x1207f8: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x1207f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x1207fc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1207FCu;
    {
        const bool branch_taken_0x1207fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1207fc) {
            ctx->pc = 0x120800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207FCu;
            // 0x120800: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120804u;
            goto label_120804;
        }
    }
    ctx->pc = 0x120804u;
label_120804:
    // 0x120804: 0x7812  mflo        $t7
    ctx->pc = 0x120804u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120808: 0x7010  mfhi        $t6
    ctx->pc = 0x120808u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12080c: 0x6012  mflo        $t4
    ctx->pc = 0x12080cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x120810: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120814: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x120814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x120818: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x120818u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12081c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12081cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120820: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x120820u;
    {
        const bool branch_taken_0x120820 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x120820) {
            ctx->pc = 0x120824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120820u;
            // 0x120824: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120850u;
            goto label_120850;
        }
    }
    ctx->pc = 0x120828u;
    // 0x120828: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x120828u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12082c: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12082cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120830: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120830u;
    {
        const bool branch_taken_0x120830 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120830u;
        // 0x120834: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120830) {
            ctx->pc = 0x12084Cu;
            goto label_12084c;
        }
    }
    ctx->pc = 0x120838u;
    // 0x120838: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x120838u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12083c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12083Cu;
    {
        const bool branch_taken_0x12083c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12083c) {
            ctx->pc = 0x120840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12083Cu;
            // 0x120840: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120850u;
            goto label_120850;
        }
    }
    ctx->pc = 0x120844u;
    // 0x120844: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x120848: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12084c:
    // 0x12084c: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12084cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_120850:
    // 0x120850: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x120850u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x120854: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x120854u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x120858: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120858u;
    {
        const bool branch_taken_0x120858 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x120858) {
            ctx->pc = 0x12085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120858u;
            // 0x12085c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120860u;
            goto label_120860;
        }
    }
    ctx->pc = 0x120860u;
label_120860:
    // 0x120860: 0x7812  mflo        $t7
    ctx->pc = 0x120860u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120864: 0x7010  mfhi        $t6
    ctx->pc = 0x120864u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120868: 0x5812  mflo        $t3
    ctx->pc = 0x120868u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12086c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120870: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x120870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x120874: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x120874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120878: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x120878u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12087c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12087Cu;
    {
        const bool branch_taken_0x12087c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12087Cu;
        // 0x120880: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12087c) {
            ctx->pc = 0x1208ACu;
            goto label_1208ac;
        }
    }
    ctx->pc = 0x120884u;
    // 0x120884: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x120884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x120888: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x120888u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12088c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12088Cu;
    {
        const bool branch_taken_0x12088c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12088Cu;
        // 0x120890: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12088c) {
            ctx->pc = 0x1208A8u;
            goto label_1208a8;
        }
    }
    ctx->pc = 0x120894u;
    // 0x120894: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x120894u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120898: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x120898u;
    {
        const bool branch_taken_0x120898 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120898u;
        // 0x12089c: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120898) {
            ctx->pc = 0x1208ACu;
            goto label_1208ac;
        }
    }
    ctx->pc = 0x1208A0u;
    // 0x1208a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1208a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1208a4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_1208a8:
    // 0x1208a8: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_1208ac:
    // 0x1208ac: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1208b0: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x1208b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x1208b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1208b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1208b8:
    // 0x1208b8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1208B8u;
    {
        const bool branch_taken_0x1208b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208B8u;
        // 0x1208bc: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208b8) {
            ctx->pc = 0x1208E4u;
            goto label_1208e4;
        }
    }
    ctx->pc = 0x1208C0u;
    // 0x1208c0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1208c4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1208c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1208c8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1208c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1208cc: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x1208ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x1208d0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1208d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1208d4: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x1208d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x1208d8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1208d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1208dc: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1208dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_1208e0:
    // 0x1208e0: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x1208e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_1208e4:
    // 0x1208e4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1208e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1208e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208ec: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1208f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1208f4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1208f8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1208f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1208fc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1208fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x120900: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x120900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x120904: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x120908: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12090c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12090cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120910: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120914: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x120914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x120918: 0x3e00008  jr          $ra
    ctx->pc = 0x120918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120918u;
        // 0x12091c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120920u;
label_120920:
    // 0x120920: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x120920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120924: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x120924u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x120928: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x120928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12092c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120930: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x120930u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120934: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x120934u;
    {
        const bool branch_taken_0x120934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120934u;
        // 0x120938: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120934) {
            ctx->pc = 0x1207B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1207b0;
        }
    }
    ctx->pc = 0x12093Cu;
label_12093c:
    // 0x12093c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12093Cu;
    {
        const bool branch_taken_0x12093c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x120940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12093Cu;
        // 0x120940: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12093c) {
            ctx->pc = 0x120960u;
            goto label_120960;
        }
    }
    ctx->pc = 0x120944u;
    // 0x120944: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x120944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120948: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x120948u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12094c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12094Cu;
    {
        const bool branch_taken_0x12094c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12094c) {
            ctx->pc = 0x120950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12094Cu;
            // 0x120950: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120954u;
            goto label_120954;
        }
    }
    ctx->pc = 0x120954u;
label_120954:
    // 0x120954: 0x2812  mflo        $a1
    ctx->pc = 0x120954u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x120958: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x120958u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12095c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12095cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_120960:
    // 0x120960: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x120960u;
    {
        const bool branch_taken_0x120960 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120960u;
        // 0x120964: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120960) {
            ctx->pc = 0x120B5Cu;
            goto label_120b5c;
        }
    }
    ctx->pc = 0x120968u;
    // 0x120968: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12096c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12096cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120970: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x120970u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120974: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x120974u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_120978:
    // 0x120978: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12097c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x120980: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x120980u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x120984: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x120984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120988: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12098c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12098cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x120990: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x120990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x120994: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x120994u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x120998: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x120998u;
    {
        const bool branch_taken_0x120998 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120998u;
        // 0x12099c: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120998) {
            ctx->pc = 0x120A74u;
            goto label_120a74;
        }
    }
    ctx->pc = 0x1209A0u;
    // 0x1209a0: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x1209a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1209a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1209a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1209a8: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x1209a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1209ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1209acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1209b0:
    // 0x1209b0: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x1209b0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x1209b4: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x1209b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x1209b8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1209B8u;
    {
        const bool branch_taken_0x1209b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209b8) {
            ctx->pc = 0x1209BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1209B8u;
            // 0x1209bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1209C0u;
            goto label_1209c0;
        }
    }
    ctx->pc = 0x1209C0u;
label_1209c0:
    // 0x1209c0: 0x7010  mfhi        $t6
    ctx->pc = 0x1209c0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1209c4: 0x6812  mflo        $t5
    ctx->pc = 0x1209c4u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1209c8: 0x4812  mflo        $t1
    ctx->pc = 0x1209c8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1209cc: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1209ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1209d0: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x1209d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1209d4: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x1209d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x1209d8: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1209d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1209dc: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1209DCu;
    {
        const bool branch_taken_0x1209dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209dc) {
            ctx->pc = 0x1209E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1209DCu;
            // 0x1209e0: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120A0Cu;
            goto label_120a0c;
        }
    }
    ctx->pc = 0x1209E4u;
    // 0x1209e4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1209e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1209e8: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x1209e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1209ec: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1209ECu;
    {
        const bool branch_taken_0x1209ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1209F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209ECu;
        // 0x1209f0: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209ec) {
            ctx->pc = 0x120A08u;
            goto label_120a08;
        }
    }
    ctx->pc = 0x1209F4u;
    // 0x1209f4: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1209f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1209f8: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1209F8u;
    {
        const bool branch_taken_0x1209f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209f8) {
            ctx->pc = 0x1209FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1209F8u;
            // 0x1209fc: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120A0Cu;
            goto label_120a0c;
        }
    }
    ctx->pc = 0x120A00u;
    // 0x120a00: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x120a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x120a04: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x120a04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_120a08:
    // 0x120a08: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x120a08u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_120a0c:
    // 0x120a0c: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x120a0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x120a10: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x120a10u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x120a14: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120A14u;
    {
        const bool branch_taken_0x120a14 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x120a14) {
            ctx->pc = 0x120A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120A14u;
            // 0x120a18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120A1Cu;
            goto label_120a1c;
        }
    }
    ctx->pc = 0x120A1Cu;
label_120a1c:
    // 0x120a1c: 0x7812  mflo        $t7
    ctx->pc = 0x120a1cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120a20: 0x7010  mfhi        $t6
    ctx->pc = 0x120a20u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120a24: 0x5012  mflo        $t2
    ctx->pc = 0x120a24u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x120a28: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120a28u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120a2c: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x120a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x120a30: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x120a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120a34: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x120a34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120a38: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x120A38u;
    {
        const bool branch_taken_0x120a38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A38u;
        // 0x120a3c: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a38) {
            ctx->pc = 0x120A68u;
            goto label_120a68;
        }
    }
    ctx->pc = 0x120A40u;
    // 0x120a40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x120a44: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x120a44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120a48: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120A48u;
    {
        const bool branch_taken_0x120a48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A48u;
        // 0x120a4c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a48) {
            ctx->pc = 0x120A64u;
            goto label_120a64;
        }
    }
    ctx->pc = 0x120A50u;
    // 0x120a50: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x120a50u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120a54: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x120A54u;
    {
        const bool branch_taken_0x120a54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A54u;
        // 0x120a58: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a54) {
            ctx->pc = 0x120A68u;
            goto label_120a68;
        }
    }
    ctx->pc = 0x120A5Cu;
    // 0x120a5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x120a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x120a60: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_120a64:
    // 0x120a64: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x120a64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_120a68:
    // 0x120a68: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x120a6c: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x120A6Cu;
    {
        const bool branch_taken_0x120a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A6Cu;
        // 0x120a70: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a6c) {
            ctx->pc = 0x1208B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1208b8;
        }
    }
    ctx->pc = 0x120A74u;
label_120a74:
    // 0x120a74: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x120a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x120a78: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x120a78u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x120a7c: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x120a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x120a80: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x120a80u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x120a84: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x120a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x120a88: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x120a88u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x120a8c: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x120a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x120a90: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x120a90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x120a94: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x120a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a98: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x120a98u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120a9c: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x120a9cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x120aa0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120AA0u;
    {
        const bool branch_taken_0x120aa0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x120aa0) {
            ctx->pc = 0x120AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120AA0u;
            // 0x120aa4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120AA8u;
            goto label_120aa8;
        }
    }
    ctx->pc = 0x120AA8u;
label_120aa8:
    // 0x120aa8: 0x6810  mfhi        $t5
    ctx->pc = 0x120aa8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x120aac: 0x6012  mflo        $t4
    ctx->pc = 0x120aacu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x120ab0: 0x2012  mflo        $a0
    ctx->pc = 0x120ab0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x120ab4: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x120ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x120ab8: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x120ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x120abc: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x120abcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x120ac0: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x120ac0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120ac4: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x120AC4u;
    {
        const bool branch_taken_0x120ac4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AC4u;
        // 0x120ac8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ac4) {
            ctx->pc = 0x120AF0u;
            goto label_120af0;
        }
    }
    ctx->pc = 0x120ACCu;
    // 0x120acc: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x120accu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x120ad0: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x120ad0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120ad4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120AD4u;
    {
        const bool branch_taken_0x120ad4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AD4u;
        // 0x120ad8: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ad4) {
            ctx->pc = 0x120AF0u;
            goto label_120af0;
        }
    }
    ctx->pc = 0x120ADCu;
    // 0x120adc: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x120adcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120ae0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x120AE0u;
    {
        const bool branch_taken_0x120ae0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ae0) {
            ctx->pc = 0x120AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120AE0u;
            // 0x120ae4: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120AF4u;
            goto label_120af4;
        }
    }
    ctx->pc = 0x120AE8u;
    // 0x120ae8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x120ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x120aec: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x120aecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_120af0:
    // 0x120af0: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_120af4:
    // 0x120af4: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x120af4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x120af8: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x120af8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x120afc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120AFCu;
    {
        const bool branch_taken_0x120afc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x120afc) {
            ctx->pc = 0x120B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120AFCu;
            // 0x120b00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B04u;
            goto label_120b04;
        }
    }
    ctx->pc = 0x120B04u;
label_120b04:
    // 0x120b04: 0x7812  mflo        $t7
    ctx->pc = 0x120b04u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120b08: 0x7010  mfhi        $t6
    ctx->pc = 0x120b08u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120b0c: 0x3812  mflo        $a3
    ctx->pc = 0x120b0cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x120b10: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120b10u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120b14: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x120b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x120b18: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x120b18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120b1c: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x120b1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120b20: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x120B20u;
    {
        const bool branch_taken_0x120b20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B20u;
        // 0x120b24: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b20) {
            ctx->pc = 0x120B50u;
            goto label_120b50;
        }
    }
    ctx->pc = 0x120B28u;
    // 0x120b28: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x120b28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x120b2c: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x120b2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120b30: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120B30u;
    {
        const bool branch_taken_0x120b30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B30u;
        // 0x120b34: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b30) {
            ctx->pc = 0x120B4Cu;
            goto label_120b4c;
        }
    }
    ctx->pc = 0x120B38u;
    // 0x120b38: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x120b38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x120b3c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x120B3Cu;
    {
        const bool branch_taken_0x120b3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B3Cu;
        // 0x120b40: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b3c) {
            ctx->pc = 0x120B50u;
            goto label_120b50;
        }
    }
    ctx->pc = 0x120B44u;
    // 0x120b44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120b48: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x120b48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_120b4c:
    // 0x120b4c: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x120b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_120b50:
    // 0x120b50: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x120b50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x120b54: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x120B54u;
    {
        const bool branch_taken_0x120b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B54u;
        // 0x120b58: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b54) {
            ctx->pc = 0x1209B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1209b0;
        }
    }
    ctx->pc = 0x120B5Cu;
label_120b5c:
    // 0x120b5c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x120b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120b60: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x120b60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x120b64: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x120b64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120b68: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x120b68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120b6c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x120b6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b70: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x120B70u;
    {
        const bool branch_taken_0x120b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B70u;
        // 0x120b74: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b70) {
            ctx->pc = 0x120978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120978;
        }
    }
    ctx->pc = 0x120B78u;
label_120b78:
    // 0x120b78: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x120b78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120b7c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x120B7Cu;
    {
        const bool branch_taken_0x120b7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B7Cu;
        // 0x120b80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b7c) {
            ctx->pc = 0x120BFCu;
            goto label_120bfc;
        }
    }
    ctx->pc = 0x120B84u;
    // 0x120b84: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x120b84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x120b88: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x120b88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120b8c: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x120B8Cu;
    {
        const bool branch_taken_0x120b8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B8Cu;
        // 0x120b90: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b8c) {
            ctx->pc = 0x120DE8u;
            goto label_120de8;
        }
    }
    ctx->pc = 0x120B94u;
    // 0x120b94: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x120b94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120b98: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x120b98u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120b9c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x120b9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ba0: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x120ba0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_120ba4:
    // 0x120ba4: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x120ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x120ba8: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x120ba8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x120bac: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x120bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x120bb0: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x120bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120bb4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x120bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x120bb8: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x120bb8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x120bbc: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x120bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x120bc0: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x120bc4: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x120BC4u;
    {
        const bool branch_taken_0x120bc4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BC4u;
        // 0x120bc8: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bc4) {
            ctx->pc = 0x120C30u;
            goto label_120c30;
        }
    }
    ctx->pc = 0x120BCCu;
    // 0x120bcc: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x120bccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120bd0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x120BD0u;
    {
        const bool branch_taken_0x120bd0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BD0u;
        // 0x120bd4: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bd0) {
            ctx->pc = 0x120BE8u;
            goto label_120be8;
        }
    }
    ctx->pc = 0x120BD8u;
    // 0x120bd8: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x120bd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120bdc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x120BDCu;
    {
        const bool branch_taken_0x120bdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BDCu;
        // 0x120be0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bdc) {
            ctx->pc = 0x120BFCu;
            goto label_120bfc;
        }
    }
    ctx->pc = 0x120BE4u;
    // 0x120be4: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x120be4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_120be8:
    // 0x120be8: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x120be8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x120bec: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x120becu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x120bf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x120bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120bf4: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x120bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x120bf8: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x120bf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_120bfc:
    // 0x120bfc: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x120BFCu;
    {
        const bool branch_taken_0x120bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BFCu;
        // 0x120c00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bfc) {
            ctx->pc = 0x1208E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1208e4;
        }
    }
    ctx->pc = 0x120C04u;
    // 0x120c04: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x120c04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120c08: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x120c08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x120c0c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120c0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120c10: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x120c10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x120c14: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x120c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x120c18: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x120c18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x120c1c: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x120c1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_120c20:
    // 0x120c20: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x120c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x120c24: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x120c24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x120c28: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x120C28u;
    {
        const bool branch_taken_0x120c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C28u;
        // 0x120c2c: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c28) {
            ctx->pc = 0x1208E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1208e0;
        }
    }
    ctx->pc = 0x120C30u;
label_120c30:
    // 0x120c30: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x120c30u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x120c34: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x120c34u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x120c38: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x120c38u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x120c3c: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x120c3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x120c40: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x120c44: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x120c48: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x120c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x120c4c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x120c4cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x120c50: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x120c54: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x120c54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x120c58: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x120c5c: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x120c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120c60: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x120c60u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x120c64: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120C64u;
    {
        const bool branch_taken_0x120c64 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c64) {
            ctx->pc = 0x120C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C64u;
            // 0x120c68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120C6Cu;
            goto label_120c6c;
        }
    }
    ctx->pc = 0x120C6Cu;
label_120c6c:
    // 0x120c6c: 0x7010  mfhi        $t6
    ctx->pc = 0x120c6cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120c70: 0x6012  mflo        $t4
    ctx->pc = 0x120c70u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x120c74: 0x3812  mflo        $a3
    ctx->pc = 0x120c74u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x120c78: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120c78u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120c7c: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x120c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x120c80: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x120c80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120c84: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x120c84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120c88: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x120C88u;
    {
        const bool branch_taken_0x120c88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c88) {
            ctx->pc = 0x120C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120C88u;
            // 0x120c8c: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120CB8u;
            goto label_120cb8;
        }
    }
    ctx->pc = 0x120C90u;
    // 0x120c90: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x120c94: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x120c94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120c98: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120C98u;
    {
        const bool branch_taken_0x120c98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C98u;
        // 0x120c9c: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c98) {
            ctx->pc = 0x120CB4u;
            goto label_120cb4;
        }
    }
    ctx->pc = 0x120CA0u;
    // 0x120ca0: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x120ca0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120ca4: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x120CA4u;
    {
        const bool branch_taken_0x120ca4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ca4) {
            ctx->pc = 0x120CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120CA4u;
            // 0x120ca8: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120CB8u;
            goto label_120cb8;
        }
    }
    ctx->pc = 0x120CACu;
    // 0x120cac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120cb0: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x120cb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_120cb4:
    // 0x120cb4: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_120cb8:
    // 0x120cb8: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x120cb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x120cbc: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x120cbcu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x120cc0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120CC0u;
    {
        const bool branch_taken_0x120cc0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x120cc0) {
            ctx->pc = 0x120CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120CC0u;
            // 0x120cc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120CC8u;
            goto label_120cc8;
        }
    }
    ctx->pc = 0x120CC8u;
label_120cc8:
    // 0x120cc8: 0x7812  mflo        $t7
    ctx->pc = 0x120cc8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120ccc: 0x7010  mfhi        $t6
    ctx->pc = 0x120cccu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120cd0: 0x6012  mflo        $t4
    ctx->pc = 0x120cd0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x120cd4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120cd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120cd8: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x120cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x120cdc: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x120cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120ce0: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x120ce0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120ce4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x120CE4u;
    {
        const bool branch_taken_0x120ce4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CE4u;
        // 0x120ce8: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ce4) {
            ctx->pc = 0x120D14u;
            goto label_120d14;
        }
    }
    ctx->pc = 0x120CECu;
    // 0x120cec: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x120cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x120cf0: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x120cf0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120cf4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x120CF4u;
    {
        const bool branch_taken_0x120cf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CF4u;
        // 0x120cf8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120cf4) {
            ctx->pc = 0x120D10u;
            goto label_120d10;
        }
    }
    ctx->pc = 0x120CFCu;
    // 0x120cfc: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x120cfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120d00: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x120D00u;
    {
        const bool branch_taken_0x120d00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D00u;
        // 0x120d04: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d00) {
            ctx->pc = 0x120D14u;
            goto label_120d14;
        }
    }
    ctx->pc = 0x120D08u;
    // 0x120d08: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x120d0c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x120d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_120d10:
    // 0x120d10: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x120d10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_120d14:
    // 0x120d14: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x120d14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x120d18: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x120d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x120d1c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x120d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x120d20: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x120d20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x120d24: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x120d28: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x120d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x120d2c: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x120d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x120d30: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x120d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x120d34: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x120d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120d38: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x120d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x120d3c: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x120d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x120d40: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x120d40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x120d44: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x120d44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x120d48: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x120d48u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x120d4c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x120D4Cu;
    {
        const bool branch_taken_0x120d4c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x120D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D4Cu;
        // 0x120d50: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d4c) {
            ctx->pc = 0x120D5Cu;
            goto label_120d5c;
        }
    }
    ctx->pc = 0x120D54u;
    // 0x120d54: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x120d54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x120d58: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x120d58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_120d5c:
    // 0x120d5c: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x120d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x120d60: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x120d64: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x120d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x120d68: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x120d68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x120d6c: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x120d70: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x120D70u;
    {
        const bool branch_taken_0x120d70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D70u;
        // 0x120d74: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d70) {
            ctx->pc = 0x120D88u;
            goto label_120d88;
        }
    }
    ctx->pc = 0x120D78u;
    // 0x120d78: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x120D78u;
    {
        const bool branch_taken_0x120d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x120D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D78u;
        // 0x120d7c: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d78) {
            ctx->pc = 0x120DA0u;
            goto label_120da0;
        }
    }
    ctx->pc = 0x120D80u;
    // 0x120d80: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x120D80u;
    {
        const bool branch_taken_0x120d80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x120d80) {
            ctx->pc = 0x120DA0u;
            goto label_120da0;
        }
    }
    ctx->pc = 0x120D88u;
label_120d88:
    // 0x120d88: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x120d8c: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x120d8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x120d90: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x120d90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x120d94: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x120d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x120d98: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x120d9c: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_120da0:
    // 0x120da0: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x120DA0u;
    {
        const bool branch_taken_0x120da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DA0u;
        // 0x120da4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120da0) {
            ctx->pc = 0x1208E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1208e4;
        }
    }
    ctx->pc = 0x120DA8u;
    // 0x120da8: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x120da8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x120dac: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x120dacu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x120db0: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x120db0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x120db4: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x120db4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x120db8: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x120db8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x120dbc: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x120dc0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x120dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120dc4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120dc4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120dc8: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x120dc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x120dcc: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x120dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x120dd0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120dd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120dd4: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x120dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x120dd8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x120dd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x120ddc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120ddcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120de0: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x120DE0u;
    {
        const bool branch_taken_0x120de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DE0u;
        // 0x120de4: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120de0) {
            ctx->pc = 0x120C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120c20;
        }
    }
    ctx->pc = 0x120DE8u;
label_120de8:
    // 0x120de8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x120de8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120dec: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x120decu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x120df0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x120df0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120df4: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x120df4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120df8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x120df8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dfc: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x120DFCu;
    {
        const bool branch_taken_0x120dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DFCu;
        // 0x120e00: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dfc) {
            ctx->pc = 0x120BA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120ba4;
        }
    }
    ctx->pc = 0x120E04u;
    // 0x120e04: 0x0  nop
    ctx->pc = 0x120e04u;
    // NOP
    if (ctx->pc == 0x120e04u) { ctx->pc = 0x120e08u; }
}
