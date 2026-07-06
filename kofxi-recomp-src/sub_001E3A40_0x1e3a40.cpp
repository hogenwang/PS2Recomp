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

// Function: sub_001E3A40
// Address: 0x1e3a40 - 0x1e3a68
void sub_001E3A40_0x1e3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3A40_0x1e3a40");
#endif

    ctx->pc = 0x1e3a40u;

    // 0x1e3a40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A40u;
        // 0x1e3a44: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A48u;
    // 0x1e3a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A48u;
        // 0x1e3a4c: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A50u;
    // 0x1e3a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3a5c: 0x8078e9a  j           func_1E3A68
    ctx->pc = 0x1E3A5Cu;
    ctx->pc = 0x1E3A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A5Cu;
    // 0x1e3a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    sub_001E3A68_0x1e3a68(rdram, ctx, runtime); return;
    ctx->pc = 0x1E3A64u;
    // 0x1e3a64: 0x0  nop
    ctx->pc = 0x1e3a64u;
    // NOP
}
