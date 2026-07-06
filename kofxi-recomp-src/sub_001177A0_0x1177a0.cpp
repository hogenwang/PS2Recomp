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

// Function: sub_001177A0
// Address: 0x1177a0 - 0x1177b0
void sub_001177A0_0x1177a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001177A0_0x1177a0");
#endif

    ctx->pc = 0x1177a0u;

    // 0x1177a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1177a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177a4: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x1177a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x1177a8: 0x8045dc4  j           func_117710
    ctx->pc = 0x1177A8u;
    ctx->pc = 0x1177ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177A8u;
    // 0x1177ac: 0x34841020  ori         $a0, $a0, 0x1020 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x117710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117710u, 0x1177A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1177B0u;
}
