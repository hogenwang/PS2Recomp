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

// Function: sub_002ACE20
// Address: 0x2ace20 - 0x2ad260
void sub_002ACE20_0x2ace20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACE20_0x2ace20");
#endif

    switch (ctx->pc) {
        case 0x2ace60u: goto label_2ace60;
        case 0x2ace7cu: goto label_2ace7c;
        case 0x2acea4u: goto label_2acea4;
        case 0x2aceccu: goto label_2acecc;
        case 0x2aced8u: goto label_2aced8;
        case 0x2acef8u: goto label_2acef8;
        case 0x2acf0cu: goto label_2acf0c;
        case 0x2acf1cu: goto label_2acf1c;
        case 0x2acf28u: goto label_2acf28;
        case 0x2acf44u: goto label_2acf44;
        case 0x2acf90u: goto label_2acf90;
        case 0x2acfa0u: goto label_2acfa0;
        case 0x2acfacu: goto label_2acfac;
        case 0x2acfb8u: goto label_2acfb8;
        case 0x2acfc8u: goto label_2acfc8;
        case 0x2acfe0u: goto label_2acfe0;
        case 0x2ad000u: goto label_2ad000;
        case 0x2ad008u: goto label_2ad008;
        case 0x2ad020u: goto label_2ad020;
        case 0x2ad03cu: goto label_2ad03c;
        case 0x2ad058u: goto label_2ad058;
        case 0x2ad0a8u: goto label_2ad0a8;
        case 0x2ad0e0u: goto label_2ad0e0;
        case 0x2ad0fcu: goto label_2ad0fc;
        case 0x2ad118u: goto label_2ad118;
        case 0x2ad168u: goto label_2ad168;
        default: break;
    }

    ctx->pc = 0x2ace20u;

    // 0x2ace20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ace20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ace24: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2ace24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2ace28: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2ace28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2ace2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ace2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace30: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ace30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ace34: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x2ace34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ace38: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2ace38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ace3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ace3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace40: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ace40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ace44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ace44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ace48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ace4c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2ace4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ace50: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2ace50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2ace54: 0x8e95003c  lw          $s5, 0x3C($s4)
    ctx->pc = 0x2ace54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2ace58: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2ACE58u;
    SET_GPR_U32(ctx, 31, 0x2ACE60u);
    ctx->pc = 0x2ACE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE58u;
    // 0x2ace5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2ACE58u, 0x2ACE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE60u;
label_2ace60:
    // 0x2ace60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACE60u;
    {
        const bool branch_taken_0x2ace60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE60u;
        // 0x2ace64: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace60) {
            ctx->pc = 0x2ACE84u;
            goto label_2ace84;
        }
    }
    ctx->pc = 0x2ACE68u;
    // 0x2ace68: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x2ace68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2ace6c: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x2ace6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x2ace70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ace70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace74: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACE74u;
    SET_GPR_U32(ctx, 31, 0x2ACE7Cu);
    ctx->pc = 0x2ACE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE74u;
    // 0x2ace78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ACE74u, 0x2ACE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE7Cu;
label_2ace7c:
    // 0x2ace7c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2ACE7Cu;
    {
        const bool branch_taken_0x2ace7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE7Cu;
        // 0x2ace80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace7c) {
            ctx->pc = 0x2AD238u;
            goto label_2ad238;
        }
    }
    ctx->pc = 0x2ACE84u;
label_2ace84:
    // 0x2ace84: 0x52200061  beql        $s1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x2ACE84u;
    {
        const bool branch_taken_0x2ace84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ace84) {
            ctx->pc = 0x2ACE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACE84u;
            // 0x2ace88: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD00Cu;
            goto label_2ad00c;
        }
    }
    ctx->pc = 0x2ACE8Cu;
    // 0x2ace8c: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x2ace8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x2ace90: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2ace90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2ace94: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2ACE94u;
    {
        const bool branch_taken_0x2ace94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE94u;
        // 0x2ace98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace94) {
            ctx->pc = 0x2ACF20u;
            goto label_2acf20;
        }
    }
    ctx->pc = 0x2ACE9Cu;
    // 0x2ace9c: 0xc0a3bbe  jal         func_28EEF8
    ctx->pc = 0x2ACE9Cu;
    SET_GPR_U32(ctx, 31, 0x2ACEA4u);
    ctx->pc = 0x28EEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EEF8u, 0x2ACE9Cu, 0x2ACEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEA4u;
