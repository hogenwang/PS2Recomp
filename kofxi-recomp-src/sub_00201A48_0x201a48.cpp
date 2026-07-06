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

// Function: sub_00201A48
// Address: 0x201a48 - 0x201ae0
void sub_00201A48_0x201a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201A48_0x201a48");
#endif

    switch (ctx->pc) {
        case 0x201a98u: goto label_201a98;
        case 0x201ab0u: goto label_201ab0;
        case 0x201ac4u: goto label_201ac4;
        default: break;
    }

    ctx->pc = 0x201a48u;

    // 0x201a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201a4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x201a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x201a54: 0x25110014  addiu       $s1, $t0, 0x14
    ctx->pc = 0x201a54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x201a58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x201a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x201a5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x201a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x201a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201a64: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x201a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a68: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x201a6c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x201a70: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x201a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x201a74: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x201a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a7c: 0x24a5f270  addiu       $a1, $a1, -0xD90
    ctx->pc = 0x201a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
    // 0x201a80: 0x24c6f278  addiu       $a2, $a2, -0xD88
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963832));
    // 0x201a84: 0x8d100024  lw          $s0, 0x24($t0)
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x201a88: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x201a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201a8c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x201a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x201a90: 0xc07340e  jal         func_1CD038
    ctx->pc = 0x201A90u;
    SET_GPR_U32(ctx, 31, 0x201A98u);
    ctx->pc = 0x201A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A90u;
    // 0x201a94: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD038u, 0x201A90u, 0x201A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A98u;
label_201a98:
    // 0x201a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201aa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201AA0u;
    {
        const bool branch_taken_0x201aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AA0u;
        // 0x201aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201aa0) {
            ctx->pc = 0x201AB8u;
            goto label_201ab8;
        }
    }
    ctx->pc = 0x201AA8u;
    // 0x201aa8: 0xc0807e6  jal         func_201F98
    ctx->pc = 0x201AA8u;
    SET_GPR_U32(ctx, 31, 0x201AB0u);
    ctx->pc = 0x201F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F98u, 0x201AA8u, 0x201AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AB0u;
label_201ab0:
    // 0x201ab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201AB0u;
    {
        const bool branch_taken_0x201ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB0u;
        // 0x201ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ab0) {
            ctx->pc = 0x201AC8u;
            goto label_201ac8;
        }
    }
    ctx->pc = 0x201AB8u;
label_201ab8:
    // 0x201ab8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x201ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201abc: 0xc0807e6  jal         func_201F98
    ctx->pc = 0x201ABCu;
    SET_GPR_U32(ctx, 31, 0x201AC4u);
    ctx->pc = 0x201AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201ABCu;
    // 0x201ac0: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F98u, 0x201ABCu, 0x201AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AC4u;
label_201ac4:
    // 0x201ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201ac8:
    // 0x201ac8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x201ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201acc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x201accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x201ad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x201ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201ad4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x201ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x201ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AD8u;
        // 0x201adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AE0u;
}
