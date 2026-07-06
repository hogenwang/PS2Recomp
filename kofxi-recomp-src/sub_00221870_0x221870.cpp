#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221870
// Address: 0x221870 - 0x221960
void sub_00221870_0x221870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221870_0x221870");
#endif

    switch (ctx->pc) {
        case 0x221870u: goto label_221870;
        case 0x221874u: goto label_221874;
        case 0x221878u: goto label_221878;
        case 0x22187cu: goto label_22187c;
        case 0x221880u: goto label_221880;
        case 0x221884u: goto label_221884;
        case 0x221888u: goto label_221888;
        case 0x22188cu: goto label_22188c;
        case 0x221890u: goto label_221890;
        case 0x221894u: goto label_221894;
        case 0x221898u: goto label_221898;
        case 0x22189cu: goto label_22189c;
        case 0x2218a0u: goto label_2218a0;
        case 0x2218a4u: goto label_2218a4;
        case 0x2218a8u: goto label_2218a8;
        case 0x2218acu: goto label_2218ac;
        case 0x2218b0u: goto label_2218b0;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218b8u: goto label_2218b8;
        case 0x2218bcu: goto label_2218bc;
        case 0x2218c0u: goto label_2218c0;
        case 0x2218c4u: goto label_2218c4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218ccu: goto label_2218cc;
        case 0x2218d0u: goto label_2218d0;
        case 0x2218d4u: goto label_2218d4;
        case 0x2218d8u: goto label_2218d8;
        case 0x2218dcu: goto label_2218dc;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218e4u: goto label_2218e4;
        case 0x2218e8u: goto label_2218e8;
        case 0x2218ecu: goto label_2218ec;
        case 0x2218f0u: goto label_2218f0;
        case 0x2218f4u: goto label_2218f4;
        case 0x2218f8u: goto label_2218f8;
        case 0x2218fcu: goto label_2218fc;
        case 0x221900u: goto label_221900;
        case 0x221904u: goto label_221904;
        case 0x221908u: goto label_221908;
        case 0x22190cu: goto label_22190c;
        case 0x221910u: goto label_221910;
        case 0x221914u: goto label_221914;
        case 0x221918u: goto label_221918;
        case 0x22191cu: goto label_22191c;
        case 0x221920u: goto label_221920;
        case 0x221924u: goto label_221924;
        case 0x221928u: goto label_221928;
        case 0x22192cu: goto label_22192c;
        case 0x221930u: goto label_221930;
        case 0x221934u: goto label_221934;
        case 0x221938u: goto label_221938;
        case 0x22193cu: goto label_22193c;
        case 0x221940u: goto label_221940;
        case 0x221944u: goto label_221944;
        case 0x221948u: goto label_221948;
        case 0x22194cu: goto label_22194c;
        case 0x221950u: goto label_221950;
        case 0x221954u: goto label_221954;
        case 0x221958u: goto label_221958;
        case 0x22195cu: goto label_22195c;
        default: break;
    }

    ctx->pc = 0x221870u;

label_221870:
    // 0x221870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_221874:
    // 0x221874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_221878:
    // 0x221878: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x221878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_22187c:
    // 0x22187c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_221880:
    if (ctx->pc == 0x221880u) {
        ctx->pc = 0x221880u;
            // 0x221880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x221884u;
        goto label_221884;
    }
    ctx->pc = 0x22187Cu;
    {
        const bool branch_taken_0x22187c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22187Cu;
            // 0x221880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22187c) {
            ctx->pc = 0x2218B0u;
            goto label_2218b0;
        }
    }
    ctx->pc = 0x221884u;
label_221884:
    // 0x221884: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221888:
    // 0x221888: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22188c:
    // 0x22188c: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x22188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
label_221890:
    // 0x221890: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
label_221894:
    // 0x221894: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x221894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_221898:
    // 0x221898: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22189c:
    // 0x22189c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22189cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_2218a0:
    // 0x2218a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2218a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2218a4:
    // 0x2218a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2218a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2218a8:
    // 0x2218a8: 0x8089794  j           func_225E50
label_2218ac:
    if (ctx->pc == 0x2218ACu) {
        ctx->pc = 0x2218ACu;
            // 0x2218ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2218B0u;
        goto label_2218b0;
    }
    ctx->pc = 0x2218A8u;
    ctx->pc = 0x2218ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2218A8u;
            // 0x2218ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2218B0u;
label_2218b0:
    // 0x2218b0: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x2218b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2218b4:
    // 0x2218b4: 0x15c00009  bnez        $t6, . + 4 + (0x9 << 2)
label_2218b8:
    if (ctx->pc == 0x2218B8u) {
        ctx->pc = 0x2218B8u;
            // 0x2218b8: 0x2dcf0009  sltiu       $t7, $t6, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x2218BCu;
        goto label_2218bc;
    }
    ctx->pc = 0x2218B4u;
    {
        const bool branch_taken_0x2218b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2218B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2218B4u;
            // 0x2218b8: 0x2dcf0009  sltiu       $t7, $t6, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218b4) {
            ctx->pc = 0x2218DCu;
            goto label_2218dc;
        }
    }
    ctx->pc = 0x2218BCu;
label_2218bc:
    // 0x2218bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2218bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2218c0:
    // 0x2218c0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2218c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2218c4:
    // 0x2218c4: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
label_2218c8:
    // 0x2218c8: 0x25082a60  addiu       $t0, $t0, 0x2A60
    ctx->pc = 0x2218c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10848));
