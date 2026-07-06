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

// Function: sub_00297090
// Address: 0x297090 - 0x2970b0
void sub_00297090_0x297090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297090_0x297090");
#endif

    switch (ctx->pc) {
        case 0x2970a0u: goto label_2970a0;
        default: break;
    }

    ctx->pc = 0x297090u;

    // 0x297090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297098: 0xc0a67ba  jal         func_299EE8
    ctx->pc = 0x297098u;
    SET_GPR_U32(ctx, 31, 0x2970A0u);
    ctx->pc = 0x29709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297098u;
    // 0x29709c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE8u, 0x297098u, 0x2970A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970A0u;
label_2970a0:
    // 0x2970a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2970a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2970a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2970A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2970A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970A4u;
        // 0x2970a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2970ACu;
    // 0x2970ac: 0x0  nop
    ctx->pc = 0x2970acu;
    // NOP
}
