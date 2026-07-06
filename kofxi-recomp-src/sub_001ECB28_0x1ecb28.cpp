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

// Function: sub_001ECB28
// Address: 0x1ecb28 - 0x1ecb58
void sub_001ECB28_0x1ecb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB28_0x1ecb28");
#endif

    ctx->pc = 0x1ecb28u;

    // 0x1ecb28: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ecb28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ecb2c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ecb30: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ecb34: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1ecb34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ecb38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ecb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ecb3c: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x1ecb3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1ecb40: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ecb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ecb44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ecb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ecb48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ecb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ecb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB4Cu;
        // 0x1ecb50: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB54u;
    // 0x1ecb54: 0x0  nop
    ctx->pc = 0x1ecb54u;
    // NOP
    if (ctx->pc == 0x1ecb54u) { ctx->pc = 0x1ecb58u; }
}
