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

// Function: sub_00287658
// Address: 0x287658 - 0x287768
void sub_00287658_0x287658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287658_0x287658");
#endif

    switch (ctx->pc) {
        case 0x287658u: goto label_287658;
        case 0x28765cu: goto label_28765c;
        case 0x287660u: goto label_287660;
        case 0x287664u: goto label_287664;
        case 0x287668u: goto label_287668;
        case 0x28766cu: goto label_28766c;
        case 0x287670u: goto label_287670;
        case 0x287674u: goto label_287674;
        case 0x287678u: goto label_287678;
        case 0x28767cu: goto label_28767c;
        case 0x287680u: goto label_287680;
        case 0x287684u: goto label_287684;
        case 0x287688u: goto label_287688;
        case 0x28768cu: goto label_28768c;
        case 0x287690u: goto label_287690;
        case 0x287694u: goto label_287694;
        case 0x287698u: goto label_287698;
        case 0x28769cu: goto label_28769c;
        case 0x2876a0u: goto label_2876a0;
        case 0x2876a4u: goto label_2876a4;
        case 0x2876a8u: goto label_2876a8;
        case 0x2876acu: goto label_2876ac;
        case 0x2876b0u: goto label_2876b0;
        case 0x2876b4u: goto label_2876b4;
        case 0x2876b8u: goto label_2876b8;
        case 0x2876bcu: goto label_2876bc;
        case 0x2876c0u: goto label_2876c0;
        case 0x2876c4u: goto label_2876c4;
        case 0x2876c8u: goto label_2876c8;
        case 0x2876ccu: goto label_2876cc;
        case 0x2876d0u: goto label_2876d0;
        case 0x2876d4u: goto label_2876d4;
        case 0x2876d8u: goto label_2876d8;
        case 0x2876dcu: goto label_2876dc;
        case 0x2876e0u: goto label_2876e0;
        case 0x2876e4u: goto label_2876e4;
        case 0x2876e8u: goto label_2876e8;
        case 0x2876ecu: goto label_2876ec;
        case 0x2876f0u: goto label_2876f0;
        case 0x2876f4u: goto label_2876f4;
        case 0x2876f8u: goto label_2876f8;
        case 0x2876fcu: goto label_2876fc;
        case 0x287700u: goto label_287700;
        case 0x287704u: goto label_287704;
        case 0x287708u: goto label_287708;
        case 0x28770cu: goto label_28770c;
        case 0x287710u: goto label_287710;
        case 0x287714u: goto label_287714;
        case 0x287718u: goto label_287718;
        case 0x28771cu: goto label_28771c;
        case 0x287720u: goto label_287720;
        case 0x287724u: goto label_287724;
        case 0x287728u: goto label_287728;
        case 0x28772cu: goto label_28772c;
        case 0x287730u: goto label_287730;
        case 0x287734u: goto label_287734;
        case 0x287738u: goto label_287738;
        case 0x28773cu: goto label_28773c;
        case 0x287740u: goto label_287740;
        case 0x287744u: goto label_287744;
        case 0x287748u: goto label_287748;
        case 0x28774cu: goto label_28774c;
        case 0x287750u: goto label_287750;
        case 0x287754u: goto label_287754;
        case 0x287758u: goto label_287758;
        case 0x28775cu: goto label_28775c;
        case 0x287760u: goto label_287760;
        case 0x287764u: goto label_287764;
        default: break;
    }

    ctx->pc = 0x287658u;

label_287658:
    // 0x287658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28765c:
    // 0x28765c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_287660:
    // 0x287660: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_287664:
    // 0x287664: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x287664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_287668:
    // 0x287668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28766c:
    // 0x28766c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28766cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287670:
    // 0x287670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_287674:
    // 0x287674: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x287674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_287678:
    // 0x287678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28767c:
    // 0x28767c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_287680:
    // 0x287680: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x287680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_287684:
    // 0x287684: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x287684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_287688:
    // 0x287688: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_28768c:
    if (ctx->pc == 0x28768Cu) {
        ctx->pc = 0x28768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287688u;
        // 0x28768c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287690u;
        goto label_287690;
    }
    ctx->pc = 0x287688u;
    {
        const bool branch_taken_0x287688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287688u;
        // 0x28768c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287688) {
            ctx->pc = 0x2876ACu;
            goto label_2876ac;
        }
    }
    ctx->pc = 0x287690u;
