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

// Function: sub_00264CE8
// Address: 0x264ce8 - 0x264d08
void sub_00264CE8_0x264ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CE8_0x264ce8");
#endif

    ctx->pc = 0x264ce8u;

    // 0x264ce8: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x264ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x264cec: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x264cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x264cf0: 0x43202  srl         $a2, $a0, 8
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x264cf4: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x264cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x264cf8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x264cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x264cfc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x264cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x264d00: 0x3e00008  jr          $ra
    ctx->pc = 0x264D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D00u;
        // 0x264d04: 0xa0a60002  sb          $a2, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264D08u;
}
