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

// Function: sub_00297070
// Address: 0x297070 - 0x297090
void sub_00297070_0x297070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297070_0x297070");
#endif

    switch (ctx->pc) {
        case 0x297080u: goto label_297080;
        default: break;
    }

    ctx->pc = 0x297070u;

    // 0x297070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297078: 0xc0a67ba  jal         func_299EE8
    ctx->pc = 0x297078u;
    SET_GPR_U32(ctx, 31, 0x297080u);
    ctx->pc = 0x29707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297078u;
    // 0x29707c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE8u, 0x297078u, 0x297080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297080u;
label_297080:
    // 0x297080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297084: 0x3e00008  jr          $ra
    ctx->pc = 0x297084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297084u;
        // 0x297088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29708Cu;
    // 0x29708c: 0x0  nop
    ctx->pc = 0x29708cu;
    // NOP
    if (ctx->pc == 0x29708cu) { ctx->pc = 0x297090u; }
}
