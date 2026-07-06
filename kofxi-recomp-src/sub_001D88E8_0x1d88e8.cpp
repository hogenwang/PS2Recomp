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

// Function: sub_001D88E8
// Address: 0x1d88e8 - 0x1d8910
void sub_001D88E8_0x1d88e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D88E8_0x1d88e8");
#endif

    ctx->pc = 0x1d88e8u;

    // 0x1d88e8: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d88ec: 0xac448074  sw          $a0, -0x7F8C($v0)
    ctx->pc = 0x1d88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934644), GPR_U32(ctx, 4));
    // 0x1d88f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D88F0u;
    {
        const bool branch_taken_0x1d88f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88F0u;
        // 0x1d88f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88f0) {
            ctx->pc = 0x1D8904u;
            goto label_1d8904;
        }
    }
    ctx->pc = 0x1D88F8u;
    // 0x1d88f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d88fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d8900: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1d8900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d8904:
    // 0x1d8904: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D890Cu;
    // 0x1d890c: 0x0  nop
    ctx->pc = 0x1d890cu;
    // NOP
    if (ctx->pc == 0x1d890cu) { ctx->pc = 0x1d8910u; }
}
