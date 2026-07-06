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

// Function: sub_00226638
// Address: 0x226638 - 0x226758
void sub_00226638_0x226638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226638_0x226638");
#endif

    switch (ctx->pc) {
        case 0x226690u: goto label_226690;
        case 0x2266a4u: goto label_2266a4;
        case 0x2266b8u: goto label_2266b8;
        case 0x2266ccu: goto label_2266cc;
        default: break;
    }

    ctx->pc = 0x226638u;

    // 0x226638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22663c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22664c: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x22664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x226650: 0x1c80000a  bgtz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x226650u;
    {
        const bool branch_taken_0x226650 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x226654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226650u;
        // 0x226654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226650) {
            ctx->pc = 0x22667Cu;
            goto label_22667c;
        }
    }
    ctx->pc = 0x226658u;
    // 0x226658: 0x8e0f009c  lw          $t7, 0x9C($s0)
    ctx->pc = 0x226658u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22665c: 0x5de00008  bgtzl       $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x22665Cu;
    {
        const bool branch_taken_0x22665c = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x22665c) {
            ctx->pc = 0x226660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22665Cu;
            // 0x226660: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226680u;
            goto label_226680;
        }
    }
    ctx->pc = 0x226664u;
    // 0x226664: 0x8e0f012c  lw          $t7, 0x12C($s0)
    ctx->pc = 0x226664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x226668: 0x5de00005  bgtzl       $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x226668u;
    {
        const bool branch_taken_0x226668 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x226668) {
            ctx->pc = 0x22666Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226668u;
            // 0x22666c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226680u;
            goto label_226680;
        }
    }
    ctx->pc = 0x226670u;
    // 0x226670: 0x8e0f0130  lw          $t7, 0x130($s0)
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x226674: 0x19e00002  blez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x226674u;
    {
        const bool branch_taken_0x226674 = (GPR_S32(ctx, 15) <= 0);
        if (branch_taken_0x226674) {
            ctx->pc = 0x226680u;
            goto label_226680;
        }
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22667cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226680:
    // 0x226680: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226680u;
    {
        const bool branch_taken_0x226680 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x226680) {
            ctx->pc = 0x226684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226680u;
            // 0x226684: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226694u;
            goto label_226694;
        }
    }
    ctx->pc = 0x226688u;
    // 0x226688: 0xc097360  jal         func_25CD80
    ctx->pc = 0x226688u;
    SET_GPR_U32(ctx, 31, 0x226690u);
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x226688u, 0x226690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226690u;
label_226690:
    // 0x226690: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_226694:
    // 0x226694: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226694u;
    {
        const bool branch_taken_0x226694 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x226694) {
            ctx->pc = 0x226698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226694u;
            // 0x226698: 0x8e04012c  lw          $a0, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2266A8u;
            goto label_2266a8;
        }
    }
    ctx->pc = 0x22669Cu;
    // 0x22669c: 0xc097360  jal         func_25CD80
    ctx->pc = 0x22669Cu;
    SET_GPR_U32(ctx, 31, 0x2266A4u);
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x22669Cu, 0x2266A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266A4u;
label_2266a4:
    // 0x2266a4: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x2266a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2266a8:
    // 0x2266a8: 0x58800004  blezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2266A8u;
    {
        const bool branch_taken_0x2266a8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2266a8) {
            ctx->pc = 0x2266ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2266A8u;
            // 0x2266ac: 0x8e040130  lw          $a0, 0x130($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2266BCu;
            goto label_2266bc;
        }
    }
    ctx->pc = 0x2266B0u;
    // 0x2266b0: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2266B0u;
    SET_GPR_U32(ctx, 31, 0x2266B8u);
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x2266B0u, 0x2266B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266B8u;
label_2266b8:
    // 0x2266b8: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_2266bc:
    // 0x2266bc: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2266BCu;
    {
        const bool branch_taken_0x2266bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2266C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266BCu;
        // 0x2266c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266bc) {
            ctx->pc = 0x2266D0u;
            goto label_2266d0;
        }
    }
    ctx->pc = 0x2266C4u;
    // 0x2266c4: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2266C4u;
    SET_GPR_U32(ctx, 31, 0x2266CCu);
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x2266C4u, 0x2266CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266CCu;
label_2266cc:
    // 0x2266cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2266ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2266d0:
    // 0x2266d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2266d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2266d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2266d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2266dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2266DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266DCu;
        // 0x2266e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266E4u;
    // 0x2266e4: 0x0  nop
    ctx->pc = 0x2266e4u;
    // NOP
    // 0x2266e8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2266ec: 0x8de2f1cc  lw          $v0, -0xE34($t7)
    ctx->pc = 0x2266ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963660)));
    // 0x2266f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2266f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2266f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2266F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266F4u;
        // 0x2266f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266FCu;
    // 0x2266fc: 0x0  nop
    ctx->pc = 0x2266fcu;
    // NOP
    // 0x226700: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226704: 0x8deef1c8  lw          $t6, -0xE38($t7)
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963656)));
    // 0x226708: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22670c: 0x11cd0008  beq         $t6, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x22670Cu;
    {
        const bool branch_taken_0x22670c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        ctx->pc = 0x226710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22670Cu;
        // 0x226710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22670c) {
            ctx->pc = 0x226730u;
            goto label_226730;
        }
    }
    ctx->pc = 0x226714u;
    // 0x226714: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226718: 0x8deef1cc  lw          $t6, -0xE34($t7)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963660)));
    // 0x22671c: 0x11cd0004  beq         $t6, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x22671Cu;
    {
        const bool branch_taken_0x22671c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        ctx->pc = 0x226720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22671Cu;
        // 0x226720: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22671c) {
            ctx->pc = 0x226730u;
            goto label_226730;
        }
    }
    ctx->pc = 0x226724u;
    // 0x226724: 0x8deef1d0  lw          $t6, -0xE30($t7)
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963664)));
    // 0x226728: 0x15cd0009  bne         $t6, $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x226728u;
    {
        const bool branch_taken_0x226728 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        if (branch_taken_0x226728) {
            ctx->pc = 0x226750u;
            goto label_226750;
        }
    }
    ctx->pc = 0x226730u;
label_226730:
    // 0x226730: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226734: 0x8deef1d4  lw          $t6, -0xE2C($t7)
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963668)));
    // 0x226738: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x226738u;
    {
        const bool branch_taken_0x226738 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x22673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226738u;
        // 0x22673c: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226738) {
            ctx->pc = 0x22674Cu;
            goto label_22674c;
        }
    }
    ctx->pc = 0x226740u;
    // 0x226740: 0x8deef1d8  lw          $t6, -0xE28($t7)
    ctx->pc = 0x226740u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963672)));
    // 0x226744: 0x15c00002  bnez        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x226744u;
    {
        const bool branch_taken_0x226744 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x226744) {
            ctx->pc = 0x226750u;
            goto label_226750;
        }
    }
    ctx->pc = 0x22674Cu;
label_22674c:
    // 0x22674c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226750:
    // 0x226750: 0x3e00008  jr          $ra
    ctx->pc = 0x226750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226758u;
}
