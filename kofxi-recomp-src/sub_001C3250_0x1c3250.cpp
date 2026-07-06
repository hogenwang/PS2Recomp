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

// Function: sub_001C3250
// Address: 0x1c3250 - 0x1c3270
void sub_001C3250_0x1c3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3250_0x1c3250");
#endif

    ctx->pc = 0x1c3250u;

    // 0x1c3250: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1c3250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c3254: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c3258: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c3258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c325c: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1c325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1c3260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c3260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c3264: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3268: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3268u;
        // 0x1c326c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3270u;
}
