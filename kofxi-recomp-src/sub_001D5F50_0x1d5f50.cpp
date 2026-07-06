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

// Function: sub_001D5F50
// Address: 0x1d5f50 - 0x1d5f78
void sub_001D5F50_0x1d5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5F50_0x1d5f50");
#endif

    ctx->pc = 0x1d5f50u;

    // 0x1d5f50: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1d5f54: 0xac448068  sw          $a0, -0x7F98($v0)
    ctx->pc = 0x1d5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934632), GPR_U32(ctx, 4));
    // 0x1d5f58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F58u;
    {
        const bool branch_taken_0x1d5f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F58u;
        // 0x1d5f5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f58) {
            ctx->pc = 0x1D5F6Cu;
            goto label_1d5f6c;
        }
    }
    ctx->pc = 0x1D5F60u;
    // 0x1d5f60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5f64: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1d5f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1d5f68: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1d5f68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d5f6c:
    // 0x1d5f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F74u;
    // 0x1d5f74: 0x0  nop
    ctx->pc = 0x1d5f74u;
    // NOP
    if (ctx->pc == 0x1d5f74u) { ctx->pc = 0x1d5f78u; }
}
