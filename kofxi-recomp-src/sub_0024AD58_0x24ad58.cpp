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

// Function: sub_0024AD58
// Address: 0x24ad58 - 0x24aef8
void sub_0024AD58_0x24ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AD58_0x24ad58");
#endif

    switch (ctx->pc) {
        case 0x24ad90u: goto label_24ad90;
        case 0x24adb0u: goto label_24adb0;
        case 0x24adccu: goto label_24adcc;
        case 0x24ae48u: goto label_24ae48;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae98u: goto label_24ae98;
        case 0x24aee8u: goto label_24aee8;
        default: break;
    }

    ctx->pc = 0x24ad58u;

    // 0x24ad58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24ad5c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ad60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24ad64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24ad68: 0x8c5101a0  lw          $s1, 0x1A0($v0)
    ctx->pc = 0x24ad68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x24ad6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24ad6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ad70: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24ad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24ad74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24ad78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24ad7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24ad80: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x24AD80u;
    {
        const bool branch_taken_0x24ad80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AD80u;
        // 0x24ad84: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ad80) {
            ctx->pc = 0x24AE58u;
            goto label_24ae58;
        }
    }
    ctx->pc = 0x24AD88u;
    // 0x24ad88: 0x245501a0  addiu       $s5, $v0, 0x1A0
    ctx->pc = 0x24ad88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x24ad8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24ad90:
    // 0x24ad90: 0x5445002f  bnel        $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x24AD90u;
    {
        const bool branch_taken_0x24ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x24ad90) {
            ctx->pc = 0x24AD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AD90u;
            // 0x24ad94: 0x8e310054  lw          $s1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE50u;
            goto label_24ae50;
        }
    }
    ctx->pc = 0x24AD98u;
    // 0x24ad98: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x24ad98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x24ad9c: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x24AD9Cu;
    {
        const bool branch_taken_0x24ad9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad9c) {
            ctx->pc = 0x24ADA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AD9Cu;
            // 0x24ada0: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE10u;
            goto label_24ae10;
        }
    }
    ctx->pc = 0x24ADA4u;
    // 0x24ada4: 0x2653008c  addiu       $s3, $s2, 0x8C
    ctx->pc = 0x24ada4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
    // 0x24ada8: 0x8e140014  lw          $s4, 0x14($s0)
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24adac: 0x0  nop
    ctx->pc = 0x24adacu;
    // NOP
label_24adb0:
    // 0x24adb0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24adb4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24adb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24adbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24ADBCu;
    {
        const bool branch_taken_0x24adbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADBCu;
        // 0x24adc0: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24adbc) {
            ctx->pc = 0x24ADCCu;
            goto label_24adcc;
        }
    }
    ctx->pc = 0x24ADC4u;
    // 0x24adc4: 0xc090c82  jal         func_243208
    ctx->pc = 0x24ADC4u;
    SET_GPR_U32(ctx, 31, 0x24ADCCu);
    ctx->pc = 0x24ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ADC4u;
    // 0x24adc8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x24ADC4u, 0x24ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ADCCu;
label_24adcc:
    // 0x24adcc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x24adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x24add0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24add4: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x24add4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x24add8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x24add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x24addc: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x24ade0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ADE0u;
    {
        const bool branch_taken_0x24ade0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADE0u;
        // 0x24ade4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ade0) {
            ctx->pc = 0x24ADF8u;
            goto label_24adf8;
        }
    }
    ctx->pc = 0x24ADE8u;
    // 0x24ade8: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x24ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x24adec: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x24adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x24adf0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x24adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x24adf4: 0x0  nop
    ctx->pc = 0x24adf4u;
    // NOP
label_24adf8:
    // 0x24adf8: 0xae50008c  sw          $s0, 0x8C($s2)
    ctx->pc = 0x24adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 16));
    // 0x24adfc: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x24adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x24ae00: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x24ae00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae04: 0x5600ffea  bnel        $s0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24AE04u;
    {
        const bool branch_taken_0x24ae04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae04) {
            ctx->pc = 0x24AE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AE04u;
            // 0x24ae08: 0x8e140014  lw          $s4, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24ADB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24adb0;
        }
    }
    ctx->pc = 0x24AE0Cu;
    // 0x24ae0c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x24ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_24ae10:
    // 0x24ae10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AE10u;
    {
        const bool branch_taken_0x24ae10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE10u;
        // 0x24ae14: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae10) {
            ctx->pc = 0x24AE20u;
            goto label_24ae20;
        }
    }
    ctx->pc = 0x24AE18u;
    // 0x24ae18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24AE18u;
    {
        const bool branch_taken_0x24ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE18u;
        // 0x24ae1c: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae18) {
            ctx->pc = 0x24AE24u;
            goto label_24ae24;
        }
    }
    ctx->pc = 0x24AE20u;
