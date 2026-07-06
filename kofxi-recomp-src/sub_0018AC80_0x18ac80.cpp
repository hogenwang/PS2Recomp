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

// Function: sub_0018AC80
// Address: 0x18ac80 - 0x18acd0
void sub_0018AC80_0x18ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AC80_0x18ac80");
#endif

    ctx->pc = 0x18ac80u;

    // 0x18ac80: 0x8c820498  lw          $v0, 0x498($a0)
    ctx->pc = 0x18ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x18ac84: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18ac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x18ac88: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x18AC88u;
    {
        const bool branch_taken_0x18ac88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac88) {
            ctx->pc = 0x18AC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC88u;
            // 0x18ac8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ACC8u;
            goto label_18acc8;
        }
    }
    ctx->pc = 0x18AC90u;
    // 0x18ac90: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x18ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x18ac94: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x18ac98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18AC98u;
    {
        const bool branch_taken_0x18ac98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac98) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18ACA0u;
    // 0x18aca0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x18aca4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ACA4u;
    {
        const bool branch_taken_0x18aca4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18aca4) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18ACACu;
    // 0x18acac: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x18acb0: 0x28420220  slti        $v0, $v0, 0x220
    ctx->pc = 0x18acb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x18acb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ACB4u;
    {
        const bool branch_taken_0x18acb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18acb4) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18ACBCu;
    // 0x18acbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18ACBCu;
    {
        const bool branch_taken_0x18acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACBCu;
        // 0x18acc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acbc) {
            ctx->pc = 0x18ACC8u;
            goto label_18acc8;
        }
    }
    ctx->pc = 0x18ACC4u;
label_18acc4:
    // 0x18acc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18acc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18acc8:
    // 0x18acc8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ACD0u;
}
