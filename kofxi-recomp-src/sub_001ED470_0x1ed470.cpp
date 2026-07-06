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

// Function: sub_001ED470
// Address: 0x1ed470 - 0x1ed4a8
void sub_001ED470_0x1ed470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED470_0x1ed470");
#endif

    ctx->pc = 0x1ed470u;

    // 0x1ed470: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1ed474: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ed474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed478: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED478u;
    {
        const bool branch_taken_0x1ed478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED478u;
        // 0x1ed47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed478) {
            ctx->pc = 0x1ED4A0u;
            goto label_1ed4a0;
        }
    }
    ctx->pc = 0x1ED480u;
    // 0x1ed480: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ed480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ed484: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ed488: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ed488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ed48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed490: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ed490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ed494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed498: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed49c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ed4a0:
    // 0x1ed4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4A8u;
}
