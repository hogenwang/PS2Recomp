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

// Function: sub_00264CD0
// Address: 0x264cd0 - 0x264ce8
void sub_00264CD0_0x264cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CD0_0x264cd0");
#endif

    ctx->pc = 0x264cd0u;

    // 0x264cd0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x264cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x264cd4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x264cd8: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x264cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x264cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x264CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CDCu;
        // 0x264ce0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CE4u;
    // 0x264ce4: 0x0  nop
    ctx->pc = 0x264ce4u;
    // NOP
    if (ctx->pc == 0x264ce4u) { ctx->pc = 0x264ce8u; }
}
