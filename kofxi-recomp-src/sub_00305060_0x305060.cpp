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

// Function: sub_00305060
// Address: 0x305060 - 0x305090
void sub_00305060_0x305060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305060_0x305060");
#endif

    ctx->pc = 0x305060u;

    // 0x305060: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x305060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x305064: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x305064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x305068: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x305068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x30506c: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x30506cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x305070: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x305070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x305074: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x305074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x305078: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x305078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x30507c: 0x3e00008  jr          $ra
    ctx->pc = 0x30507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30507Cu;
        // 0x305080: 0xac860034  sw          $a2, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305084u;
    // 0x305084: 0x0  nop
    ctx->pc = 0x305084u;
    // NOP
    // 0x305088: 0x0  nop
    ctx->pc = 0x305088u;
    // NOP
    // 0x30508c: 0x0  nop
    ctx->pc = 0x30508cu;
    // NOP
    if (ctx->pc == 0x30508cu) { ctx->pc = 0x305090u; }
}