label_287690:
    // 0x287690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287694:
    // 0x287694: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_287698:
    if (ctx->pc == 0x287698u) {
        ctx->pc = 0x28769Cu;
        goto label_28769c;
    }
    ctx->pc = 0x287694u;
    {
        const bool branch_taken_0x287694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x287694) {
            ctx->pc = 0x2876B8u;
            goto label_2876b8;
        }
    }
    ctx->pc = 0x28769Cu;
label_28769c:
    // 0x28769c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2876a0:
    // 0x2876a0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2876a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2876a4:
    // 0x2876a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2876a8:
    if (ctx->pc == 0x2876A8u) {
        ctx->pc = 0x2876ACu;
        goto label_2876ac;
    }
    ctx->pc = 0x2876A4u;
    {
        const bool branch_taken_0x2876a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2876a4) {
            ctx->pc = 0x2876B8u;
            goto label_2876b8;
        }
    }
    ctx->pc = 0x2876ACu;
label_2876ac:
    // 0x2876ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2876acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2876b0:
    // 0x2876b0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2876b4:
    if (ctx->pc == 0x2876B4u) {
        ctx->pc = 0x2876B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B0u;
        // 0x2876b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876B8u;
        goto label_2876b8;
    }
    ctx->pc = 0x2876B0u;
    {
        const bool branch_taken_0x2876b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B0u;
        // 0x2876b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876b0) {
            ctx->pc = 0x2876ECu;
            goto label_2876ec;
        }
    }
    ctx->pc = 0x2876B8u;
label_2876b8:
    // 0x2876b8: 0x52200017  beql        $s1, $zero, . + 4 + (0x17 << 2)
label_2876bc:
    if (ctx->pc == 0x2876BCu) {
        ctx->pc = 0x2876BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B8u;
        // 0x2876bc: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876C0u;
        goto label_2876c0;
    }
    ctx->pc = 0x2876B8u;
    {
        const bool branch_taken_0x2876b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876b8) {
            ctx->pc = 0x2876BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876B8u;
            // 0x2876bc: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287718u;
            goto label_287718;
        }
    }
    ctx->pc = 0x2876C0u;
label_2876c0:
    // 0x2876c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2876c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2876c4:
    // 0x2876c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2876c8:
    if (ctx->pc == 0x2876C8u) {
        ctx->pc = 0x2876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C4u;
        // 0x2876c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876CCu;
        goto label_2876cc;
    }
    ctx->pc = 0x2876C4u;
    {
        const bool branch_taken_0x2876c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C4u;
        // 0x2876c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876c4) {
            ctx->pc = 0x2876E4u;
            goto label_2876e4;
        }
    }
    ctx->pc = 0x2876CCu;
label_2876cc:
    // 0x2876cc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_2876d0:
    if (ctx->pc == 0x2876D0u) {
        ctx->pc = 0x2876D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876CCu;
        // 0x2876d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876D4u;
        goto label_2876d4;
    }
    ctx->pc = 0x2876CCu;
    {
        const bool branch_taken_0x2876cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2876cc) {
            ctx->pc = 0x2876D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876CCu;
            // 0x2876d0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287718u;
            goto label_287718;
        }
    }
    ctx->pc = 0x2876D4u;
label_2876d4:
    // 0x2876d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2876d8:
    // 0x2876d8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2876d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2876dc:
    // 0x2876dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2876e0:
    if (ctx->pc == 0x2876E0u) {
        ctx->pc = 0x2876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876DCu;
        // 0x2876e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876E4u;
        goto label_2876e4;
    }
    ctx->pc = 0x2876DCu;
    {
        const bool branch_taken_0x2876dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876DCu;
        // 0x2876e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876dc) {
            ctx->pc = 0x2876FCu;
            goto label_2876fc;
        }
    }
    ctx->pc = 0x2876E4u;
label_2876e4:
    // 0x2876e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2876e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2876e8:
    // 0x2876e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2876e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2876ec:
    // 0x2876ec: 0xc0a1b6a  jal         func_286DA8
