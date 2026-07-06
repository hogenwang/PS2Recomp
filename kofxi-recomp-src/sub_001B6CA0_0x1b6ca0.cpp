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

// Function: sub_001B6CA0
// Address: 0x1b6ca0 - 0x1b6ce8
void sub_001B6CA0_0x1b6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6CA0_0x1b6ca0");
#endif

    switch (ctx->pc) {
        case 0x1b6cbcu: goto label_1b6cbc;
        case 0x1b6cc8u: goto label_1b6cc8;
        case 0x1b6cd0u: goto label_1b6cd0;
        default: break;
    }

    ctx->pc = 0x1b6ca0u;

    // 0x1b6ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6cb4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6CB4u;
    SET_GPR_U32(ctx, 31, 0x1B6CBCu);
    ctx->pc = 0x1B6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CB4u;
    // 0x1b6cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6CB4u, 0x1B6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CBCu;
label_1b6cbc:
    // 0x1b6cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cc0: 0xc06db3a  jal         func_1B6CE8
    ctx->pc = 0x1B6CC0u;
    SET_GPR_U32(ctx, 31, 0x1B6CC8u);
    ctx->pc = 0x1B6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CC0u;
    // 0x1b6cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CE8u, 0x1B6CC0u, 0x1B6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CC8u;
label_1b6cc8:
    // 0x1b6cc8: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B6CC8u;
    SET_GPR_U32(ctx, 31, 0x1B6CD0u);
    ctx->pc = 0x1B6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CC8u;
    // 0x1b6ccc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B6CC8u, 0x1B6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CD0u;
label_1b6cd0:
    // 0x1b6cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE0u;
        // 0x1b6ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6CE8u;
}