label_2acea4:
    // 0x2acea4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2acea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acea8: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACEA8u;
    {
        const bool branch_taken_0x2acea8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acea8) {
            ctx->pc = 0x2ACEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACEA8u;
            // 0x2aceac: 0x8e8200dc  lw          $v0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACEB8u;
            goto label_2aceb8;
        }
    }
    ctx->pc = 0x2ACEB0u;
    // 0x2aceb0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2ACEB0u;
    {
        const bool branch_taken_0x2aceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEB0u;
        // 0x2aceb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aceb0) {
            ctx->pc = 0x2AD238u;
            goto label_2ad238;
        }
    }
    ctx->pc = 0x2ACEB8u;
label_2aceb8:
    // 0x2aceb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acec4: 0xc0a3bd0  jal         func_28EF40
    ctx->pc = 0x2ACEC4u;
    SET_GPR_U32(ctx, 31, 0x2ACECCu);
    ctx->pc = 0x2ACEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEC4u;
    // 0x2acec8: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF40u, 0x2ACEC4u, 0x2ACECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACECCu;
label_2acecc:
    // 0x2acecc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2ACECCu;
    {
        const bool branch_taken_0x2acecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACECCu;
        // 0x2aced0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acecc) {
            ctx->pc = 0x2ACF20u;
            goto label_2acf20;
        }
    }
    ctx->pc = 0x2ACED4u;
    // 0x2aced4: 0x0  nop
    ctx->pc = 0x2aced4u;
    // NOP
label_2aced8:
    // 0x2aced8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2aced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2acedc: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2ACEDCu;
    {
        const bool branch_taken_0x2acedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acedc) {
            ctx->pc = 0x2ACEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACEDCu;
            // 0x2acee0: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD00Cu;
            goto label_2ad00c;
        }
    }
    ctx->pc = 0x2ACEE4u;
    // 0x2acee4: 0x8e820088  lw          $v0, 0x88($s4)
    ctx->pc = 0x2acee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2acee8: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x2ACEE8u;
    {
        const bool branch_taken_0x2acee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acee8) {
            ctx->pc = 0x2ACEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACEE8u;
            // 0x2aceec: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACFF0u;
            goto label_2acff0;
        }
    }
    ctx->pc = 0x2ACEF0u;
    // 0x2acef0: 0xc0a399c  jal         func_28E670
    ctx->pc = 0x2ACEF0u;
    SET_GPR_U32(ctx, 31, 0x2ACEF8u);
    ctx->pc = 0x2ACEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEF0u;
    // 0x2acef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E670u, 0x2ACEF0u, 0x2ACEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEF8u;
label_2acef8:
    // 0x2acef8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2acef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acefc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2acefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2acf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acf04: 0xc0a3bac  jal         func_28EEB0
    ctx->pc = 0x2ACF04u;
    SET_GPR_U32(ctx, 31, 0x2ACF0Cu);
    ctx->pc = 0x2ACF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF04u;
    // 0x2acf08: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EEB0u, 0x2ACF04u, 0x2ACF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF0Cu;
label_2acf0c:
    // 0x2acf0c: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2ACF0Cu;
    {
        const bool branch_taken_0x2acf0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ACF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF0Cu;
        // 0x2acf10: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf0c) {
            ctx->pc = 0x2ACFE8u;
            goto label_2acfe8;
        }
    }
    ctx->pc = 0x2ACF14u;
    // 0x2acf14: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2ACF14u;
    SET_GPR_U32(ctx, 31, 0x2ACF1Cu);
    ctx->pc = 0x2ACF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF14u;
    // 0x2acf18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E430u, 0x2ACF14u, 0x2ACF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF1Cu;
label_2acf1c:
    // 0x2acf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acf20:
    // 0x2acf20: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2ACF20u;
    SET_GPR_U32(ctx, 31, 0x2ACF28u);
    ctx->pc = 0x2ACF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF20u;
    // 0x2acf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2ACF20u, 0x2ACF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF28u;
label_2acf28:
    // 0x2acf28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf2c: 0x213282d  daddu       $a1, $s0, $s3
    ctx->pc = 0x2acf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2acf30: 0x64a50003  daddiu      $a1, $a1, 0x3
    ctx->pc = 0x2acf30u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)3);
    // 0x2acf34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2acf34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2acf38: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2acf38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2acf3c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2ACF3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACF44u);
    ctx->pc = 0x2ACF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF3Cu;
    // 0x2acf40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2ACF3Cu, 0x2ACF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF44u;
