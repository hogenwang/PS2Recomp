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

// Function: sub_00232948
// Address: 0x232948 - 0x232968
void sub_00232948_0x232948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232948_0x232948");
#endif

    ctx->pc = 0x232948u;

    // 0x232948: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x232948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x23294c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x232950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x232950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x232954: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x232954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x232958: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23295c: 0x3e00008  jr          $ra
    ctx->pc = 0x23295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23295Cu;
        // 0x232960: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232964u;
    // 0x232964: 0x0  nop
    ctx->pc = 0x232964u;
    // NOP
}
