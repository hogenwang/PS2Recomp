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

// Function: sub_001D8A58
// Address: 0x1d8a58 - 0x1d8a80
void sub_001D8A58_0x1d8a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8A58_0x1d8a58");
#endif

    ctx->pc = 0x1d8a58u;

    // 0x1d8a58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8a5c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1d8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1d8a60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d8a64: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d8a68: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1d8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1d8a6c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1d8a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1d8a70: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1d8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1d8a74: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1d8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1d8a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A78u;
        // 0x1d8a7c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A80u;
}
