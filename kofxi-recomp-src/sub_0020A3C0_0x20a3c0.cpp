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

// Function: sub_0020A3C0
// Address: 0x20a3c0 - 0x20a3e0
void sub_0020A3C0_0x20a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A3C0_0x20a3c0");
#endif

    ctx->pc = 0x20a3c0u;

    // 0x20a3c0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a3c4: 0x8c64a060  lw          $a0, -0x5FA0($v1)
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20a3c8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a3cc: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x20a3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x20a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3D0u;
        // 0x20a3d4: 0xac64a060  sw          $a0, -0x5FA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A3D8u;
    // 0x20a3d8: 0x0  nop
    ctx->pc = 0x20a3d8u;
    // NOP
    // 0x20a3dc: 0x0  nop
    ctx->pc = 0x20a3dcu;
    // NOP
}
