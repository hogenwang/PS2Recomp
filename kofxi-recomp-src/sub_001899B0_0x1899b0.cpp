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

// Function: sub_001899B0
// Address: 0x1899b0 - 0x1899c0
void sub_001899B0_0x1899b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001899B0_0x1899b0");
#endif

    ctx->pc = 0x1899b0u;

    // 0x1899b0: 0xa48504f8  sh          $a1, 0x4F8($a0)
    ctx->pc = 0x1899b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1272), (uint16_t)GPR_U32(ctx, 5));
    // 0x1899b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1899B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1899B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B4u;
        // 0x1899b8: 0xa48604f6  sh          $a2, 0x4F6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1270), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1899B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1899BCu;
    // 0x1899bc: 0x0  nop
    ctx->pc = 0x1899bcu;
    // NOP
    if (ctx->pc == 0x1899bcu) { ctx->pc = 0x1899c0u; }
}
