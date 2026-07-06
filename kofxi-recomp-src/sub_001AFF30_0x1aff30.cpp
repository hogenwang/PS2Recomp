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

// Function: sub_001AFF30
// Address: 0x1aff30 - 0x1affe0
void sub_001AFF30_0x1aff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFF30_0x1aff30");
#endif

    switch (ctx->pc) {
        case 0x1aff58u: goto label_1aff58;
        case 0x1aff80u: goto label_1aff80;
        case 0x1aff88u: goto label_1aff88;
        case 0x1aff9cu: goto label_1aff9c;
        case 0x1affb0u: goto label_1affb0;
        case 0x1affbcu: goto label_1affbc;
        default: break;
    }

    ctx->pc = 0x1aff30u;

    // 0x1aff30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aff34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1aff34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aff3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aff3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aff44: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFF44u;
    {
        const bool branch_taken_0x1aff44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF44u;
        // 0x1aff48: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff44) {
            ctx->pc = 0x1AFF60u;
            goto label_1aff60;
        }
    }
    ctx->pc = 0x1AFF4Cu;
    // 0x1aff4c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1aff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1aff50: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AFF50u;
    SET_GPR_U32(ctx, 31, 0x1AFF58u);
    ctx->pc = 0x1AFF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF50u;
    // 0x1aff54: 0x248476a0  addiu       $a0, $a0, 0x76A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1AFF50u, 0x1AFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF58u;
label_1aff58:
    // 0x1aff58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1AFF58u;
    {
        const bool branch_taken_0x1aff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF58u;
        // 0x1aff5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff58) {
            ctx->pc = 0x1AFFD0u;
            goto label_1affd0;
        }
    }
    ctx->pc = 0x1AFF60u;
label_1aff60:
    // 0x1aff60: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1aff60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1aff64: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x1aff64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x1aff68: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1aff68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1aff6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aff6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aff70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aff74: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1aff74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x1aff78: 0xc06dab0  jal         func_1B6AC0
    ctx->pc = 0x1AFF78u;
    SET_GPR_U32(ctx, 31, 0x1AFF80u);
    ctx->pc = 0x1AFF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF78u;
    // 0x1aff7c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AC0u, 0x1AFF78u, 0x1AFF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF80u;
label_1aff80:
    // 0x1aff80: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1AFF80u;
    SET_GPR_U32(ctx, 31, 0x1AFF88u);
    ctx->pc = 0x1AFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF80u;
    // 0x1aff84: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C60u, 0x1AFF80u, 0x1AFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF88u;
label_1aff88:
    // 0x1aff88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aff8c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFF8Cu;
    {
        const bool branch_taken_0x1aff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF8Cu;
        // 0x1aff90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff8c) {
            ctx->pc = 0x1AFFA8u;
            goto label_1affa8;
        }
    }
    ctx->pc = 0x1AFF94u;
    // 0x1aff94: 0xc06daf6  jal         func_1B6BD8
    ctx->pc = 0x1AFF94u;
    SET_GPR_U32(ctx, 31, 0x1AFF9Cu);
    ctx->pc = 0x1AFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFF94u;
    // 0x1aff98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BD8u, 0x1AFF94u, 0x1AFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFF9Cu;
label_1aff9c:
    // 0x1aff9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AFF9Cu;
    {
        const bool branch_taken_0x1aff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF9Cu;
        // 0x1affa0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aff9c) {
            ctx->pc = 0x1AFFD0u;
            goto label_1affd0;
        }
    }
    ctx->pc = 0x1AFFA4u;
    // 0x1affa4: 0x0  nop
    ctx->pc = 0x1affa4u;
    // NOP
label_1affa8:
    // 0x1affa8: 0xc06c47c  jal         func_1B11F0
    ctx->pc = 0x1AFFA8u;
    SET_GPR_U32(ctx, 31, 0x1AFFB0u);
    ctx->pc = 0x1B11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B11F0u, 0x1AFFA8u, 0x1AFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFB0u;
label_1affb0:
    // 0x1affb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1affb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affb4: 0xc06c420  jal         func_1B1080
    ctx->pc = 0x1AFFB4u;
    SET_GPR_U32(ctx, 31, 0x1AFFBCu);
    ctx->pc = 0x1AFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFB4u;
    // 0x1affb8: 0xfe020010  sd          $v0, 0x10($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1080u, 0x1AFFB4u, 0x1AFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFFBCu;
label_1affbc:
    // 0x1affbc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1affbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1affc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1affc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1affc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affc8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1affc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1affcc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1affccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1affd0:
    // 0x1affd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1affd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1affd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1affd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1affd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFD8u;
        // 0x1affdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFFE0u;
}
