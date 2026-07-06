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

// Function: sub_00221660
// Address: 0x221660 - 0x221740
void sub_00221660_0x221660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221660_0x221660");
#endif

    switch (ctx->pc) {
        case 0x221660u: goto label_221660;
        case 0x221664u: goto label_221664;
        case 0x221668u: goto label_221668;
        case 0x22166cu: goto label_22166c;
        case 0x221670u: goto label_221670;
        case 0x221674u: goto label_221674;
        case 0x221678u: goto label_221678;
        case 0x22167cu: goto label_22167c;
        case 0x221680u: goto label_221680;
        case 0x221684u: goto label_221684;
        case 0x221688u: goto label_221688;
        case 0x22168cu: goto label_22168c;
        case 0x221690u: goto label_221690;
        case 0x221694u: goto label_221694;
        case 0x221698u: goto label_221698;
        case 0x22169cu: goto label_22169c;
        case 0x2216a0u: goto label_2216a0;
        case 0x2216a4u: goto label_2216a4;
        case 0x2216a8u: goto label_2216a8;
        case 0x2216acu: goto label_2216ac;
        case 0x2216b0u: goto label_2216b0;
        case 0x2216b4u: goto label_2216b4;
        case 0x2216b8u: goto label_2216b8;
        case 0x2216bcu: goto label_2216bc;
        case 0x2216c0u: goto label_2216c0;
        case 0x2216c4u: goto label_2216c4;
        case 0x2216c8u: goto label_2216c8;
        case 0x2216ccu: goto label_2216cc;
        case 0x2216d0u: goto label_2216d0;
        case 0x2216d4u: goto label_2216d4;
        case 0x2216d8u: goto label_2216d8;
        case 0x2216dcu: goto label_2216dc;
        case 0x2216e0u: goto label_2216e0;
        case 0x2216e4u: goto label_2216e4;
        case 0x2216e8u: goto label_2216e8;
        case 0x2216ecu: goto label_2216ec;
        case 0x2216f0u: goto label_2216f0;
        case 0x2216f4u: goto label_2216f4;
        case 0x2216f8u: goto label_2216f8;
        case 0x2216fcu: goto label_2216fc;
        case 0x221700u: goto label_221700;
        case 0x221704u: goto label_221704;
        case 0x221708u: goto label_221708;
        case 0x22170cu: goto label_22170c;
        case 0x221710u: goto label_221710;
        case 0x221714u: goto label_221714;
        case 0x221718u: goto label_221718;
        case 0x22171cu: goto label_22171c;
        case 0x221720u: goto label_221720;
        case 0x221724u: goto label_221724;
        case 0x221728u: goto label_221728;
        case 0x22172cu: goto label_22172c;
        case 0x221730u: goto label_221730;
        case 0x221734u: goto label_221734;
        case 0x221738u: goto label_221738;
        case 0x22173cu: goto label_22173c;
        default: break;
    }

    ctx->pc = 0x221660u;

label_221660:
    // 0x221660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_221664:
    // 0x221664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_221668:
    // 0x221668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x221668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_22166c:
    // 0x22166c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_221670:
    if (ctx->pc == 0x221670u) {
        ctx->pc = 0x221670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22166Cu;
        // 0x221670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221674u;
        goto label_221674;
    }
    ctx->pc = 0x22166Cu;
    {
        const bool branch_taken_0x22166c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22166Cu;
        // 0x221670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22166c) {
            ctx->pc = 0x2216A0u;
            goto label_2216a0;
        }
    }
    ctx->pc = 0x221674u;
label_221674:
    // 0x221674: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221678:
    // 0x221678: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22167c:
    // 0x22167c: 0x24842a38  addiu       $a0, $a0, 0x2A38
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10808));
label_221680:
    // 0x221680: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
label_221684:
    // 0x221684: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_221688:
    // 0x221688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22168c:
    // 0x22168c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_221690:
    // 0x221690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221694:
    // 0x221694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221698:
    // 0x221698: 0x8089794  j           func_225E50
label_22169c:
    if (ctx->pc == 0x22169Cu) {
        ctx->pc = 0x22169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221698u;
        // 0x22169c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216A0u;
        goto label_2216a0;
    }
    ctx->pc = 0x221698u;
    ctx->pc = 0x22169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221698u;
    // 0x22169c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x2216A0u;
label_2216a0:
    // 0x2216a0: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x2216a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2216a4:
    // 0x2216a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2216a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2216a8:
    // 0x2216a8: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
label_2216ac:
    if (ctx->pc == 0x2216ACu) {
        ctx->pc = 0x2216ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216A8u;
        // 0x2216ac: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216B0u;
        goto label_2216b0;
    }
    ctx->pc = 0x2216A8u;
    {
        const bool branch_taken_0x2216a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2216ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216A8u;
        // 0x2216ac: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216a8) {
            ctx->pc = 0x2216CCu;
            goto label_2216cc;
        }
    }
    ctx->pc = 0x2216B0u;
label_2216b0:
    // 0x2216b0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2216b4:
    // 0x2216b4: 0x24842a38  addiu       $a0, $a0, 0x2A38
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10808));
label_2216b8:
    // 0x2216b8: 0x25082a40  addiu       $t0, $t0, 0x2A40
    ctx->pc = 0x2216b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10816));
