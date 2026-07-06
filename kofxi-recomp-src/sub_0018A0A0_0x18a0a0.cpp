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

// Function: sub_0018A0A0
// Address: 0x18a0a0 - 0x18a0e0
void sub_0018A0A0_0x18a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A0A0_0x18a0a0");
#endif

    ctx->pc = 0x18a0a0u;

    // 0x18a0a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a0a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a0a8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a0ac: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x18a0b0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18a0b4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a0b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18a0bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a0c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a0cc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A0CCu;
    {
        const bool branch_taken_0x18a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a0cc) {
            ctx->pc = 0x18A0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A0CCu;
            // 0x18a0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A0D8u;
            goto label_18a0d8;
        }
    }
    ctx->pc = 0x18A0D4u;
    // 0x18a0d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18a0d8:
    // 0x18a0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A0E0u;
}
