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

// Function: sub_002C8A28
// Address: 0x2c8a28 - 0x2c8a58
void sub_002C8A28_0x2c8a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8A28_0x2c8a28");
#endif

    switch (ctx->pc) {
        case 0x2c8a3cu: goto label_2c8a3c;
        default: break;
    }

    ctx->pc = 0x2c8a28u;

    // 0x2c8a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8a2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c8a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8A34u;
    {
        const bool branch_taken_0x2c8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A34u;
        // 0x2c8a38: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a34) {
            ctx->pc = 0x2C8A48u;
            goto label_2c8a48;
        }
    }
    ctx->pc = 0x2C8A3Cu;
label_2c8a3c:
    // 0x2c8a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8a40: 0x80b5f30  j           func_2D7CC0
    ctx->pc = 0x2C8A40u;
    ctx->pc = 0x2C8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A40u;
    // 0x2c8a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7CC0u, 0x2C8A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C8A48u;
label_2c8a48:
    // 0x2c8a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A4Cu;
        // 0x2c8a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8A54u;
    // 0x2c8a54: 0x0  nop
    ctx->pc = 0x2c8a54u;
    // NOP
    if (ctx->pc == 0x2c8a54u) { ctx->pc = 0x2c8a58u; }
}
