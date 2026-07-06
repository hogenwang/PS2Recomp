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

// Function: sub_001C64E0
// Address: 0x1c64e0 - 0x1c6518
void sub_001C64E0_0x1c64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C64E0_0x1c64e0");
#endif

    switch (ctx->pc) {
        case 0x1c64f4u: goto label_1c64f4;
        case 0x1c64fcu: goto label_1c64fc;
        case 0x1c6504u: goto label_1c6504;
        default: break;
    }

    ctx->pc = 0x1c64e0u;

    // 0x1c64e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c64e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c64e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c64e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c64e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c64ec: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C64ECu;
    SET_GPR_U32(ctx, 31, 0x1C64F4u);
    ctx->pc = 0x1C64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64ECu;
    // 0x1c64f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C64ECu, 0x1C64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64F4u;
label_1c64f4:
    // 0x1c64f4: 0xc071946  jal         func_1C6518
    ctx->pc = 0x1C64F4u;
    SET_GPR_U32(ctx, 31, 0x1C64FCu);
    ctx->pc = 0x1C64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64F4u;
    // 0x1c64f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6518u, 0x1C64F4u, 0x1C64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64FCu;
label_1c64fc:
    // 0x1c64fc: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C64FCu;
    SET_GPR_U32(ctx, 31, 0x1C6504u);
    ctx->pc = 0x1C6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64FCu;
    // 0x1c6500: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C64FCu, 0x1C6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6504u;
label_1c6504:
    // 0x1c6504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c650c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c650cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6510: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6510u;
        // 0x1c6514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6518u;
}
