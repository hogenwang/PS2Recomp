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

// Function: sub_0014D180
// Address: 0x14d180 - 0x14d1f0
void sub_0014D180_0x14d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D180_0x14d180");
#endif

    switch (ctx->pc) {
        case 0x14d194u: goto label_14d194;
        case 0x14d1bcu: goto label_14d1bc;
        case 0x14d1c4u: goto label_14d1c4;
        default: break;
    }

    ctx->pc = 0x14d180u;

    // 0x14d180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d18c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14d18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d190: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x14d190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_14d194:
    // 0x14d194: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14d198: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x14d198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x14d19c: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x14d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x14d1a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d1a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14d1a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d1ac: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14d1b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d1b4: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x14D1B4u;
    SET_GPR_U32(ctx, 31, 0x14D1BCu);
    ctx->pc = 0x14D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1B4u;
    // 0x14d1b8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x14D1B4u, 0x14D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1BCu;
label_14d1bc:
    // 0x14d1bc: 0xc05329c  jal         func_14CA70
    ctx->pc = 0x14D1BCu;
    SET_GPR_U32(ctx, 31, 0x14D1C4u);
    ctx->pc = 0x14D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D1BCu;
    // 0x14d1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA70u, 0x14D1BCu, 0x14D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1C4u;
label_14d1c4:
    // 0x14d1c4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14d1c8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x14d1c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d1cc: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x14d1ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14d1d0: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x14D1D0u;
    {
        const bool branch_taken_0x14d1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d1d0) {
            ctx->pc = 0x14D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D1D0u;
            // 0x14d1d4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d194;
        }
    }
    ctx->pc = 0x14D1D8u;
    // 0x14d1d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14d1dc: 0xa0605d18  sb          $zero, 0x5D18($v1)
    ctx->pc = 0x14d1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23832), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1E8u;
        // 0x14d1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D1F0u;
}
