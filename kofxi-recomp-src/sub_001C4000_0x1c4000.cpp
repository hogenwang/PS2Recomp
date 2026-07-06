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

// Function: sub_001C4000
// Address: 0x1c4000 - 0x1c4020
void sub_001C4000_0x1c4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4000_0x1c4000");
#endif

    ctx->pc = 0x1c4000u;

    // 0x1c4000: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4004: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c4008: 0x2442e9a0  addiu       $v0, $v0, -0x1660
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x1c400c: 0xac67e9a4  sw          $a3, -0x165C($v1)
    ctx->pc = 0x1c400cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961572), GPR_U32(ctx, 7));
    // 0x1c4010: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x1c4010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c4014: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1c4014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c4018: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4018u;
        // 0x1c401c: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4020u;
}
