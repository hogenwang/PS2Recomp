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

// Function: sub_001E7D20
// Address: 0x1e7d20 - 0x1e7d48
void sub_001E7D20_0x1e7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D20_0x1e7d20");
#endif

    switch (ctx->pc) {
        case 0x1e7d34u: goto label_1e7d34;
        default: break;
    }

    ctx->pc = 0x1e7d20u;

    // 0x1e7d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7d2c: 0xc06de8c  jal         func_1B7A30
    ctx->pc = 0x1E7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7D34u);
    ctx->pc = 0x1E7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D2Cu;
    // 0x1e7d30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A30u, 0x1E7D2Cu, 0x1E7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D34u;
label_1e7d34:
    // 0x1e7d34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e7d38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D40u;
        // 0x1e7d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7D48u;
}
