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

// Function: sub_0033DFC0
// Address: 0x33dfc0 - 0x33e0b0
void sub_0033DFC0_0x33dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DFC0_0x33dfc0");
#endif

    switch (ctx->pc) {
        case 0x33e018u: goto label_33e018;
        case 0x33e024u: goto label_33e024;
        case 0x33e030u: goto label_33e030;
        case 0x33e038u: goto label_33e038;
        case 0x33e040u: goto label_33e040;
        case 0x33e048u: goto label_33e048;
        case 0x33e058u: goto label_33e058;
        case 0x33e078u: goto label_33e078;
        default: break;
    }

    ctx->pc = 0x33dfc0u;

    // 0x33dfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33dfc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33dfc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33dfcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33dfd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33dfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33dfd8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x33dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x33dfdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33dfe0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DFE0u;
    {
        const bool branch_taken_0x33dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFE0u;
        // 0x33dfe4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dfe0) {
            ctx->pc = 0x33DFF4u;
            goto label_33dff4;
        }
    }
    ctx->pc = 0x33DFE8u;
    // 0x33dfe8: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33dfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33dfec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DFECu;
    {
        const bool branch_taken_0x33dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFECu;
        // 0x33dff0: 0x2610dd98  addiu       $s0, $s0, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dfec) {
            ctx->pc = 0x33DFFCu;
            goto label_33dffc;
        }
    }
    ctx->pc = 0x33DFF4u;
label_33dff4:
    // 0x33dff4: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x33dff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x33dff8: 0x2610db50  addiu       $s0, $s0, -0x24B0
    ctx->pc = 0x33dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
label_33dffc:
    // 0x33dffc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x33DFFCu;
    {
        const bool branch_taken_0x33dffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dffc) {
            ctx->pc = 0x33E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DFFCu;
            // 0x33e000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E008u;
            goto label_33e008;
        }
    }
    ctx->pc = 0x33E004u;
    // 0x33e004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e008:
    // 0x33e008: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x33e008u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e00c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e010: 0xc0cf7c4  jal         func_33DF10
    ctx->pc = 0x33E010u;
    SET_GPR_U32(ctx, 31, 0x33E018u);
    ctx->pc = 0x33E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E010u;
    // 0x33e014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF10u, 0x33E010u, 0x33E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E018u;
label_33e018:
    // 0x33e018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e01c: 0xc0cf7c4  jal         func_33DF10
    ctx->pc = 0x33E01Cu;
    SET_GPR_U32(ctx, 31, 0x33E024u);
    ctx->pc = 0x33E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E01Cu;
    // 0x33e020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF10u, 0x33E01Cu, 0x33E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E024u;
label_33e024:
    // 0x33e024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e028: 0xc0cf7c4  jal         func_33DF10
    ctx->pc = 0x33E028u;
    SET_GPR_U32(ctx, 31, 0x33E030u);
    ctx->pc = 0x33E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E028u;
    // 0x33e02c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF10u, 0x33E028u, 0x33E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E030u;
label_33e030:
    // 0x33e030: 0xc0cf768  jal         func_33DDA0
    ctx->pc = 0x33E030u;
    SET_GPR_U32(ctx, 31, 0x33E038u);
    ctx->pc = 0x33DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DDA0u, 0x33E030u, 0x33E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E038u;
label_33e038:
    // 0x33e038: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x33e038u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33e03c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33e03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e040:
    // 0x33e040: 0xc0cf7a4  jal         func_33DE90
    ctx->pc = 0x33E040u;
    SET_GPR_U32(ctx, 31, 0x33E048u);
    ctx->pc = 0x33DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DE90u, 0x33E040u, 0x33E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E048u;
label_33e048:
    // 0x33e048: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x33e048u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e04c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x33e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33e050: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x33E050u;
    SET_GPR_U32(ctx, 31, 0x33E058u);
    ctx->pc = 0x33E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E050u;
    // 0x33e054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B010u, 0x33E050u, 0x33E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E058u;
label_33e058:
    // 0x33e058: 0xa2110150  sb          $s1, 0x150($s0)
    ctx->pc = 0x33e058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 17));
    // 0x33e05c: 0x2604014c  addiu       $a0, $s0, 0x14C
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x33e060: 0xa211014d  sb          $s1, 0x14D($s0)
    ctx->pc = 0x33e060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 333), (uint8_t)GPR_U32(ctx, 17));
    // 0x33e064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e068: 0xa2020151  sb          $v0, 0x151($s0)
    ctx->pc = 0x33e068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e06c: 0xa202014e  sb          $v0, 0x14E($s0)
    ctx->pc = 0x33e06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 334), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e070: 0xc0c8504  jal         func_321410
    ctx->pc = 0x33E070u;
    SET_GPR_U32(ctx, 31, 0x33E078u);
    ctx->pc = 0x33E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E070u;
    // 0x33e074: 0xa2020152  sb          $v0, 0x152($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 338), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321410u, 0x33E070u, 0x33E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E078u;
label_33e078:
    // 0x33e078: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33e078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33e07c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x33e07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e080: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x33e080u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33e084: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33E084u;
    {
        const bool branch_taken_0x33e084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E084u;
        // 0x33e088: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e084) {
            ctx->pc = 0x33E040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33e040;
        }
    }
    ctx->pc = 0x33E08Cu;
    // 0x33e08c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33e08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33e090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33e098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33e09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0A0u;
        // 0x33e0a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E0A8u;
    // 0x33e0a8: 0x0  nop
    ctx->pc = 0x33e0a8u;
    // NOP
    // 0x33e0ac: 0x0  nop
    ctx->pc = 0x33e0acu;
    // NOP
}
