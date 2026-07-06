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

// Function: sub_001ED4A8
// Address: 0x1ed4a8 - 0x1ed4e0
void sub_001ED4A8_0x1ed4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED4A8_0x1ed4a8");
#endif

    ctx->pc = 0x1ed4a8u;

    // 0x1ed4a8: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x1ed4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1ed4ac: 0x248400d4  addiu       $a0, $a0, 0xD4
    ctx->pc = 0x1ed4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x1ed4b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED4B0u;
    {
        const bool branch_taken_0x1ed4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4B0u;
        // 0x1ed4b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4b0) {
            ctx->pc = 0x1ED4C4u;
            goto label_1ed4c4;
        }
    }
    ctx->pc = 0x1ED4B8u;
    // 0x1ed4b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ed4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ed4bc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ED4BCu;
    {
        const bool branch_taken_0x1ed4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed4bc) {
            ctx->pc = 0x1ED4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED4BCu;
            // 0x1ed4c0: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED4C4u;
            goto label_1ed4c4;
        }
    }
    ctx->pc = 0x1ED4C4u;
label_1ed4c4:
    // 0x1ed4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4CCu;
    // 0x1ed4cc: 0x0  nop
    ctx->pc = 0x1ed4ccu;
    // NOP
    // 0x1ed4d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4D4u;
        // 0x1ed4d8: 0x2442e7e0  addiu       $v0, $v0, -0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4DCu;
    // 0x1ed4dc: 0x0  nop
    ctx->pc = 0x1ed4dcu;
    // NOP
    if (ctx->pc == 0x1ed4dcu) { ctx->pc = 0x1ed4e0u; }
}
