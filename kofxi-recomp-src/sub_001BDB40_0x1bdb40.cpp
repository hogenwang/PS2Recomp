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

// Function: sub_001BDB40
// Address: 0x1bdb40 - 0x1bdb68
void sub_001BDB40_0x1bdb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB40_0x1bdb40");
#endif

    ctx->pc = 0x1bdb40u;

    // 0x1bdb40: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1bdb40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdb44: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x1bdb44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb48: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1bdb48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bdb4c: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1bdb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bdb50: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x1bdb50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1bdb54: 0xa483002c  sh          $v1, 0x2C($a0)
    ctx->pc = 0x1bdb54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb58: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x1bdb58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1bdb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB5Cu;
        // 0x1bdb60: 0xa482002e  sh          $v0, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDB64u;
    // 0x1bdb64: 0x0  nop
    ctx->pc = 0x1bdb64u;
    // NOP
}
