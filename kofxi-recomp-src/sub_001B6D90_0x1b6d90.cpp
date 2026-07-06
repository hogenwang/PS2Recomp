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

// Function: sub_001B6D90
// Address: 0x1b6d90 - 0x1b6dc8
void sub_001B6D90_0x1b6d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D90_0x1b6d90");
#endif

    switch (ctx->pc) {
        case 0x1b6da4u: goto label_1b6da4;
        case 0x1b6dacu: goto label_1b6dac;
        case 0x1b6db4u: goto label_1b6db4;
        default: break;
    }

    ctx->pc = 0x1b6d90u;

    // 0x1b6d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6d9c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6DA4u);
    ctx->pc = 0x1B6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D9Cu;
    // 0x1b6da0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6D9Cu, 0x1B6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DA4u;
label_1b6da4:
    // 0x1b6da4: 0xc06db72  jal         func_1B6DC8
    ctx->pc = 0x1B6DA4u;
    SET_GPR_U32(ctx, 31, 0x1B6DACu);
    ctx->pc = 0x1B6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DA4u;
    // 0x1b6da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6DC8u, 0x1B6DA4u, 0x1B6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DACu;
label_1b6dac:
    // 0x1b6dac: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B6DACu;
    SET_GPR_U32(ctx, 31, 0x1B6DB4u);
    ctx->pc = 0x1B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DACu;
    // 0x1b6db0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B6DACu, 0x1B6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DB4u;
label_1b6db4:
    // 0x1b6db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6db8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DC0u;
        // 0x1b6dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6DC8u;
}