label_2218cc:
    // 0x2218cc: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x2218ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_2218d0:
    // 0x2218d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2218d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2218d4:
    // 0x2218d4: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_2218d8:
    if (ctx->pc == 0x2218D8u) {
        ctx->pc = 0x2218D8u;
            // 0x2218d8: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->pc = 0x2218DCu;
        goto label_2218dc;
    }
    ctx->pc = 0x2218D4u;
    {
        const bool branch_taken_0x2218d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2218D4u;
            // 0x2218d8: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218d4) {
            ctx->pc = 0x2218A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2218a0;
        }
    }
    ctx->pc = 0x2218DCu;
label_2218dc:
    // 0x2218dc: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
label_2218e0:
    if (ctx->pc == 0x2218E0u) {
        ctx->pc = 0x2218E0u;
            // 0x2218e0: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->pc = 0x2218E4u;
        goto label_2218e4;
    }
    ctx->pc = 0x2218DCu;
    {
        const bool branch_taken_0x2218dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2218DCu;
            // 0x2218e0: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218dc) {
            ctx->pc = 0x221928u;
            goto label_221928;
        }
    }
    ctx->pc = 0x2218E4u;
label_2218e4:
    // 0x2218e4: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x2218e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
label_2218e8:
    // 0x2218e8: 0x25ce2b48  addiu       $t6, $t6, 0x2B48
    ctx->pc = 0x2218e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 11080));
label_2218ec:
    // 0x2218ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x2218ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_2218f0:
    // 0x2218f0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x2218f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_2218f4:
    // 0x2218f4: 0x1a00008  jr          $t5
label_2218f8:
    if (ctx->pc == 0x2218F8u) {
        ctx->pc = 0x2218FCu;
        goto label_2218fc;
    }
    ctx->pc = 0x2218F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2218FCu: goto label_2218fc;
            case 0x221910u: goto label_221910;
            case 0x221928u: goto label_221928;
            case 0x221940u: goto label_221940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2218FCu;
label_2218fc:
    // 0x2218fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2218fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221900:
    // 0x221900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221904:
    // 0x221904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221908:
    // 0x221908: 0x3e00008  jr          $ra
label_22190c:
    if (ctx->pc == 0x22190Cu) {
        ctx->pc = 0x22190Cu;
            // 0x22190c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x221910u;
        goto label_221910;
    }
    ctx->pc = 0x221908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221908u;
            // 0x22190c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221910u;
label_221910:
    // 0x221910: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221914:
    // 0x221914: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_221918:
    // 0x221918: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
label_22191c:
    // 0x22191c: 0x25082b00  addiu       $t0, $t0, 0x2B00
    ctx->pc = 0x22191cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11008));
label_221920:
    // 0x221920: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_221924:
    if (ctx->pc == 0x221924u) {
        ctx->pc = 0x221924u;
            // 0x221924: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->pc = 0x221928u;
        goto label_221928;
    }
    ctx->pc = 0x221920u;
    {
        const bool branch_taken_0x221920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221920u;
            // 0x221924: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221920) {
            ctx->pc = 0x2218D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2218d0;
        }
    }
    ctx->pc = 0x221928u;
label_221928:
    // 0x221928: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_22192c:
    // 0x22192c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22192cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_221930:
    // 0x221930: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x221930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
label_221934:
    // 0x221934: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x221934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_221938:
    // 0x221938: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_22193c:
    if (ctx->pc == 0x22193Cu) {
        ctx->pc = 0x22193Cu;
            // 0x22193c: 0x240500a8  addiu       $a1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->pc = 0x221940u;
        goto label_221940;
    }
    ctx->pc = 0x221938u;
    {
        const bool branch_taken_0x221938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221938u;
            // 0x22193c: 0x240500a8  addiu       $a1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221938) {
            ctx->pc = 0x2218D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2218d0;
        }
    }
    ctx->pc = 0x221940u;
label_221940:
    // 0x221940: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x221940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_221944:
    // 0x221944: 0xc08867a  jal         func_2219E8
label_221948:
    if (ctx->pc == 0x221948u) {
        ctx->pc = 0x221948u;
            // 0x221948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22194Cu;
        goto label_22194c;
    }
    ctx->pc = 0x221944u;
    SET_GPR_U32(ctx, 31, 0x22194Cu);
    ctx->pc = 0x221948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221944u;
            // 0x221948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22194Cu; }
        if (ctx->pc != 0x22194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22194Cu; }
        if (ctx->pc != 0x22194Cu) { return; }
    }
    ctx->pc = 0x22194Cu;
label_22194c:
    // 0x22194c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x22194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_221950:
    // 0x221950: 0x40f809  jalr        $v0
label_221954:
    if (ctx->pc == 0x221954u) {
        ctx->pc = 0x221954u;
            // 0x221954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x221958u;
        goto label_221958;
    }
    ctx->pc = 0x221950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221958u);
        ctx->pc = 0x221954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221950u;
            // 0x221954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221958u; }
            if (ctx->pc != 0x221958u) { return; }
        }
        }
    }
    ctx->pc = 0x221958u;
label_221958:
    // 0x221958: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_22195c:
    if (ctx->pc == 0x22195Cu) {
        ctx->pc = 0x22195Cu;
            // 0x22195c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x221960u;
        goto label_fallthrough_0x221958;
    }
    ctx->pc = 0x221958u;
    {
        const bool branch_taken_0x221958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221958u;
            // 0x22195c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221958) {
            ctx->pc = 0x221904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221904;
        }
    }
label_fallthrough_0x221958:
    ctx->pc = 0x221960u;
    ctx->pc = 0x221960u;
}
