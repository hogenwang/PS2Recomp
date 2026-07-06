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

// Function: sub_00189E10
// Address: 0x189e10 - 0x189e50
void sub_00189E10_0x189e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189E10_0x189e10");
#endif

    ctx->pc = 0x189e10u;

    // 0x189e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e14: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189E14u;
    {
        const bool branch_taken_0x189e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x189e14) {
            ctx->pc = 0x189E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189E14u;
            // 0x189e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189E3Cu;
            goto label_189e3c;
        }
    }
    ctx->pc = 0x189E1Cu;
    // 0x189e1c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x189E1Cu;
    {
        const bool branch_taken_0x189e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e1c) {
            ctx->pc = 0x189E3Cu;
            goto label_189e3c;
        }
    }
    ctx->pc = 0x189E24u;
    // 0x189e24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189E24u;
    {
        const bool branch_taken_0x189e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E24u;
        // 0x189e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e24) {
            ctx->pc = 0x189E3Cu;
            goto label_189e3c;
        }
    }
    ctx->pc = 0x189E2Cu;
    // 0x189e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189E30u;
    {
        const bool branch_taken_0x189e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e30) {
            ctx->pc = 0x189E3Cu;
            goto label_189e3c;
        }
    }
    ctx->pc = 0x189E38u;
    // 0x189e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189e3c:
    // 0x189e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x189E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189E44u;
    // 0x189e44: 0x0  nop
    ctx->pc = 0x189e44u;
    // NOP
    // 0x189e48: 0x0  nop
    ctx->pc = 0x189e48u;
    // NOP
    // 0x189e4c: 0x0  nop
    ctx->pc = 0x189e4cu;
    // NOP
}
