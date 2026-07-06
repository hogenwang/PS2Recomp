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

// Function: sub_002E03B0
// Address: 0x2e03b0 - 0x2e03f8
void sub_002E03B0_0x2e03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E03B0_0x2e03b0");
#endif

    switch (ctx->pc) {
        case 0x2e03d8u: goto label_2e03d8;
        case 0x2e03e4u: goto label_2e03e4;
        default: break;
    }

    ctx->pc = 0x2e03b0u;

    // 0x2e03b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e03b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e03b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e03bc: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2e03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2e03c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e03c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03c4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e03c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e03c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e03c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e03ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03d0: 0xc0b5632  jal         func_2D58C8
    ctx->pc = 0x2E03D0u;
    SET_GPR_U32(ctx, 31, 0x2E03D8u);
    ctx->pc = 0x2E03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03D0u;
    // 0x2e03d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D58C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D58C8u, 0x2E03D0u, 0x2E03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03D8u;
label_2e03d8:
    // 0x2e03d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e03d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03dc: 0xc0b22a2  jal         func_2C8A88
    ctx->pc = 0x2E03DCu;
    SET_GPR_U32(ctx, 31, 0x2E03E4u);
    ctx->pc = 0x2E03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03DCu;
    // 0x2e03e0: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A88u, 0x2E03DCu, 0x2E03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03E4u;
label_2e03e4:
    // 0x2e03e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e03e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e03ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E03F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03F0u;
        // 0x2e03f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E03F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E03F8u;
}
