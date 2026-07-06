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

// Function: sub_00264C88
// Address: 0x264c88 - 0x264cd0
void sub_00264C88_0x264c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264C88_0x264c88");
#endif

    ctx->pc = 0x264c88u;

    // 0x264c88: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x264c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264c8c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x264c8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x264c90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x264c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x264c94: 0x3e00008  jr          $ra
    ctx->pc = 0x264C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C94u;
        // 0x264c98: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C9Cu;
    // 0x264c9c: 0x0  nop
    ctx->pc = 0x264c9cu;
    // NOP
    // 0x264ca0: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x264ca0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x264ca4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x264ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264ca8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x264ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x264cac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x264cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x264cb0: 0x90860003  lbu         $a2, 0x3($a0)
    ctx->pc = 0x264cb0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x264cb4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x264cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x264cb8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x264cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x264cbc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x264cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x264cc0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x264cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x264cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x264CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CC4u;
        // 0x264cc8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264CCCu;
    // 0x264ccc: 0x0  nop
    ctx->pc = 0x264cccu;
    // NOP
    if (ctx->pc == 0x264cccu) { ctx->pc = 0x264cd0u; }
}
