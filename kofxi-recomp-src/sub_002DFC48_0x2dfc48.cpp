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

// Function: sub_002DFC48
// Address: 0x2dfc48 - 0x2dfc90
void sub_002DFC48_0x2dfc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC48_0x2dfc48");
#endif

    switch (ctx->pc) {
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc7cu: goto label_2dfc7c;
        default: break;
    }

    ctx->pc = 0x2dfc48u;

    // 0x2dfc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfc4c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2dfc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2dfc50: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2dfc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2dfc54: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2dfc58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dfc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc5c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2dfc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dfc60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dfc60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dfc64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc68: 0xc0b55a8  jal         func_2D56A0
    ctx->pc = 0x2DFC68u;
    SET_GPR_U32(ctx, 31, 0x2DFC70u);
    ctx->pc = 0x2DFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC68u;
    // 0x2dfc6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56A0u, 0x2DFC68u, 0x2DFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC70u;
label_2dfc70:
    // 0x2dfc70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc74: 0xc0b22a2  jal         func_2C8A88
    ctx->pc = 0x2DFC74u;
    SET_GPR_U32(ctx, 31, 0x2DFC7Cu);
    ctx->pc = 0x2DFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC74u;
    // 0x2dfc78: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A88u, 0x2DFC74u, 0x2DFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC7Cu;
label_2dfc7c:
    // 0x2dfc7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dfc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2dfc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dfc84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2dfc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfc88: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC88u;
        // 0x2dfc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFC90u;
}
