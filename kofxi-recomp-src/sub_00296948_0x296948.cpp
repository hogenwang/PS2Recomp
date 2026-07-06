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

// Function: sub_00296948
// Address: 0x296948 - 0x296960
void sub_00296948_0x296948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296948_0x296948");
#endif

    ctx->pc = 0x296948u;

    // 0x296948: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x296948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x29694c: 0x80434830  lb          $v1, 0x4830($v0)
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18480)));
    // 0x296950: 0x24424830  addiu       $v0, $v0, 0x4830
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18480));
    // 0x296954: 0x3e00008  jr          $ra
    ctx->pc = 0x296954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296954u;
        // 0x296958: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29695Cu;
    // 0x29695c: 0x0  nop
    ctx->pc = 0x29695cu;
    // NOP
}
