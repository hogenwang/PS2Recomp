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

// Function: sub_00311250
// Address: 0x311250 - 0x311270
void sub_00311250_0x311250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311250_0x311250");
#endif

    ctx->pc = 0x311250u;

    // 0x311250: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x311250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x311254: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x311254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x311258: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x311258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31125c: 0x244207e0  addiu       $v0, $v0, 0x7E0
    ctx->pc = 0x31125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x311260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311264: 0x3e00008  jr          $ra
    ctx->pc = 0x311264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311264u;
        // 0x311268: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31126Cu;
    // 0x31126c: 0x0  nop
    ctx->pc = 0x31126cu;
    // NOP
    if (ctx->pc == 0x31126cu) { ctx->pc = 0x311270u; }
}
