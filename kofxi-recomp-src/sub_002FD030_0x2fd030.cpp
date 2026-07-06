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

// Function: sub_002FD030
// Address: 0x2fd030 - 0x2fd060
void sub_002FD030_0x2fd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD030_0x2fd030");
#endif

    ctx->pc = 0x2fd030u;

    // 0x2fd030: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x2fd030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x2fd034: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd038: 0x8c65b7c0  lw          $a1, -0x4840($v1)
    ctx->pc = 0x2fd038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948800)));
    // 0x2fd03c: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fd040: 0x342195b8  ori         $at, $at, 0x95B8
    ctx->pc = 0x2fd040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38328);
    // 0x2fd044: 0xac850c50  sw          $a1, 0xC50($a0)
    ctx->pc = 0x2fd044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3152), GPR_U32(ctx, 5));
    // 0x2fd048: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fd048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fd04c: 0xa12021  addu        $a0, $a1, $at
    ctx->pc = 0x2fd04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2fd050: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD050u;
        // 0x2fd054: 0xac640c48  sw          $a0, 0xC48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD058u;
    // 0x2fd058: 0x0  nop
    ctx->pc = 0x2fd058u;
    // NOP
    // 0x2fd05c: 0x0  nop
    ctx->pc = 0x2fd05cu;
    // NOP
    if (ctx->pc == 0x2fd05cu) { ctx->pc = 0x2fd060u; }
}
