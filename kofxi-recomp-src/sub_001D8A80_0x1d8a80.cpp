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

// Function: sub_001D8A80
// Address: 0x1d8a80 - 0x1d8ab0
void sub_001D8A80_0x1d8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8A80_0x1d8a80");
#endif

    ctx->pc = 0x1d8a80u;

    // 0x1d8a80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8a84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8a88: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1d8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1d8a8c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1d8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1d8a90: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1d8a90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1d8a94: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1d8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1d8a98: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1d8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1d8a9c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1d8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1d8aa0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1d8aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1d8aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA4u;
        // 0x1d8aa8: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AACu;
    // 0x1d8aac: 0x0  nop
    ctx->pc = 0x1d8aacu;
    // NOP
}
