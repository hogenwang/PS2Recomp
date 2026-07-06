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

// Function: sub_002E4F78
// Address: 0x2e4f78 - 0x2e4fa8
void sub_002E4F78_0x2e4f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F78_0x2e4f78");
#endif

    ctx->pc = 0x2e4f78u;

    // 0x2e4f78: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x2e4f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2e4f7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e4f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e4f80: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2e4f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2e4f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4F84u;
    {
        const bool branch_taken_0x2e4f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F84u;
        // 0x2e4f88: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f84) {
            ctx->pc = 0x2E4F94u;
            goto label_2e4f94;
        }
    }
    ctx->pc = 0x2E4F8Cu;
    // 0x2e4f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F8Cu;
        // 0x2e4f90: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F94u;
label_2e4f94:
    // 0x2e4f94: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2e4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e4f98: 0x2c630401  sltiu       $v1, $v1, 0x401
    ctx->pc = 0x2e4f98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2e4f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F9Cu;
        // 0x2e4fa0: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FA4u;
    // 0x2e4fa4: 0x0  nop
    ctx->pc = 0x2e4fa4u;
    // NOP
}
