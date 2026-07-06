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

// Function: sub_00281550
// Address: 0x281550 - 0x281680
void sub_00281550_0x281550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281550_0x281550");
#endif

    switch (ctx->pc) {
        case 0x2815a8u: goto label_2815a8;
        case 0x281634u: goto label_281634;
        case 0x281664u: goto label_281664;
        default: break;
    }

    ctx->pc = 0x281550u;

    // 0x281550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281554: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x281554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x281558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28155c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28155cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281560: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x281560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x281564: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x281564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281568: 0x11000038  beqz        $t0, . + 4 + (0x38 << 2)
    ctx->pc = 0x281568u;
    {
        const bool branch_taken_0x281568 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x28156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281568u;
        // 0x28156c: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281568) {
            ctx->pc = 0x28164Cu;
            goto label_28164c;
        }
    }
    ctx->pc = 0x281570u;
    // 0x281570: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x281570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281574: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x281574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x281578: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x281578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28157c: 0x304a001f  andi        $t2, $v0, 0x1F
    ctx->pc = 0x28157cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x281580: 0x30510020  andi        $s1, $v0, 0x20
    ctx->pc = 0x281580u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x281584: 0x1543001e  bne         $t2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x281584u;
    {
        const bool branch_taken_0x281584 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x281588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281584u;
        // 0x281588: 0x304b00c0  andi        $t3, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281584) {
            ctx->pc = 0x281600u;
            goto label_281600;
        }
    }
    ctx->pc = 0x28158Cu;
    // 0x28158c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x281590: 0x6508ffff  daddiu      $t0, $t0, -0x1
    ctx->pc = 0x281590u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967295);
    // 0x281594: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x281594u;
    {
        const bool branch_taken_0x281594 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x281598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281594u;
        // 0x281598: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281594) {
            ctx->pc = 0x28164Cu;
            goto label_28164c;
        }
    }
    ctx->pc = 0x28159Cu;
    // 0x28159c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x28159cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2815a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2815A0u;
    {
        const bool branch_taken_0x2815a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815A0u;
        // 0x2815a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815a0) {
            ctx->pc = 0x2815CCu;
            goto label_2815cc;
        }
    }
    ctx->pc = 0x2815A8u;
label_2815a8:
    // 0x2815a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2815a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2815ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2815acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2815b0: 0x949f8  dsll        $t1, $t1, 7
    ctx->pc = 0x2815b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 7);
    // 0x2815b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2815b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2815b8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2815b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2815bc: 0x6508ffff  daddiu      $t0, $t0, -0x1
    ctx->pc = 0x2815bcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967295);
    // 0x2815c0: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2815C0u;
    {
        const bool branch_taken_0x2815c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815C0u;
        // 0x2815c4: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815c0) {
            ctx->pc = 0x28164Cu;
            goto label_28164c;
        }
    }
    ctx->pc = 0x2815C8u;
    // 0x2815c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2815c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2815cc:
    // 0x2815cc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2815ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2815d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2815D0u;
    {
        const bool branch_taken_0x2815d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2815D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815D0u;
        // 0x2815d4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815d0) {
            ctx->pc = 0x2815A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2815a8;
        }
    }
    ctx->pc = 0x2815D8u;
    // 0x2815d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2815d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2815dc: 0x949f8  dsll        $t1, $t1, 7
    ctx->pc = 0x2815dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 7);
    // 0x2815e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2815e4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2815e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2815e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2815e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2815ec: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x2815ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x2815f0: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x2815f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2815f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2815f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2815f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2815F8u;
    {
        const bool branch_taken_0x2815f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815F8u;
        // 0x2815fc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815f8) {
            ctx->pc = 0x281618u;
            goto label_281618;
        }
    }
    ctx->pc = 0x281600u;
label_281600:
    // 0x281600: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x281600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x281604: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x281604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281608: 0x6508ffff  daddiu      $t0, $t0, -0x1
    ctx->pc = 0x281608u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967295);
    // 0x28160c: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x28160Cu;
    {
        const bool branch_taken_0x28160c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x281610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28160Cu;
        // 0x281610: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28160c) {
            ctx->pc = 0x28164Cu;
            goto label_28164c;
        }
    }
    ctx->pc = 0x281614u;
    // 0x281614: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x281614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_281618:
    // 0x281618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28161c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28161cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281620: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x281620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x281624: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x281624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x281628: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x281628u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x28162c: 0xc0a05a0  jal         func_281680
    ctx->pc = 0x28162Cu;
    SET_GPR_U32(ctx, 31, 0x281634u);
    ctx->pc = 0x281630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28162Cu;
    // 0x281630: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281680u, 0x28162Cu, 0x281634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281634u;
label_281634:
    // 0x281634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281634u;
    {
        const bool branch_taken_0x281634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281634u;
        // 0x281638: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281634) {
            ctx->pc = 0x28164Cu;
            goto label_28164c;
        }
    }
    ctx->pc = 0x28163Cu;
    // 0x28163c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281640: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x281640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x281644: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281644u;
    {
        const bool branch_taken_0x281644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281644u;
        // 0x281648: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281644) {
            ctx->pc = 0x281668u;
            goto label_281668;
        }
    }
    ctx->pc = 0x28164Cu;
label_28164c:
    // 0x28164c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x28164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x281650: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x281654: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x281654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x281658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28165c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28165Cu;
    SET_GPR_U32(ctx, 31, 0x281664u);
    ctx->pc = 0x281660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28165Cu;
    // 0x281660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28165Cu, 0x281664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281664u;
label_281664:
    // 0x281664: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x281664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_281668:
    // 0x281668: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x281668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28166c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281670: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x281670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281674: 0x3e00008  jr          $ra
    ctx->pc = 0x281674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281674u;
        // 0x281678: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28167Cu;
    // 0x28167c: 0x0  nop
    ctx->pc = 0x28167cu;
    // NOP
    if (ctx->pc == 0x28167cu) { ctx->pc = 0x281680u; }
}