label_2216bc:
    // 0x2216bc: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x2216bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2216c0:
    // 0x2216c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2216c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2216c4:
    // 0x2216c4: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_2216c8:
    if (ctx->pc == 0x2216C8u) {
        ctx->pc = 0x2216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C4u;
        // 0x2216c8: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216CCu;
        goto label_2216cc;
    }
    ctx->pc = 0x2216C4u;
    {
        const bool branch_taken_0x2216c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C4u;
        // 0x2216c8: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216c4) {
            ctx->pc = 0x221690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221690;
        }
    }
    ctx->pc = 0x2216CCu;
label_2216cc:
    // 0x2216cc: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_2216d0:
    if (ctx->pc == 0x2216D0u) {
        ctx->pc = 0x2216D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216CCu;
        // 0x2216d0: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216D4u;
        goto label_2216d4;
    }
    ctx->pc = 0x2216CCu;
    {
        const bool branch_taken_0x2216cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2216D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216CCu;
        // 0x2216d0: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216cc) {
            ctx->pc = 0x2216ECu;
            goto label_2216ec;
        }
    }
    ctx->pc = 0x2216D4u;
label_2216d4:
    // 0x2216d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2216d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2216d8:
    // 0x2216d8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2216d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2216dc:
    // 0x2216dc: 0x24842a38  addiu       $a0, $a0, 0x2A38
    ctx->pc = 0x2216dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10808));
label_2216e0:
    // 0x2216e0: 0x25082a60  addiu       $t0, $t0, 0x2A60
    ctx->pc = 0x2216e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10848));
label_2216e4:
    // 0x2216e4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_2216e8:
    if (ctx->pc == 0x2216E8u) {
        ctx->pc = 0x2216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216E4u;
        // 0x2216e8: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216ECu;
        goto label_2216ec;
    }
    ctx->pc = 0x2216E4u;
    {
        const bool branch_taken_0x2216e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216E4u;
        // 0x2216e8: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216e4) {
            ctx->pc = 0x2216C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2216c0;
        }
    }
    ctx->pc = 0x2216ECu;
label_2216ec:
    // 0x2216ec: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
label_2216f0:
    if (ctx->pc == 0x2216F0u) {
        ctx->pc = 0x2216F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216ECu;
        // 0x2216f0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216F4u;
        goto label_2216f4;
    }
    ctx->pc = 0x2216ECu;
    {
        const bool branch_taken_0x2216ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2216F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216ECu;
        // 0x2216f0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216ec) {
            ctx->pc = 0x221710u;
            goto label_221710;
        }
    }
    ctx->pc = 0x2216F4u;
label_2216f4:
    // 0x2216f4: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
label_2216f8:
    if (ctx->pc == 0x2216F8u) {
        ctx->pc = 0x2216F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216F4u;
        // 0x2216f8: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216FCu;
        goto label_2216fc;
    }
    ctx->pc = 0x2216F4u;
    {
        const bool branch_taken_0x2216f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2216F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216F4u;
        // 0x2216f8: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216f4) {
            ctx->pc = 0x221710u;
            goto label_221710;
        }
    }
    ctx->pc = 0x2216FCu;
label_2216fc:
    // 0x2216fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2216fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221700:
    // 0x221700: 0x24842a38  addiu       $a0, $a0, 0x2A38
    ctx->pc = 0x221700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10808));
label_221704:
    // 0x221704: 0x25082a80  addiu       $t0, $t0, 0x2A80
    ctx->pc = 0x221704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10880));
label_221708:
    // 0x221708: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_22170c:
    if (ctx->pc == 0x22170Cu) {
        ctx->pc = 0x22170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221708u;
        // 0x22170c: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221710u;
        goto label_221710;
    }
    ctx->pc = 0x221708u;
    {
        const bool branch_taken_0x221708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221708u;
        // 0x22170c: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221708) {
            ctx->pc = 0x2216C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2216c0;
        }
    }
    ctx->pc = 0x221710u;
label_221710:
    // 0x221710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_221714:
    // 0x221714: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x221714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221718:
    // 0x221718: 0xc08867a  jal         func_2219E8
label_22171c:
    if (ctx->pc == 0x22171Cu) {
        ctx->pc = 0x22171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221718u;
        // 0x22171c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221720u;
        goto label_221720;
    }
    ctx->pc = 0x221718u;
    SET_GPR_U32(ctx, 31, 0x221720u);
    ctx->pc = 0x22171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221718u;
    // 0x22171c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x221718u, 0x221720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221720u;
label_221720:
    // 0x221720: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x221720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_221724:
    // 0x221724: 0x40f809  jalr        $v0
label_221728:
    if (ctx->pc == 0x221728u) {
        ctx->pc = 0x221728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221724u;
        // 0x221728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22172Cu;
        goto label_22172c;
    }
    ctx->pc = 0x221724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22172Cu);
        ctx->pc = 0x221728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221724u;
        // 0x221728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221724u, 0x22172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22172Cu;
label_22172c:
    // 0x22172c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22172cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221730:
    // 0x221730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221734:
    // 0x221734: 0x3e00008  jr          $ra
label_221738:
    if (ctx->pc == 0x221738u) {
        ctx->pc = 0x221738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221734u;
        // 0x221738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22173Cu;
        goto label_22173c;
    }
    ctx->pc = 0x221734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221734u;
        // 0x221738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22173Cu;
label_22173c:
    // 0x22173c: 0x0  nop
    ctx->pc = 0x22173cu;
    // NOP
    if (ctx->pc == 0x22173cu) { ctx->pc = 0x221740u; }
}