label_2876f0:
    if (ctx->pc == 0x2876F0u) {
        ctx->pc = 0x2876F4u;
        goto label_2876f4;
    }
    ctx->pc = 0x2876ECu;
    SET_GPR_U32(ctx, 31, 0x2876F4u);
    ctx->pc = 0x286DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286DA8u, 0x2876ECu, 0x2876F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2876F4u;
label_2876f4:
    // 0x2876f4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2876f8:
    if (ctx->pc == 0x2876F8u) {
        ctx->pc = 0x2876F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876F4u;
        // 0x2876f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2876FCu;
        goto label_2876fc;
    }
    ctx->pc = 0x2876F4u;
    {
        const bool branch_taken_0x2876f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876F4u;
        // 0x2876f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876f4) {
            ctx->pc = 0x287744u;
            goto label_287744;
        }
    }
    ctx->pc = 0x2876FCu;
label_2876fc:
    // 0x2876fc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_287700:
    if (ctx->pc == 0x287700u) {
        ctx->pc = 0x287700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876FCu;
        // 0x287700: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287704u;
        goto label_287704;
    }
    ctx->pc = 0x2876FCu;
    {
        const bool branch_taken_0x2876fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2876fc) {
            ctx->pc = 0x287700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2876FCu;
            // 0x287700: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287718u;
            goto label_287718;
        }
    }
    ctx->pc = 0x287704u;
label_287704:
    // 0x287704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287708:
    // 0x287708: 0xc0a1b1c  jal         func_286C70
label_28770c:
    if (ctx->pc == 0x28770Cu) {
        ctx->pc = 0x28770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287708u;
        // 0x28770c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287710u;
        goto label_287710;
    }
    ctx->pc = 0x287708u;
    SET_GPR_U32(ctx, 31, 0x287710u);
    ctx->pc = 0x28770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287708u;
    // 0x28770c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x287708u, 0x287710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287710u;
label_287710:
    // 0x287710: 0x1000000c  b           . + 4 + (0xC << 2)
label_287714:
    if (ctx->pc == 0x287714u) {
        ctx->pc = 0x287714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287710u;
        // 0x287714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287718u;
        goto label_287718;
    }
    ctx->pc = 0x287710u;
    {
        const bool branch_taken_0x287710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287710u;
        // 0x287714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287710) {
            ctx->pc = 0x287744u;
            goto label_287744;
        }
    }
    ctx->pc = 0x287718u;
label_287718:
    // 0x287718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28771c:
    // 0x28771c: 0xc0a1a4e  jal         func_286938
label_287720:
    if (ctx->pc == 0x287720u) {
        ctx->pc = 0x287720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28771Cu;
        // 0x287720: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287724u;
        goto label_287724;
    }
    ctx->pc = 0x28771Cu;
    SET_GPR_U32(ctx, 31, 0x287724u);
    ctx->pc = 0x287720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28771Cu;
    // 0x287720: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286938u, 0x28771Cu, 0x287724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287724u;
label_287724:
    // 0x287724: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x287724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_287728:
    // 0x287728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28772c:
    // 0x28772c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287730:
    // 0x287730: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x287730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287734:
    // 0x287734: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x287734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_287738:
    // 0x287738: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x287738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28773c:
    // 0x28773c: 0x40f809  jalr        $v0
label_287740:
    if (ctx->pc == 0x287740u) {
        ctx->pc = 0x287740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28773Cu;
        // 0x287740: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287744u;
        goto label_287744;
    }
    ctx->pc = 0x28773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287744u);
        ctx->pc = 0x287740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28773Cu;
        // 0x287740: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28773Cu, 0x287744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287744u;
label_287744:
    // 0x287744: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x287744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_287748:
    // 0x287748: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28774c:
    // 0x28774c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28774cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_287750:
    // 0x287750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_287754:
    // 0x287754: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_287758:
    // 0x287758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28775c:
    // 0x28775c: 0x3e00008  jr          $ra
label_287760:
    if (ctx->pc == 0x287760u) {
        ctx->pc = 0x287760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28775Cu;
        // 0x287760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287764u;
        goto label_287764;
    }
    ctx->pc = 0x28775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28775Cu;
        // 0x287760: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287764u;
label_287764:
    // 0x287764: 0x0  nop
    ctx->pc = 0x287764u;
    // NOP
    if (ctx->pc == 0x287764u) { ctx->pc = 0x287768u; }
}
