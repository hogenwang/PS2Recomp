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

// Function: sub_002BF620
// Address: 0x2bf620 - 0x2bf648
void sub_002BF620_0x2bf620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF620_0x2bf620");
#endif

    switch (ctx->pc) {
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf638u: goto label_2bf638;
        default: break;
    }

    ctx->pc = 0x2bf620u;

    // 0x2bf620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf628: 0xc0afcf8  jal         func_2BF3E0
    ctx->pc = 0x2BF628u;
    SET_GPR_U32(ctx, 31, 0x2BF630u);
    ctx->pc = 0x2BF3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF3E0u, 0x2BF628u, 0x2BF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF630u;
label_2bf630:
    // 0x2bf630: 0xc0a7208  jal         func_29C820
    ctx->pc = 0x2BF630u;
    SET_GPR_U32(ctx, 31, 0x2BF638u);
    ctx->pc = 0x2BF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF630u;
    // 0x2bf634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C820u, 0x2BF630u, 0x2BF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF638u;
label_2bf638:
    // 0x2bf638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf63c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF63Cu;
        // 0x2bf640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF644u;
    // 0x2bf644: 0x0  nop
    ctx->pc = 0x2bf644u;
    // NOP
}
