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

// Function: sub_0022DFC8
// Address: 0x22dfc8 - 0x22e088
void sub_0022DFC8_0x22dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DFC8_0x22dfc8");
#endif

    switch (ctx->pc) {
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        default: break;
    }

    ctx->pc = 0x22dfc8u;

label_22dfc8:
    // 0x22dfc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22dfcc:
    // 0x22dfcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22dfd0:
    // 0x22dfd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22dfd4:
    // 0x22dfd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22dfd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22dfd8:
    // 0x22dfd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22dfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22dfdc:
    // 0x22dfdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22dfe0:
    // 0x22dfe0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22dfe4:
    // 0x22dfe4: 0xc08c682  jal         func_231A08
label_22dfe8:
    if (ctx->pc == 0x22DFE8u) {
        ctx->pc = 0x22DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFE4u;
        // 0x22dfe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFECu;
        goto label_22dfec;
    }
    ctx->pc = 0x22DFE4u;
    SET_GPR_U32(ctx, 31, 0x22DFECu);
    ctx->pc = 0x22DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFE4u;
    // 0x22dfe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22DFE4u, 0x22DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFECu;
label_22dfec:
    // 0x22dfec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22dff0:
    // 0x22dff0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22dff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22dff4:
    // 0x22dff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22dff8:
    // 0x22dff8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22dffc:
    // 0x22dffc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e000:
    // 0x22e000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e004:
    // 0x22e004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e008:
    // 0x22e008: 0x40f809  jalr        $v0
label_22e00c:
    if (ctx->pc == 0x22E00Cu) {
        ctx->pc = 0x22E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E008u;
        // 0x22e00c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E010u;
        goto label_22e010;
    }
    ctx->pc = 0x22E008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E010u);
        ctx->pc = 0x22E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E008u;
        // 0x22e00c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E008u, 0x22E010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E010u;
label_22e010:
    // 0x22e010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e014:
    // 0x22e014: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_22e018:
    if (ctx->pc == 0x22E018u) {
        ctx->pc = 0x22E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E014u;
        // 0x22e018: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E01Cu;
        goto label_22e01c;
    }
    ctx->pc = 0x22E014u;
    {
        const bool branch_taken_0x22e014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e014) {
            ctx->pc = 0x22E018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E014u;
            // 0x22e018: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E02Cu;
            goto label_22e02c;
        }
    }
    ctx->pc = 0x22E01Cu;
label_22e01c:
    // 0x22e01c: 0xc08c698  jal         func_231A60
label_22e020:
    if (ctx->pc == 0x22E020u) {
        ctx->pc = 0x22E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E01Cu;
        // 0x22e020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E024u;
        goto label_22e024;
    }
    ctx->pc = 0x22E01Cu;
    SET_GPR_U32(ctx, 31, 0x22E024u);
    ctx->pc = 0x22E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E01Cu;
    // 0x22e020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E01Cu, 0x22E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E024u;
label_22e024:
    // 0x22e024: 0x10000010  b           . + 4 + (0x10 << 2)
label_22e028:
    if (ctx->pc == 0x22E028u) {
        ctx->pc = 0x22E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E024u;
        // 0x22e028: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E02Cu;
        goto label_22e02c;
    }
    ctx->pc = 0x22E024u;
    {
        const bool branch_taken_0x22e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E024u;
        // 0x22e028: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e024) {
            ctx->pc = 0x22E068u;
            goto label_22e068;
        }
    }
    ctx->pc = 0x22E02Cu;
label_22e02c:
    // 0x22e02c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22e030:
    if (ctx->pc == 0x22E030u) {
        ctx->pc = 0x22E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E02Cu;
        // 0x22e030: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E034u;
        goto label_22e034;
    }
    ctx->pc = 0x22E02Cu;
    {
        const bool branch_taken_0x22e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E02Cu;
        // 0x22e030: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e02c) {
            ctx->pc = 0x22E040u;
            goto label_22e040;
        }
    }
    ctx->pc = 0x22E034u;
label_22e034:
    // 0x22e034: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x22e034u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22e038:
    // 0x22e038: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_22e03c:
    // 0x22e03c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x22e03cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_22e040:
    // 0x22e040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e044:
    // 0x22e044: 0x8c65fa10  lw          $a1, -0x5F0($v1)
    ctx->pc = 0x22e044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
label_22e048:
    // 0x22e048: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x22e048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22e04c:
    // 0x22e04c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x22e04cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_22e050:
    // 0x22e050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e054:
    // 0x22e054: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x22e054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_22e058:
    // 0x22e058: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x22e058u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_22e05c:
    // 0x22e05c: 0xc08c698  jal         func_231A60
label_22e060:
    if (ctx->pc == 0x22E060u) {
        ctx->pc = 0x22E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E05Cu;
        // 0x22e060: 0xa6500034  sh          $s0, 0x34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E064u;
        goto label_22e064;
    }
    ctx->pc = 0x22E05Cu;
    SET_GPR_U32(ctx, 31, 0x22E064u);
    ctx->pc = 0x22E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E05Cu;
    // 0x22e060: 0xa6500034  sh          $s0, 0x34($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22E05Cu, 0x22E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E064u;
label_22e064:
    // 0x22e064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e068:
    // 0x22e068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e06c:
    // 0x22e06c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22e06cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e070:
    // 0x22e070: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e074:
    // 0x22e074: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e078:
    // 0x22e078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e07c:
    // 0x22e07c: 0x3e00008  jr          $ra
label_22e080:
    if (ctx->pc == 0x22E080u) {
        ctx->pc = 0x22E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E07Cu;
        // 0x22e080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E084u;
        goto label_22e084;
    }
    ctx->pc = 0x22E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E07Cu;
        // 0x22e080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E084u;
label_22e084:
    // 0x22e084: 0x0  nop
    ctx->pc = 0x22e084u;
    // NOP
}