label_2acf44:
    // 0x2acf44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ACF44u;
    {
        const bool branch_taken_0x2acf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF44u;
        // 0x2acf48: 0x103403  sra         $a2, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acf44) {
            ctx->pc = 0x2ACFC8u;
            goto label_2acfc8;
        }
    }
    ctx->pc = 0x2ACF4Cu;
    // 0x2acf4c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2acf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2acf50: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x2acf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2acf54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2acf54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2acf58: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x2acf58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2acf5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2acf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2acf60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf64: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2acf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2acf68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2acf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acf6c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2acf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2acf70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acf74: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x2acf74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2acf78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2acf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acf7c: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2acf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2acf80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acf84: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2acf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2acf88: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2ACF88u;
    SET_GPR_U32(ctx, 31, 0x2ACF90u);
    ctx->pc = 0x2ACF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF88u;
    // 0x2acf8c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2ACF88u, 0x2ACF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF90u;
label_2acf90:
    // 0x2acf90: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2acf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2acf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acf98: 0xc0a39ae  jal         func_28E6B8
    ctx->pc = 0x2ACF98u;
    SET_GPR_U32(ctx, 31, 0x2ACFA0u);
    ctx->pc = 0x2ACF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACF98u;
    // 0x2acf9c: 0x263982d  daddu       $s3, $s3, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6B8u, 0x2ACF98u, 0x2ACFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFA0u;
label_2acfa0:
    // 0x2acfa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2acfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfa4: 0xc0a399c  jal         func_28E670
    ctx->pc = 0x2ACFA4u;
    SET_GPR_U32(ctx, 31, 0x2ACFACu);
    ctx->pc = 0x2ACFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFA4u;
    // 0x2acfa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E670u, 0x2ACFA4u, 0x2ACFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFACu;
label_2acfac:
    // 0x2acfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2acfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfb0: 0xc0a3a8a  jal         func_28EA28
    ctx->pc = 0x2ACFB0u;
    SET_GPR_U32(ctx, 31, 0x2ACFB8u);
    ctx->pc = 0x2ACFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFB0u;
    // 0x2acfb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA28u, 0x2ACFB0u, 0x2ACFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFB8u;
label_2acfb8:
    // 0x2acfb8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2ACFB8u;
    {
        const bool branch_taken_0x2acfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFB8u;
        // 0x2acfbc: 0x8e8300dc  lw          $v1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfb8) {
            ctx->pc = 0x2ACED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aced8;
        }
    }
    ctx->pc = 0x2ACFC0u;
    // 0x2acfc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ACFC0u;
    {
        const bool branch_taken_0x2acfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFC0u;
        // 0x2acfc4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfc0) {
            ctx->pc = 0x2ACFF0u;
            goto label_2acff0;
        }
    }
    ctx->pc = 0x2ACFC8u;
label_2acfc8:
    // 0x2acfc8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2acfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2acfcc: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x2acfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2acfd0: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x2acfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x2acfd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfd8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACFD8u;
    SET_GPR_U32(ctx, 31, 0x2ACFE0u);
    ctx->pc = 0x2ACFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFD8u;
    // 0x2acfdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ACFD8u, 0x2ACFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFE0u;
label_2acfe0:
    // 0x2acfe0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2ACFE0u;
    {
        const bool branch_taken_0x2acfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFE0u;
        // 0x2acfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfe0) {
            ctx->pc = 0x2AD238u;
            goto label_2ad238;
        }
    }
    ctx->pc = 0x2ACFE8u;
label_2acfe8:
    // 0x2acfe8: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x2acfec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2acfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2acff0:
    // 0x2acff0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACFF0u;
    {
        const bool branch_taken_0x2acff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acff0) {
            ctx->pc = 0x2ACFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACFF0u;
            // 0x2acff4: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD00Cu;
            goto label_2ad00c;
        }
    }
    ctx->pc = 0x2ACFF8u;
    // 0x2acff8: 0xc0a3bf4  jal         func_28EFD0
    ctx->pc = 0x2ACFF8u;
    SET_GPR_U32(ctx, 31, 0x2AD000u);
    ctx->pc = 0x2ACFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFF8u;
    // 0x2acffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EFD0u, 0x2ACFF8u, 0x2AD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD000u;
label_2ad000:
    // 0x2ad000: 0xc0a3be2  jal         func_28EF88
    ctx->pc = 0x2AD000u;
    SET_GPR_U32(ctx, 31, 0x2AD008u);
    ctx->pc = 0x2AD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD000u;
    // 0x2ad004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF88u, 0x2AD000u, 0x2AD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD008u;
