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

// Function: sub_001B9018
// Address: 0x1b9018 - 0x1b90e8
void sub_001B9018_0x1b9018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9018_0x1b9018");
#endif

    switch (ctx->pc) {
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9070u: goto label_1b9070;
        case 0x1b9080u: goto label_1b9080;
        case 0x1b908cu: goto label_1b908c;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90bcu: goto label_1b90bc;
        default: break;
    }

    ctx->pc = 0x1b9018u;

    // 0x1b9018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b901c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9028: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b9028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b902c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9030: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b9030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b9038: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b9038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b903c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b9040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b9040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9044: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b9044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b9048: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x1b904c: 0x8606003c  lh          $a2, 0x3C($s0)
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b9050: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9054: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x1b9054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1b9058: 0xc06de5a  jal         func_1B7968
    ctx->pc = 0x1B9058u;
    SET_GPR_U32(ctx, 31, 0x1B9060u);
    ctx->pc = 0x1B905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9058u;
    // 0x1b905c: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7968u, 0x1B9058u, 0x1B9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9060u;
label_1b9060:
    // 0x1b9060: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b9060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b9064: 0x8c65c360  lw          $a1, -0x3CA0($v1)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951776)));
    // 0x1b9068: 0xc06dc04  jal         func_1B7010
    ctx->pc = 0x1B9068u;
    SET_GPR_U32(ctx, 31, 0x1B9070u);
    ctx->pc = 0x1B906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9068u;
    // 0x1b906c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7010u, 0x1B9068u, 0x1B9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9070u;
label_1b9070:
    // 0x1b9070: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b9070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9078: 0xc06dbec  jal         func_1B6FB0
    ctx->pc = 0x1B9078u;
    SET_GPR_U32(ctx, 31, 0x1B9080u);
    ctx->pc = 0x1B907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9078u;
    // 0x1b907c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB0u, 0x1B9078u, 0x1B9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9080u;
label_1b9080:
    // 0x1b9080: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b9080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b9084: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B9084u;
    SET_GPR_U32(ctx, 31, 0x1B908Cu);
    ctx->pc = 0x1B9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9084u;
    // 0x1b9088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B9084u, 0x1B908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B908Cu;
label_1b908c:
    // 0x1b908c: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1B908Cu;
    SET_GPR_U32(ctx, 31, 0x1B9094u);
    ctx->pc = 0x1B9090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B908Cu;
    // 0x1b9090: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E98u, 0x1B908Cu, 0x1B9094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9094u;
label_1b9094:
    // 0x1b9094: 0xc06dada  jal         func_1B6B68
    ctx->pc = 0x1B9094u;
    SET_GPR_U32(ctx, 31, 0x1B909Cu);
    ctx->pc = 0x1B9098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9094u;
    // 0x1b9098: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1B9094u, 0x1B909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B909Cu;
label_1b909c:
    // 0x1b909c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b90a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b90a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b90a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b90a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90ac: 0xc06da76  jal         func_1B69D8
    ctx->pc = 0x1B90ACu;
    SET_GPR_U32(ctx, 31, 0x1B90B4u);
    ctx->pc = 0x1B90B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90ACu;
    // 0x1b90b0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B69D8u, 0x1B90ACu, 0x1B90B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90B4u;
label_1b90b4:
    // 0x1b90b4: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1B90B4u;
    SET_GPR_U32(ctx, 31, 0x1B90BCu);
    ctx->pc = 0x1B90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90B4u;
    // 0x1b90b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D90u, 0x1B90B4u, 0x1B90BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B90BCu;
label_1b90bc:
    // 0x1b90bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b90bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b90c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1b90c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b90c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b90c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b90c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b90c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b90cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b90d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b90d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b90d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b90d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b90d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b90d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b90dc: 0x806e3c4  j           func_1B8F10
    ctx->pc = 0x1B90DCu;
    ctx->pc = 0x1B90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B90DCu;
    // 0x1b90e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    sub_001B8F10_0x1b8f10(rdram, ctx, runtime); return;
    ctx->pc = 0x1B90E4u;
    // 0x1b90e4: 0x0  nop
    ctx->pc = 0x1b90e4u;
    // NOP
}
