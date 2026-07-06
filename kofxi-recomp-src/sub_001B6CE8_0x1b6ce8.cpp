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

// Function: sub_001B6CE8
// Address: 0x1b6ce8 - 0x1b6d08
void sub_001B6CE8_0x1b6ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6CE8_0x1b6ce8");
#endif

    ctx->pc = 0x1b6ce8u;

    // 0x1b6ce8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b6cec: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x1b6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x1b6cf0: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x1b6cf0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b6cf4: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6CF4u;
    {
        const bool branch_taken_0x1b6cf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cf4) {
            ctx->pc = 0x1B6CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CF4u;
            // 0x1b6cf8: 0xac820058  sw          $v0, 0x58($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CFCu;
            goto label_1b6cfc;
        }
    }
    ctx->pc = 0x1B6CFCu;
label_1b6cfc:
    // 0x1b6cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CFCu;
        // 0x1b6d00: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D04u;
    // 0x1b6d04: 0x0  nop
    ctx->pc = 0x1b6d04u;
    // NOP
    if (ctx->pc == 0x1b6d04u) { ctx->pc = 0x1b6d08u; }
}
