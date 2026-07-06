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

// Function: sub_00128EE0
// Address: 0x128ee0 - 0x128ef8
void sub_00128EE0_0x128ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128EE0_0x128ee0");
#endif

    ctx->pc = 0x128ee0u;

    // 0x128ee0: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x128ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x128ee4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x128ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x128ee8: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x128ee8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x128eec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x128eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x128ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x128EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128EF0u;
        // 0x128ef4: 0xfdc400a8  sd          $a0, 0xA8($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128EF8u;
}
