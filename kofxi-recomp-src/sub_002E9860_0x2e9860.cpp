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

// Function: sub_002E9860
// Address: 0x2e9860 - 0x2e9898
void sub_002E9860_0x2e9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9860_0x2e9860");
#endif

    switch (ctx->pc) {
        case 0x2e9888u: goto label_2e9888;
        default: break;
    }

    ctx->pc = 0x2e9860u;

    // 0x2e9860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9864: 0x24860014  addiu       $a2, $a0, 0x14
    ctx->pc = 0x2e9864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2e9868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e986c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e986cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e9870: 0x24a5fe60  addiu       $a1, $a1, -0x1A0
    ctx->pc = 0x2e9870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
    // 0x2e9874: 0x8c827cc0  lw          $v0, 0x7CC0($a0)
    ctx->pc = 0x2e9874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31936)));
    // 0x2e9878: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e9878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e987c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x2e987cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e9880: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E9880u;
    SET_GPR_U32(ctx, 31, 0x2E9888u);
    ctx->pc = 0x2E9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9880u;
    // 0x2e9884: 0x8c47000c  lw          $a3, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E9880u, 0x2E9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9888u;
label_2e9888:
    // 0x2e9888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e988c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9890: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9890u;
        // 0x2e9894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9898u;
}
