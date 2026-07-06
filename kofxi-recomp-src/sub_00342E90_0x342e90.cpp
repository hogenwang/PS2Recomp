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

// Function: sub_00342E90
// Address: 0x342e90 - 0x342eb0
void sub_00342E90_0x342e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E90_0x342e90");
#endif

    ctx->pc = 0x342e90u;

    // 0x342e90: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342e94: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x342e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x342e98: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x342e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x342e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x342E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E9Cu;
        // 0x342ea0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342EA4u;
    // 0x342ea4: 0x0  nop
    ctx->pc = 0x342ea4u;
    // NOP
    // 0x342ea8: 0x0  nop
    ctx->pc = 0x342ea8u;
    // NOP
    // 0x342eac: 0x0  nop
    ctx->pc = 0x342eacu;
    // NOP
}
