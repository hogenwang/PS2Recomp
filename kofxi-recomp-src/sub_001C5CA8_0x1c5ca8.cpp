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

// Function: sub_001C5CA8
// Address: 0x1c5ca8 - 0x1c5cc8
void sub_001C5CA8_0x1c5ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CA8_0x1c5ca8");
#endif

    ctx->pc = 0x1c5ca8u;

    // 0x1c5ca8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CACu;
        // 0x1c5cb0: 0xac44ef64  sw          $a0, -0x109C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CB4u;
    // 0x1c5cb4: 0x0  nop
    ctx->pc = 0x1c5cb4u;
    // NOP
    // 0x1c5cb8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c5cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CBCu;
        // 0x1c5cc0: 0x8c62ef64  lw          $v0, -0x109C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5CC4u;
    // 0x1c5cc4: 0x0  nop
    ctx->pc = 0x1c5cc4u;
    // NOP
}
