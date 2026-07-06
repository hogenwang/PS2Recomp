#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F26C8
// Address: 0x1f26c8 - 0x1f27c0
void sub_001F26C8_0x1f26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F26C8_0x1f26c8");
#endif

    ctx->pc = 0x1f26c8u;

    // 0x1f26c8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1f26c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26cc: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f26d0: 0x85a3001c  lh          $v1, 0x1C($t5)
    ctx->pc = 0x1f26d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x1f26d4: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x1f26d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f26d8: 0x85a2001e  lh          $v0, 0x1E($t5)
    ctx->pc = 0x1f26d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 30)));
    // 0x1f26dc: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x1f26dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f26e0: 0x8da70018  lw          $a3, 0x18($t5)
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
    // 0x1f26e4: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f26e8: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x1f26e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f26ec: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x1f26ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1f26f0: 0x8da40014  lw          $a0, 0x14($t5)
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1f26f4: 0xe17c2  srl         $v0, $t6, 31
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x1f26f8: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1f26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1f26fc: 0xf3080  sll         $a2, $t7, 2
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1f2700: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1f2700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f2704: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f2704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f2708: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f270c: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x1f270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
    // 0x1f2710: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f2710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1f2714: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f2718: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f271c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f2720: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1f2720u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2724: 0x8da40010  lw          $a0, 0x10($t5)
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1f2728: 0x8da6000c  lw          $a2, 0xC($t5)
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x1f272c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F272Cu;
    {
        const bool branch_taken_0x1f272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f272c) {
            ctx->pc = 0x1F2730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F272Cu;
            // 0x1f2730: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2734u;
            goto label_1f2734;
        }
    }
    ctx->pc = 0x1F2734u;
label_1f2734:
    // 0x1f2734: 0x8daa0008  lw          $t2, 0x8($t5)
    ctx->pc = 0x1f2734u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x1f2738: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1f273c: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1f2740: 0x3812  mflo        $a3
    ctx->pc = 0x1f2740u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1f2744: 0x4810  mfhi        $t1
    ctx->pc = 0x1f2744u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1f2748: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1f2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f274c: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x1f274cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2750: 0x2012  mflo        $a0
    ctx->pc = 0x1f2750u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1f2754: 0x3810  mfhi        $a3
    ctx->pc = 0x1f2754u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1f2758: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1f2758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f275c: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x1f275cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2760: 0x3012  mflo        $a2
    ctx->pc = 0x1f2760u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1f2764: 0x2010  mfhi        $a0
    ctx->pc = 0x1f2764u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f2768: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2768u;
    {
        const bool branch_taken_0x1f2768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2768u;
            // 0x1f276c: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2768) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2770u;
    // 0x1f2770: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2770u;
    {
        const bool branch_taken_0x1f2770 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2770) {
            ctx->pc = 0x1F2774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2770u;
            // 0x1f2774: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F27A0u;
            goto label_1f27a0;
        }
    }
    ctx->pc = 0x1F2778u;
    // 0x1f2778: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f277c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1f277cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f2780: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2780u;
    {
        const bool branch_taken_0x1f2780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2780) {
            ctx->pc = 0x1F2784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2780u;
            // 0x1f2784: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2788u;
            goto label_1f2788;
        }
    }
    ctx->pc = 0x1F2788u;
label_1f2788:
    // 0x1f2788: 0x1810  mfhi        $v1
    ctx->pc = 0x1f2788u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f278c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F278Cu;
    {
        const bool branch_taken_0x1f278c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F278Cu;
            // 0x1f2790: 0x2d230002  sltiu       $v1, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f278c) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2794u;
    // 0x1f2794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2798: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x1f2798u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_1f279c:
    // 0x1f279c: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_1f27a0:
    // 0x1f27a0: 0xa4ae001e  sh          $t6, 0x1E($a1)
    ctx->pc = 0x1f27a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 14));
    // 0x1f27a4: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x1f27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1f27a8: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x1f27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 10));
    // 0x1f27ac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1f27acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1f27b0: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1f27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1f27b4: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x1f27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x1f27b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F27B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F27BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F27B8u;
            // 0x1f27bc: 0xaca90014  sw          $t1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F27C0u;
    ctx->pc = 0x1f27c0u;
}
