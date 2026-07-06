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

// Function: sub_001B4E20
// Address: 0x1b4e20 - 0x1b4e68
void sub_001B4E20_0x1b4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4E20_0x1b4e20");
#endif

    switch (ctx->pc) {
        case 0x1b4e38u: goto label_1b4e38;
        case 0x1b4e50u: goto label_1b4e50;
        default: break;
    }

    ctx->pc = 0x1b4e20u;

    // 0x1b4e20: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b4e24: 0x2463a938  addiu       $v1, $v1, -0x56C8
    ctx->pc = 0x1b4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945080));
    // 0x1b4e28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4e2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b4e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E30u;
        // 0x1b4e34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4E38u;
label_1b4e38:
    // 0x1b4e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e44: 0x806ac5c  j           func_1AB170
    ctx->pc = 0x1B4E44u;
    ctx->pc = 0x1B4E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E44u;
    // 0x1b4e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB170u, 0x1B4E44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B4E4Cu;
    // 0x1b4e4c: 0x0  nop
    ctx->pc = 0x1b4e4cu;
    // NOP
label_1b4e50:
    // 0x1b4e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e5c: 0x806ac60  j           func_1AB180
    ctx->pc = 0x1B4E5Cu;
    ctx->pc = 0x1B4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E5Cu;
    // 0x1b4e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB180u;
    sub_001AB180_0x1ab180(rdram, ctx, runtime); return;
    ctx->pc = 0x1B4E64u;
    // 0x1b4e64: 0x0  nop
    ctx->pc = 0x1b4e64u;
    // NOP
}
