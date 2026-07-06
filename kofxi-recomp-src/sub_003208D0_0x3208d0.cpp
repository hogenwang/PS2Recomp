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

// Function: sub_003208D0
// Address: 0x3208d0 - 0x320900
void sub_003208D0_0x3208d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208D0_0x3208d0");
#endif

    ctx->pc = 0x3208d0u;

    // 0x3208d0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3208d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3208d4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3208d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3208d8: 0xa06003e0  sb          $zero, 0x3E0($v1)
    ctx->pc = 0x3208d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 992), (uint8_t)GPR_U32(ctx, 0));
    // 0x3208dc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3208dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3208e0: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x3208e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x3208e4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3208e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3208e8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3208e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3208ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3208ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3208F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208ECu;
        // 0x3208f0: 0xac64d918  sw          $a0, -0x26E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3208F4u;
    // 0x3208f4: 0x0  nop
    ctx->pc = 0x3208f4u;
    // NOP
    // 0x3208f8: 0x0  nop
    ctx->pc = 0x3208f8u;
    // NOP
    // 0x3208fc: 0x0  nop
    ctx->pc = 0x3208fcu;
    // NOP
}