label_2ad008:
    // 0x2ad008: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x2ad008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_2ad00c:
    // 0x2ad00c: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AD00Cu;
    {
        const bool branch_taken_0x2ad00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad00c) {
            ctx->pc = 0x2AD010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD00Cu;
            // 0x2ad010: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0C4u;
            goto label_2ad0c4;
        }
    }
    ctx->pc = 0x2AD014u;
    // 0x2ad014: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad018: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2AD018u;
    {
        const bool branch_taken_0x2ad018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD018u;
        // 0x2ad01c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad018) {
            ctx->pc = 0x2AD0C0u;
            goto label_2ad0c0;
        }
    }
    ctx->pc = 0x2AD020u;
label_2ad020:
    // 0x2ad020: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ad020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ad024: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ad024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ad028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad02c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad030: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ad030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad034: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2AD034u;
    SET_GPR_U32(ctx, 31, 0x2AD03Cu);
    ctx->pc = 0x2AD038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD034u;
    // 0x2ad038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2AD034u, 0x2AD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD03Cu;
label_2ad03c:
    // 0x2ad03c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad040: 0x213282d  daddu       $a1, $s0, $s3
    ctx->pc = 0x2ad040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2ad044: 0x64a50003  daddiu      $a1, $a1, 0x3
    ctx->pc = 0x2ad044u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)3);
    // 0x2ad048: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2ad048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2ad04c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2ad04cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2ad050: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2AD050u;
    SET_GPR_U32(ctx, 31, 0x2AD058u);
    ctx->pc = 0x2AD054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD050u;
    // 0x2ad054: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2AD050u, 0x2AD058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD058u;
label_2ad058:
    // 0x2ad058: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2AD058u;
    {
        const bool branch_taken_0x2ad058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD058u;
        // 0x2ad05c: 0x103403  sra         $a2, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad058) {
            ctx->pc = 0x2ACFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acfc8;
        }
    }
    ctx->pc = 0x2AD060u;
    // 0x2ad060: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2ad060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ad064: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x2ad064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2ad068: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ad068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ad06c: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x2ad06cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2ad070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad078: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2ad078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2ad07c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ad07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad080: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x2ad080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ad084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ad088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad08c: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x2ad08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ad090: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad094: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2ad094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ad098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ad098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad09c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2ad09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2ad0a0: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2AD0A0u;
    SET_GPR_U32(ctx, 31, 0x2AD0A8u);
    ctx->pc = 0x2AD0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0A0u;
    // 0x2ad0a4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2AD0A0u, 0x2AD0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0A8u;
label_2ad0a8:
    // 0x2ad0a8: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x2ad0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2ad0ac: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x2ad0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2ad0b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad0b4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ad0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad0b8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2AD0B8u;
    {
        const bool branch_taken_0x2ad0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B8u;
        // 0x2ad0bc: 0x263982d  daddu       $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0b8) {
            ctx->pc = 0x2AD020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad020;
        }
    }
    ctx->pc = 0x2AD0C0u;
label_2ad0c0:
    // 0x2ad0c0: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x2ad0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_2ad0c4:
    // 0x2ad0c4: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x2ad0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2ad0c8: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AD0C8u;
    {
        const bool branch_taken_0x2ad0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad0c8) {
            ctx->pc = 0x2AD0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD0C8u;
            // 0x2ad0cc: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD18Cu;
            goto label_2ad18c;
        }
    }
    ctx->pc = 0x2AD0D0u;
    // 0x2ad0d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ad0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad0d4: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2AD0D4u;
    {
        const bool branch_taken_0x2ad0d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0D4u;
        // 0x2ad0d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0d4) {
            ctx->pc = 0x2AD188u;
            goto label_2ad188;
        }
    }
    ctx->pc = 0x2AD0DCu;
    // 0x2ad0dc: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x2ad0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_2ad0e0:
    // 0x2ad0e0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ad0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ad0ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ad0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad0f0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2ad0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad0f4: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2AD0F4u;
    SET_GPR_U32(ctx, 31, 0x2AD0FCu);
    ctx->pc = 0x2AD0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0F4u;
    // 0x2ad0f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2AD0F4u, 0x2AD0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0FCu;
