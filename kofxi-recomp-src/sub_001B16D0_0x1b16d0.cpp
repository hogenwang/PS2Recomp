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

// Function: sub_001B16D0
// Address: 0x1b16d0 - 0x1b1708
void sub_001B16D0_0x1b16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B16D0_0x1b16d0");
#endif

    switch (ctx->pc) {
        case 0x1b16e4u: goto label_1b16e4;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b16f4u: goto label_1b16f4;
        default: break;
    }

    ctx->pc = 0x1b16d0u;

    // 0x1b16d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b16d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b16d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b16d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b16dc: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B16DCu;
    SET_GPR_U32(ctx, 31, 0x1B16E4u);
    ctx->pc = 0x1B16E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16DCu;
    // 0x1b16e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B16DCu, 0x1B16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16E4u;
label_1b16e4:
    // 0x1b16e4: 0xc06c5c2  jal         func_1B1708
    ctx->pc = 0x1B16E4u;
    SET_GPR_U32(ctx, 31, 0x1B16ECu);
    ctx->pc = 0x1B16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16E4u;
    // 0x1b16e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1708u, 0x1B16E4u, 0x1B16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16ECu;
label_1b16ec:
    // 0x1b16ec: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B16ECu;
    SET_GPR_U32(ctx, 31, 0x1B16F4u);
    ctx->pc = 0x1B16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B16ECu;
    // 0x1b16f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B16ECu, 0x1B16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B16F4u;
label_1b16f4:
    // 0x1b16f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b16f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b16f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b16f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b16fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1700: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1700u;
        // 0x1b1704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1708u;
}
