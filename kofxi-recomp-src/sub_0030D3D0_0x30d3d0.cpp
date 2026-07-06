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

// Function: sub_0030D3D0
// Address: 0x30d3d0 - 0x30d3f0
void sub_0030D3D0_0x30d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3D0_0x30d3d0");
#endif

    ctx->pc = 0x30d3d0u;

    // 0x30d3d0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x30d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x30d3d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30d3d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x30d3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3DCu;
        // 0x30d3e0: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3E4u;
    // 0x30d3e4: 0x0  nop
    ctx->pc = 0x30d3e4u;
    // NOP
    // 0x30d3e8: 0x0  nop
    ctx->pc = 0x30d3e8u;
    // NOP
    // 0x30d3ec: 0x0  nop
    ctx->pc = 0x30d3ecu;
    // NOP
}
