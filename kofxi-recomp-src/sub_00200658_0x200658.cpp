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

// Function: sub_00200658
// Address: 0x200658 - 0x200738
void sub_00200658_0x200658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200658_0x200658");
#endif

    switch (ctx->pc) {
        case 0x200658u: goto label_200658;
        case 0x20065cu: goto label_20065c;
        case 0x200660u: goto label_200660;
        case 0x200664u: goto label_200664;
        case 0x200668u: goto label_200668;
        case 0x20066cu: goto label_20066c;
        case 0x200670u: goto label_200670;
        case 0x200674u: goto label_200674;
        case 0x200678u: goto label_200678;
        case 0x20067cu: goto label_20067c;
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        default: break;
    }

    ctx->pc = 0x200658u;

label_200658:
    // 0x200658: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_20065c:
    if (ctx->pc == 0x20065Cu) {
        ctx->pc = 0x200660u;
        goto label_200660;
    }
    ctx->pc = 0x200658u;
    {
        const bool branch_taken_0x200658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200658) {
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x200660u;
label_200660:
    // 0x200660: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x200660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_200664:
    // 0x200664: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_200668:
    // 0x200668: 0x246317c8  addiu       $v1, $v1, 0x17C8
    ctx->pc = 0x200668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6088));
label_20066c:
    // 0x20066c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_200670:
    // 0x200670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_200674:
    // 0x200674: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x200674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_200678:
    // 0x200678: 0x3e00008  jr          $ra
label_20067c:
    if (ctx->pc == 0x20067Cu) {
        ctx->pc = 0x200680u;
        goto label_200680;
    }
    ctx->pc = 0x200678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200680u;
label_200680:
    // 0x200680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200684:
    // 0x200684: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x200684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200688:
    // 0x200688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20068c:
    // 0x20068c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200690:
    // 0x200690: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_200694:
    // 0x200694: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_200698:
    // 0x200698: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_20069c:
    // 0x20069c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2006a0:
    // 0x2006a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2006a4:
    // 0x2006a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2006a8:
    if (ctx->pc == 0x2006A8u) {
        ctx->pc = 0x2006A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A4u;
        // 0x2006a8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006ACu;
        goto label_2006ac;
    }
    ctx->pc = 0x2006A4u;
    {
        const bool branch_taken_0x2006a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006A4u;
        // 0x2006a8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006a4) {
            ctx->pc = 0x2006B4u;
            goto label_2006b4;
        }
    }
    ctx->pc = 0x2006ACu;
label_2006ac:
    // 0x2006ac: 0x60f809  jalr        $v1
label_2006b0:
    if (ctx->pc == 0x2006B0u) {
        ctx->pc = 0x2006B4u;
        goto label_2006b4;
    }
    ctx->pc = 0x2006ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2006B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006ACu, 0x2006B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2006B4u;
label_2006b4:
    // 0x2006b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2006b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2006b8:
    // 0x2006b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2006b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2006bc:
    // 0x2006bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2006bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2006c0:
    // 0x2006c0: 0x3e00008  jr          $ra
label_2006c4:
    if (ctx->pc == 0x2006C4u) {
        ctx->pc = 0x2006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C0u;
        // 0x2006c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006C8u;
        goto label_2006c8;
    }
    ctx->pc = 0x2006C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006C0u;
        // 0x2006c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2006C8u;
label_2006c8:
    // 0x2006c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2006cc:
    // 0x2006cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2006ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2006d0:
    // 0x2006d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2006d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2006d4:
    // 0x2006d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2006d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2006d8:
    // 0x2006d8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2006dc:
    // 0x2006dc: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x2006dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_2006e0:
    // 0x2006e0: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x2006e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_2006e4:
    // 0x2006e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2006e8:
    if (ctx->pc == 0x2006E8u) {
        ctx->pc = 0x2006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E4u;
        // 0x2006e8: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006ECu;
        goto label_2006ec;
    }
    ctx->pc = 0x2006E4u;
    {
        const bool branch_taken_0x2006e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E4u;
        // 0x2006e8: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006e4) {
            ctx->pc = 0x2006F4u;
            goto label_2006f4;
        }
    }
    ctx->pc = 0x2006ECu;
label_2006ec:
    // 0x2006ec: 0x60f809  jalr        $v1
label_2006f0:
    if (ctx->pc == 0x2006F0u) {
        ctx->pc = 0x2006F4u;
        goto label_2006f4;
    }
    ctx->pc = 0x2006ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2006F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006ECu, 0x2006F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2006F4u;
label_2006f4:
    // 0x2006f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2006f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2006f8:
    // 0x2006f8: 0x3e00008  jr          $ra
label_2006fc:
    if (ctx->pc == 0x2006FCu) {
        ctx->pc = 0x2006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F8u;
        // 0x2006fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200700u;
        goto label_200700;
    }
    ctx->pc = 0x2006F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F8u;
        // 0x2006fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200700u;
label_200700:
    // 0x200700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200704:
    // 0x200704: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x200704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200708:
    // 0x200708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20070c:
    // 0x20070c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x20070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200710:
    // 0x200710: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_200714:
    // 0x200714: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x200714u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_200718:
    // 0x200718: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x200718u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_20071c:
    // 0x20071c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_200720:
    if (ctx->pc == 0x200720u) {
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200724u;
        goto label_200724;
    }
    ctx->pc = 0x20071Cu;
    {
        const bool branch_taken_0x20071c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20071c) {
            ctx->pc = 0x20072Cu;
            goto label_20072c;
        }
    }
    ctx->pc = 0x200724u;
label_200724:
    // 0x200724: 0x60f809  jalr        $v1
label_200728:
    if (ctx->pc == 0x200728u) {
        ctx->pc = 0x20072Cu;
        goto label_20072c;
    }
    ctx->pc = 0x200724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20072Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200724u, 0x20072Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20072Cu;
label_20072c:
    // 0x20072c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200730:
    // 0x200730: 0x3e00008  jr          $ra
label_200734:
    if (ctx->pc == 0x200734u) {
        ctx->pc = 0x200734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200730u;
        // 0x200734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200738u;
        goto label_fallthrough_0x200730;
    }
    ctx->pc = 0x200730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200730u;
        // 0x200734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200730:
    ctx->pc = 0x200738u;
}
