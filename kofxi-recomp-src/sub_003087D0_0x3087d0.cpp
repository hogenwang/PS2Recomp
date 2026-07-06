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

// Function: sub_003087D0
// Address: 0x3087d0 - 0x308800
void sub_003087D0_0x3087d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003087D0_0x3087d0");
#endif

    switch (ctx->pc) {
        case 0x3087dcu: goto label_3087dc;
        default: break;
    }

    ctx->pc = 0x3087d0u;

    // 0x3087d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3087d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3087d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3087D4u;
    {
        const bool branch_taken_0x3087d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3087d4) {
            ctx->pc = 0x3087F8u;
            goto label_3087f8;
        }
    }
    ctx->pc = 0x3087DCu;
label_3087dc:
    // 0x3087dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3087dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3087e0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3087e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3087e4: 0x0  nop
    ctx->pc = 0x3087e4u;
    // NOP
    // 0x3087e8: 0x0  nop
    ctx->pc = 0x3087e8u;
    // NOP
    // 0x3087ec: 0x0  nop
    ctx->pc = 0x3087ecu;
    // NOP
    // 0x3087f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3087F0u;
    {
        const bool branch_taken_0x3087f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3087f0) {
            ctx->pc = 0x3087DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3087dc;
        }
    }
    ctx->pc = 0x3087F8u;
label_3087f8:
    // 0x3087f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3087F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3087FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F8u;
        // 0x3087fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308800u;
}
