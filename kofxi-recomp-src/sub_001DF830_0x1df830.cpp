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

// Function: sub_001DF830
// Address: 0x1df830 - 0x1df878
void sub_001DF830_0x1df830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF830_0x1df830");
#endif

    ctx->pc = 0x1df830u;

    // 0x1df830: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1df834: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x1df834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x1df838: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x1df838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1df83c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1df83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1df840: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1df844: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1df844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1df848: 0x80a3006c  lb          $v1, 0x6C($a1)
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x1df84c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1df84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1df850: 0x80a2006d  lb          $v0, 0x6D($a1)
    ctx->pc = 0x1df850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x1df854: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1df854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1df858: 0x80a3006e  lb          $v1, 0x6E($a1)
    ctx->pc = 0x1df858u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x1df85c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1df85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1df860: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1df860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1df864: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1df864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1df868: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1df868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1df86c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF86Cu;
        // 0x1df870: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF874u;
    // 0x1df874: 0x0  nop
    ctx->pc = 0x1df874u;
    // NOP
}
