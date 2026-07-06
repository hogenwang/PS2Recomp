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

// Function: sub_002B0DE8
// Address: 0x2b0de8 - 0x2b0e18
void sub_002B0DE8_0x2b0de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0DE8_0x2b0de8");
#endif

    ctx->pc = 0x2b0de8u;

    // 0x2b0de8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b0dec: 0xac8500ac  sw          $a1, 0xAC($a0)
    ctx->pc = 0x2b0decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
    // 0x2b0df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0DF0u;
    {
        const bool branch_taken_0x2b0df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DF0u;
        // 0x2b0df4: 0xac8600b0  sw          $a2, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0df0) {
            ctx->pc = 0x2B0E04u;
            goto label_2b0e04;
        }
    }
    ctx->pc = 0x2B0DF8u;
    // 0x2b0df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0dfc: 0x80a3ba0  j           func_28EE80
    ctx->pc = 0x2B0DFCu;
    ctx->pc = 0x2B0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DFCu;
    // 0x2b0e00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE80u, 0x2B0DFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B0E04u;
label_2b0e04:
    // 0x2b0e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E0Cu;
    // 0x2b0e0c: 0x0  nop
    ctx->pc = 0x2b0e0cu;
    // NOP
    // 0x2b0e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E10u;
        // 0x2b0e14: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0E18u;
}
