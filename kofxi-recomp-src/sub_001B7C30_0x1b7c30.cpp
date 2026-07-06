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

// Function: sub_001B7C30
// Address: 0x1b7c30 - 0x1b7c70
void sub_001B7C30_0x1b7c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C30_0x1b7c30");
#endif

    switch (ctx->pc) {
        case 0x1b7c4cu: goto label_1b7c4c;
        case 0x1b7c54u: goto label_1b7c54;
        case 0x1b7c5cu: goto label_1b7c5c;
        default: break;
    }

    ctx->pc = 0x1b7c30u;

    // 0x1b7c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C30u;
        // 0x1b7c34: 0xa0850044  sb          $a1, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C38u;
    // 0x1b7c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7c40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7c44: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7C44u;
    SET_GPR_U32(ctx, 31, 0x1B7C4Cu);
    ctx->pc = 0x1B7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C44u;
    // 0x1b7c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7C44u, 0x1B7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C4Cu;
label_1b7c4c:
    // 0x1b7c4c: 0xc06df1c  jal         func_1B7C70
    ctx->pc = 0x1B7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C54u);
    ctx->pc = 0x1B7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C4Cu;
    // 0x1b7c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C70u, 0x1B7C4Cu, 0x1B7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C54u;
label_1b7c54:
    // 0x1b7c54: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7C54u;
    SET_GPR_U32(ctx, 31, 0x1B7C5Cu);
    ctx->pc = 0x1B7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C54u;
    // 0x1b7c58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7C54u, 0x1B7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C5Cu;
label_1b7c5c:
    // 0x1b7c5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C68u;
        // 0x1b7c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C70u;
}
