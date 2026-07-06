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

// Function: sub_002CFBB8
// Address: 0x2cfbb8 - 0x2cfbf8
void sub_002CFBB8_0x2cfbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFBB8_0x2cfbb8");
#endif

    ctx->pc = 0x2cfbb8u;

    // 0x2cfbb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2cfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cfbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfbc0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x2cfbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2cfbc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfbc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfbc8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2cfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2cfbcc: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2cfbccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cfbd0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2cfbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cfbd4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2cfbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cfbd8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2cfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2cfbdc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2cfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cfbe0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2cfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2cfbe4: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2cfbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x2cfbe8: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x2cfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x2cfbec: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x2cfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x2cfbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBF0u;
        // 0x2cfbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFBF8u;
}
