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

// Function: sub_00309710
// Address: 0x309710 - 0x309730
void sub_00309710_0x309710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309710_0x309710");
#endif

    ctx->pc = 0x309710u;

    // 0x309710: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309714: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x309714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x309718: 0x8c431e50  lw          $v1, 0x1E50($v0)
    ctx->pc = 0x309718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7760)));
    // 0x30971c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309720: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x309724: 0x80c258c  j           func_309630
    ctx->pc = 0x309724u;
    ctx->pc = 0x309728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309724u;
    // 0x309728: 0xac431e58  sw          $v1, 0x1E58($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7768), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309630u, 0x309724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x30972Cu;
    // 0x30972c: 0x0  nop
    ctx->pc = 0x30972cu;
    // NOP
}
