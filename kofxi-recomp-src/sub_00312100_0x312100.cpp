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

// Function: sub_00312100
// Address: 0x312100 - 0x312140
void sub_00312100_0x312100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312100_0x312100");
#endif

    ctx->pc = 0x312100u;

    // 0x312100: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x312100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x312104: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x312108: 0x8c440990  lw          $a0, 0x990($v0)
    ctx->pc = 0x312108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2448)));
    // 0x31210c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x31210cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x312110: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x312114: 0x8c42d920  lw          $v0, -0x26E0($v0)
    ctx->pc = 0x312114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957344)));
    // 0x312118: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x312118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31211c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x312120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x312120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x312124: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312128: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x312128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31212c: 0x401027  not         $v0, $v0
    ctx->pc = 0x31212cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x312130: 0x3e00008  jr          $ra
    ctx->pc = 0x312130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312130u;
        // 0x312134: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312138u;
    // 0x312138: 0x0  nop
    ctx->pc = 0x312138u;
    // NOP
    // 0x31213c: 0x0  nop
    ctx->pc = 0x31213cu;
    // NOP
}
