#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224630
// Address: 0x224630 - 0x224798
void sub_00224630_0x224630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224630_0x224630");
#endif

    switch (ctx->pc) {
        case 0x224668u: goto label_224668;
        case 0x224680u: goto label_224680;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246d4u: goto label_2246d4;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224720u: goto label_224720;
        case 0x224728u: goto label_224728;
        case 0x224788u: goto label_224788;
        default: break;
    }

    ctx->pc = 0x224630u;

    // 0x224630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224638: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x224638u;
    {
        const bool branch_taken_0x224638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224638u;
            // 0x22463c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224638) {
            ctx->pc = 0x224668u;
            goto label_224668;
        }
    }
    ctx->pc = 0x224640u;
    // 0x224640: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224648: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22464c: 0x24843518  addiu       $a0, $a0, 0x3518
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13592));
    // 0x224650: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
    // 0x224654: 0x240501b6  addiu       $a1, $zero, 0x1B6
    ctx->pc = 0x224654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    // 0x224658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22465c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22465cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224660: 0x8089794  j           func_225E50
    ctx->pc = 0x224660u;
    ctx->pc = 0x224664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224660u;
            // 0x224664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224668u;
label_224668:
    // 0x224668: 0x8c8f1054  lw          $t7, 0x1054($a0)
    ctx->pc = 0x224668u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4180)));
    // 0x22466c: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22466Cu;
    {
        const bool branch_taken_0x22466c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x22466c) {
            ctx->pc = 0x224670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22466Cu;
            // 0x224670: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224674u;
            goto label_224674;
        }
    }
    ctx->pc = 0x224674u;
label_224674:
    // 0x224674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224678: 0x3e00008  jr          $ra
    ctx->pc = 0x224678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224678u;
            // 0x22467c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224680u;
label_224680:
    // 0x224680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224684: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x224684u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22468c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22468Cu;
    {
        const bool branch_taken_0x22468c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22468Cu;
            // 0x224690: 0x240501c7  addiu       $a1, $zero, 0x1C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22468c) {
            ctx->pc = 0x2246B8u;
            goto label_2246b8;
        }
    }
    ctx->pc = 0x224694u;
    // 0x224694: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22469c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22469cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2246a0: 0x24843528  addiu       $a0, $a0, 0x3528
    ctx->pc = 0x2246a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13608));
    // 0x2246a4: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x2246a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
    // 0x2246a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2246a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2246ac: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2246acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x2246b0: 0x8089794  j           func_225E50
    ctx->pc = 0x2246B0u;
    ctx->pc = 0x2246B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2246B0u;
            // 0x2246b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2246B8u;
label_2246b8:
    // 0x2246b8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2246B8u;
    {
        const bool branch_taken_0x2246b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2246BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246B8u;
            // 0x2246bc: 0xac8f104c  sw          $t7, 0x104C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4172), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246b8) {
            ctx->pc = 0x2246D4u;
            goto label_2246d4;
        }
    }
    ctx->pc = 0x2246C0u;
    // 0x2246c0: 0xac801048  sw          $zero, 0x1048($a0)
    ctx->pc = 0x2246c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4168), GPR_U32(ctx, 0));
    // 0x2246c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2246c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2246c8:
    // 0x2246c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2246c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2246cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2246CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2246D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246CCu;
            // 0x2246d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2246D4u;
label_2246d4:
    // 0x2246d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2246d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2246DCu;
    {
        const bool branch_taken_0x2246dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2246E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246DCu;
            // 0x2246e0: 0xac8f1048  sw          $t7, 0x1048($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4168), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246dc) {
            ctx->pc = 0x2246C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2246c8;
        }
    }
    ctx->pc = 0x2246E4u;
    // 0x2246e4: 0x0  nop
    ctx->pc = 0x2246e4u;
    // NOP
    // 0x2246e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2246ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2246ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2246f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2246f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2246f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2246f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2246fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2246fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224704: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224704u;
            // 0x224708: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224704) {
            ctx->pc = 0x224720u;
            goto label_224720;
        }
    }
    ctx->pc = 0x22470Cu;
label_22470c:
    // 0x22470c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22470cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224710:
    // 0x224710: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224718: 0x3e00008  jr          $ra
    ctx->pc = 0x224718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22471Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224718u;
            // 0x22471c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224720u;
label_224720:
    // 0x224720: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x224720u;
    SET_GPR_U32(ctx, 31, 0x224728u);
    ctx->pc = 0x224724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224720u;
            // 0x224724: 0x8e24ca2c  lw          $a0, -0x35D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (runtime->hasFunction(0x2260A8u)) {
        auto targetFn = runtime->lookupFunction(0x2260A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224728u; }
        if (ctx->pc != 0x224728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002260A8_0x2260a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224728u; }
        if (ctx->pc != 0x224728u) { return; }
    }
    ctx->pc = 0x224728u;
label_224728:
    // 0x224728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224728u;
    {
        const bool branch_taken_0x224728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224728u;
            // 0x22472c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224728) {
            ctx->pc = 0x224738u;
            goto label_224738;
        }
    }
    ctx->pc = 0x224730u;
    // 0x224730: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x224730u;
    {
        const bool branch_taken_0x224730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224730u;
            // 0x224734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224730) {
            ctx->pc = 0x22470Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22470c;
        }
    }
    ctx->pc = 0x224738u;
label_224738:
    // 0x224738: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22473c: 0x8c4f000c  lw          $t7, 0xC($v0)
    ctx->pc = 0x22473cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224740: 0x51f0fff3  beql        $t7, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x224740u;
    {
        const bool branch_taken_0x224740 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 16));
        if (branch_taken_0x224740) {
            ctx->pc = 0x224744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224740u;
            // 0x224744: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224710;
        }
    }
    ctx->pc = 0x224748u;
    // 0x224748: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x224748u;
    {
        const bool branch_taken_0x224748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224748) {
            ctx->pc = 0x224720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224720;
        }
    }
    ctx->pc = 0x224750u;
    // 0x224750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224758: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x224758u;
    {
        const bool branch_taken_0x224758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x224758) {
            ctx->pc = 0x22475Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224758u;
            // 0x22475c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224788u;
            goto label_224788;
        }
    }
    ctx->pc = 0x224760u;
    // 0x224760: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x224764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224768: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x224768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x22476c: 0x24843540  addiu       $a0, $a0, 0x3540
    ctx->pc = 0x22476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13632));
    // 0x224770: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x224770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
    // 0x224774: 0x240501f9  addiu       $a1, $zero, 0x1F9
    ctx->pc = 0x224774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 505));
    // 0x224778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22477c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22477cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x224780: 0x8089794  j           func_225E50
    ctx->pc = 0x224780u;
    ctx->pc = 0x224784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224780u;
            // 0x224784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x224788u;
label_224788:
    // 0x224788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22478c: 0x3e00008  jr          $ra
    ctx->pc = 0x22478Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22478Cu;
            // 0x224790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224794u;
    // 0x224794: 0x0  nop
    ctx->pc = 0x224794u;
    // NOP
    ctx->pc = 0x224798u;
}
