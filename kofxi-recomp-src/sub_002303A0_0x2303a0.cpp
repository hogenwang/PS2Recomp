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

// Function: sub_002303A0
// Address: 0x2303a0 - 0x2303b8
void sub_002303A0_0x2303a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002303A0_0x2303a0");
#endif

    ctx->pc = 0x2303a0u;

    // 0x2303a0: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x2303a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2303a4: 0x3042fff5  andi        $v0, $v0, 0xFFF5
    ctx->pc = 0x2303a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65525);
    // 0x2303a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2303a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2303ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2303ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2303B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303ACu;
        // 0x2303b0: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2303B4u;
    // 0x2303b4: 0x0  nop
    ctx->pc = 0x2303b4u;
    // NOP
}