label_24ae20:
    // 0x24ae20: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x24ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_24ae24:
    // 0x24ae24: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x24ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x24ae28: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x24ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x24ae2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24ae30: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x24ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x24ae34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24ae38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AE38u;
    {
        const bool branch_taken_0x24ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE38u;
        // 0x24ae3c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae38) {
            ctx->pc = 0x24AE58u;
            goto label_24ae58;
        }
    }
    ctx->pc = 0x24AE40u;
    // 0x24ae40: 0xc090c82  jal         func_243208
    ctx->pc = 0x24AE40u;
    SET_GPR_U32(ctx, 31, 0x24AE48u);
    ctx->pc = 0x24AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE40u;
    // 0x24ae44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x24AE40u, 0x24AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE48u;
label_24ae48:
    // 0x24ae48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24AE48u;
    {
        const bool branch_taken_0x24ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE48u;
        // 0x24ae4c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae48) {
            ctx->pc = 0x24AE5Cu;
            goto label_24ae5c;
        }
    }
    ctx->pc = 0x24AE50u;
label_24ae50:
    // 0x24ae50: 0x5620ffcf  bnel        $s1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x24AE50u;
    {
        const bool branch_taken_0x24ae50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ae50) {
            ctx->pc = 0x24AE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AE50u;
            // 0x24ae54: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AD90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ad90;
        }
    }
    ctx->pc = 0x24AE58u;
label_24ae58:
    // 0x24ae58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24ae5c:
    // 0x24ae5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24ae5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ae60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24ae60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ae64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24ae64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ae68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24ae68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ae6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24ae6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ae70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ae70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ae74: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE74u;
        // 0x24ae78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE7Cu;
    // 0x24ae7c: 0x0  nop
    ctx->pc = 0x24ae7cu;
    // NOP
label_24ae80:
    // 0x24ae80: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ae84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ae84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ae88: 0x8c4501a0  lw          $a1, 0x1A0($v0)
    ctx->pc = 0x24ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x24ae8c: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x24ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x24ae90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ae94: 0x0  nop
    ctx->pc = 0x24ae94u;
    // NOP
label_24ae98:
    // 0x24ae98: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x24AE98u;
    {
        const bool branch_taken_0x24ae98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE98u;
        // 0x24ae9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae98) {
            ctx->pc = 0x24AEECu;
            goto label_24aeec;
        }
    }
    ctx->pc = 0x24AEA0u;
    // 0x24aea0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24aea4: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x24AEA4u;
    {
        const bool branch_taken_0x24aea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x24aea4) {
            ctx->pc = 0x24AEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AEA4u;
            // 0x24aea8: 0x8ca50054  lw          $a1, 0x54($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ae98;
        }
    }
    ctx->pc = 0x24AEACu;
    // 0x24aeac: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x24aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x24aeb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AEB0u;
    {
        const bool branch_taken_0x24aeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB0u;
        // 0x24aeb4: 0x8ca20058  lw          $v0, 0x58($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb0) {
            ctx->pc = 0x24AEC0u;
            goto label_24aec0;
        }
    }
    ctx->pc = 0x24AEB8u;
    // 0x24aeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24AEB8u;
    {
        const bool branch_taken_0x24aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB8u;
        // 0x24aebc: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb8) {
            ctx->pc = 0x24AEC4u;
            goto label_24aec4;
        }
    }
    ctx->pc = 0x24AEC0u;
label_24aec0:
    // 0x24aec0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x24aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_24aec4:
    // 0x24aec4: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x24aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x24aec8: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x24aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x24aecc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24aed0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x24aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24aed4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24aed8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AED8u;
    {
        const bool branch_taken_0x24aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED8u;
        // 0x24aedc: 0xaca20030  sw          $v0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aed8) {
            ctx->pc = 0x24AEE8u;
            goto label_24aee8;
        }
    }
    ctx->pc = 0x24AEE0u;
    // 0x24aee0: 0xc090c82  jal         func_243208
    ctx->pc = 0x24AEE0u;
    SET_GPR_U32(ctx, 31, 0x24AEE8u);
    ctx->pc = 0x24AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEE0u;
    // 0x24aee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x24AEE0u, 0x24AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEE8u;
label_24aee8:
    // 0x24aee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24aeec:
    // 0x24aeec: 0x3e00008  jr          $ra
    ctx->pc = 0x24AEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEECu;
        // 0x24aef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AEF4u;
    // 0x24aef4: 0x0  nop
    ctx->pc = 0x24aef4u;
    // NOP
}
