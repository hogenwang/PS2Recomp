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

// Function: sub_001DCBC0
// Address: 0x1dcbc0 - 0x1dcbe0
void sub_001DCBC0_0x1dcbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBC0_0x1dcbc0");
#endif

    ctx->pc = 0x1dcbc0u;

    // 0x1dcbc0: 0x2ca5008c  sltiu       $a1, $a1, 0x8C
    ctx->pc = 0x1dcbc0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x1dcbc4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBC4u;
    {
        const bool branch_taken_0x1dcbc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBC4u;
        // 0x1dcbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbc4) {
            ctx->pc = 0x1DCBD8u;
            goto label_1dcbd8;
        }
    }
    ctx->pc = 0x1DCBCCu;
    // 0x1dcbcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcbd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dcbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dcbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1dcbd8:
    // 0x1dcbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBE0u;
}