label_2ad0fc:
    // 0x2ad0fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad100: 0x213282d  daddu       $a1, $s0, $s3
    ctx->pc = 0x2ad100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2ad104: 0x64a50003  daddiu      $a1, $a1, 0x3
    ctx->pc = 0x2ad104u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)3);
    // 0x2ad108: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2ad108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2ad10c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2ad10cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2ad110: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x2AD110u;
    SET_GPR_U32(ctx, 31, 0x2AD118u);
    ctx->pc = 0x2AD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD110u;
    // 0x2ad114: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2AD110u, 0x2AD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD118u;
label_2ad118:
    // 0x2ad118: 0x1040ffab  beqz        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2AD118u;
    {
        const bool branch_taken_0x2ad118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD118u;
        // 0x2ad11c: 0x103403  sra         $a2, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad118) {
            ctx->pc = 0x2ACFC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2acfc8;
        }
    }
    ctx->pc = 0x2AD120u;
    // 0x2ad120: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ad124: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x2ad124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2ad128: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ad128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ad12c: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x2ad12cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    // 0x2ad130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad138: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2ad138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2ad13c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ad13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad140: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x2ad140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ad144: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ad144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ad148: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ad148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad14c: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x2ad14cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ad150: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad154: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2ad154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ad158: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ad158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad15c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2ad15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2ad160: 0xc0a3942  jal         func_28E508
    ctx->pc = 0x2AD160u;
    SET_GPR_U32(ctx, 31, 0x2AD168u);
    ctx->pc = 0x2AD164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD160u;
    // 0x2ad164: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E508u, 0x2AD160u, 0x2AD168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD168u;
label_2ad168:
    // 0x2ad168: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x2ad168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x2ad16c: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2ad170: 0x262982d  daddu       $s3, $s3, $v0
    ctx->pc = 0x2ad170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2ad174: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x2ad174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2ad178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ad178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad17c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2ad17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad180: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2AD180u;
    {
        const bool branch_taken_0x2ad180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad180) {
            ctx->pc = 0x2AD184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD180u;
            // 0x2ad184: 0x8c840110  lw          $a0, 0x110($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad0e0;
        }
    }
    ctx->pc = 0x2AD188u;
label_2ad188:
    // 0x2ad188: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2ad188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ad18c:
    // 0x2ad18c: 0x6673fff9  daddiu      $s3, $s3, -0x7
    ctx->pc = 0x2ad18cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294967289);
    // 0x2ad190: 0x13143a  dsrl        $v0, $s3, 16
    ctx->pc = 0x2ad190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) >> 16);
    // 0x2ad194: 0x13223a  dsrl        $a0, $s3, 8
    ctx->pc = 0x2ad194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 8);
    // 0x2ad198: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ad19c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ad19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ad1a0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2ad1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2ad1a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ad1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ad1a8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x2ad1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ad1ac: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ad1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ad1b0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ad1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ad1b4: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2ad1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ad1b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ad1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ad1c0: 0x66730003  daddiu      $s3, $s3, 0x3
    ctx->pc = 0x2ad1c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)3);
    // 0x2ad1c4: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x2ad1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ad1c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2ad1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad1cc: 0x132c3a  dsrl        $a1, $s3, 16
    ctx->pc = 0x2ad1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) >> 16);
    // 0x2ad1d0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ad1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ad1d4: 0x13323a  dsrl        $a2, $s3, 8
    ctx->pc = 0x2ad1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> 8);
    // 0x2ad1d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad1dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ad1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ad1e0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2ad1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ad1e4: 0x326700ff  andi        $a3, $s3, 0xFF
    ctx->pc = 0x2ad1e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ad1e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2ad1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ad1ec: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2ad1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ad1f0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2ad1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2ad1f4: 0x66620004  daddiu      $v0, $s3, 0x4
    ctx->pc = 0x2ad1f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4);
    // 0x2ad1f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad1fc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2ad1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ad200: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2ad200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2ad204: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2ad204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ad208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ad208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ad20c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2ad20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ad210: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2ad210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ad214: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2ad214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2ad218: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2ad218u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ad21c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad220: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x2ad220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ad224: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ad224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad228: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x2ad228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ad22c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ad22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad230: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2ad230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ad234: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2ad234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2ad238:
    // 0x2ad238: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ad238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad23c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2ad23cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad240: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2ad240u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad244: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2ad244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad248: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ad248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad24c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2ad24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad250: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ad250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad254: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD254u;
        // 0x2ad258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD25Cu;
    // 0x2ad25c: 0x0  nop
    ctx->pc = 0x2ad25cu;
    // NOP
    if (ctx->pc == 0x2ad25cu) { ctx->pc = 0x2ad260u; }
}
