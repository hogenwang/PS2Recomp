#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2630
// Address: 0x2a2630 - 0x2a2728
void sub_002A2630_0x2a2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2630_0x2a2630");
#endif

    switch (ctx->pc) {
        case 0x2a2650u: goto label_2a2650;
        case 0x2a2688u: goto label_2a2688;
        case 0x2a271cu: goto label_2a271c;
        default: break;
    }

    ctx->pc = 0x2a2630u;

    // 0x2a2630: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2630u;
    {
        const bool branch_taken_0x2a2630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2630) {
            ctx->pc = 0x2A2634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2630u;
            // 0x2a2634: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2648u;
            goto label_2a2648;
        }
    }
    ctx->pc = 0x2A2638u;
    // 0x2a2638: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x2a2638u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a263c: 0x15400006  bnez        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A263Cu;
    {
        const bool branch_taken_0x2a263c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a263c) {
            ctx->pc = 0x2A2658u;
            goto label_2a2658;
        }
    }
    ctx->pc = 0x2A2644u;
    // 0x2a2644: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2a2644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2a2648:
    // 0x2a2648: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2648u;
            // 0x2a264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2650u;
label_2a2650:
    // 0x2a2650: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A2650u;
    {
        const bool branch_taken_0x2a2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2650u;
            // 0x2a2654: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2650) {
            ctx->pc = 0x2A26E8u;
            goto label_2a26e8;
        }
    }
    ctx->pc = 0x2A2658u;
label_2a2658:
    // 0x2a2658: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2658u;
    {
        const bool branch_taken_0x2a2658 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2658u;
            // 0x2a265c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2658) {
            ctx->pc = 0x2A2664u;
            goto label_2a2664;
        }
    }
    ctx->pc = 0x2A2660u;
    // 0x2a2660: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x2a2660u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a2664:
    // 0x2a2664: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x2a2664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2a2668: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x2a2668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2a266c: 0x62580b  movn        $t3, $v1, $v0
    ctx->pc = 0x2a266cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
    // 0x2a2670: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2674: 0x2cac0001  sltiu       $t4, $a1, 0x1
    ctx->pc = 0x2a2674u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a2678: 0x2ccd0001  sltiu       $t5, $a2, 0x1
    ctx->pc = 0x2a2678u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a267c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2a267cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2680: 0x240ffffb  addiu       $t7, $zero, -0x5
    ctx->pc = 0x2a2680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2a2684: 0x0  nop
    ctx->pc = 0x2a2684u;
    // NOP
label_2a2688:
    // 0x2a2688: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A2688u;
    {
        const bool branch_taken_0x2a2688 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2688) {
            ctx->pc = 0x2A26F0u;
            goto label_2a26f0;
        }
    }
    ctx->pc = 0x2A2690u;
    // 0x2a2690: 0x15a00015  bnez        $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2690u;
    {
        const bool branch_taken_0x2a2690 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2690u;
            // 0x2a2694: 0x14e102a  slt         $v0, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2690) {
            ctx->pc = 0x2A26E8u;
            goto label_2a26e8;
        }
    }
    ctx->pc = 0x2A2698u;
    // 0x2a2698: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2698u;
    {
        const bool branch_taken_0x2a2698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2698) {
            ctx->pc = 0x2A269Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2698u;
            // 0x2a269c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A26B8u;
            goto label_2a26b8;
        }
    }
    ctx->pc = 0x2A26A0u;
    // 0x2a26a0: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x2a26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
    // 0x2a26a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A26A4u;
    {
        const bool branch_taken_0x2a26a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26a4) {
            ctx->pc = 0x2A26E8u;
            goto label_2a26e8;
        }
    }
    ctx->pc = 0x2A26ACu;
    // 0x2a26ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a26acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26b0: 0x12f4824  and         $t1, $t1, $t7
    ctx->pc = 0x2a26b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 15));
    // 0x2a26b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2a26b8:
    // 0x2a26b8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2a26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a26bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a26c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a26c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a26c8: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A26C8u;
    {
        const bool branch_taken_0x2a26c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a26c8) {
            ctx->pc = 0x2A26CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26C8u;
            // 0x2a26cc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A26E0u;
            goto label_2a26e0;
        }
    }
    ctx->pc = 0x2A26D0u;
    // 0x2a26d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a26d4: 0x50c2ffde  beql        $a2, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2A26D4u;
    {
        const bool branch_taken_0x2a26d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a26d4) {
            ctx->pc = 0x2A26D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26D4u;
            // 0x2a26d8: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2650;
        }
    }
    ctx->pc = 0x2A26DCu;
    // 0x2a26dc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2a26dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2a26e0:
    // 0x2a26e0: 0x154bffe9  bne         $t2, $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A26E0u;
    {
        const bool branch_taken_0x2a26e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x2a26e0) {
            ctx->pc = 0x2A2688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2688;
        }
    }
    ctx->pc = 0x2A26E8u;
label_2a26e8:
    // 0x2a26e8: 0x5180000d  beql        $t4, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A26E8u;
    {
        const bool branch_taken_0x2a26e8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a26e8) {
            ctx->pc = 0x2A26ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26E8u;
            // 0x2a26ec: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2720u;
            goto label_2a2720;
        }
    }
    ctx->pc = 0x2A26F0u;
label_2a26f0:
    // 0x2a26f0: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x2A26F0u;
    {
        const bool branch_taken_0x2a26f0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A26F0u;
            // 0x2a26f4: 0xa1880  sll         $v1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26f0) {
            ctx->pc = 0x2A271Cu;
            goto label_2a271c;
        }
    }
    ctx->pc = 0x2A26F8u;
    // 0x2a26f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2a26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a26fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2700: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a2700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2704: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2704u;
    {
        const bool branch_taken_0x2a2704 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2704u;
            // 0x2a2708: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2704) {
            ctx->pc = 0x2A2714u;
            goto label_2a2714;
        }
    }
    ctx->pc = 0x2A270Cu;
    // 0x2a270c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2a270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2a2710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2a2710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2a2714:
    // 0x2a2714: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2714u;
            // 0x2a2718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A271Cu;
label_2a271c:
    // 0x2a271c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2a271cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2a2720:
    // 0x2a2720: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2720u;
            // 0x2a2724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2728u;
    ctx->pc = 0x2a2728u;
}
