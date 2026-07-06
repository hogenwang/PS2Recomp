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

// Function: sub_001B6C60
// Address: 0x1b6c60 - 0x1b6c98
void sub_001B6C60_0x1b6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C60_0x1b6c60");
#endif

    switch (ctx->pc) {
        case 0x1b6c74u: goto label_1b6c74;
        case 0x1b6c7cu: goto label_1b6c7c;
        case 0x1b6c84u: goto label_1b6c84;
        default: break;
    }

    ctx->pc = 0x1b6c60u;

    // 0x1b6c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6c6c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C74u);
    ctx->pc = 0x1B6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C6Cu;
    // 0x1b6c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6C6Cu, 0x1B6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C74u;
label_1b6c74:
    // 0x1b6c74: 0xc06db26  jal         func_1B6C98
    ctx->pc = 0x1B6C74u;
    SET_GPR_U32(ctx, 31, 0x1B6C7Cu);
    ctx->pc = 0x1B6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C74u;
    // 0x1b6c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C98u, 0x1B6C74u, 0x1B6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C7Cu;
label_1b6c7c:
    // 0x1b6c7c: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C84u);
    ctx->pc = 0x1B6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C7Cu;
    // 0x1b6c80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B6C7Cu, 0x1B6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C84u;
label_1b6c84:
    // 0x1b6c84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6c88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C90u;
        // 0x1b6c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C98u;
}
