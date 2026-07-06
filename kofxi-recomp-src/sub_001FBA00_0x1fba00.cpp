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

// Function: sub_001FBA00
// Address: 0x1fba00 - 0x1fba28
void sub_001FBA00_0x1fba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBA00_0x1fba00");
#endif

    ctx->pc = 0x1fba00u;

    // 0x1fba00: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x1fba04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fba04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fba08: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBA08u;
    {
        const bool branch_taken_0x1fba08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA08u;
        // 0x1fba0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba08) {
            ctx->pc = 0x1FBA1Cu;
            goto label_1fba1c;
        }
    }
    ctx->pc = 0x1FBA10u;
    // 0x1fba10: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1fba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1fba14: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1fba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1fba18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fba18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fba1c:
    // 0x1fba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA24u;
    // 0x1fba24: 0x0  nop
    ctx->pc = 0x1fba24u;
    // NOP
    if (ctx->pc == 0x1fba24u) { ctx->pc = 0x1fba28u; }
}
